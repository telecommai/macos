var bip39 = new BIP39('en');
var bip32_passphrase_hash = null;
var bip32_source_key = null;
var coin = "btc_main";
var bip32_derivation_path = null;

var COINS = {
    btc_main: {
        name: "Bitcoin",
        network: "Mainnet",
        prefix: 0,
        private_prefix: 0+0x80,
        bip32_public: BITCOIN_MAINNET_PUBLIC,
        bip32_private: BITCOIN_MAINNET_PRIVATE
    },
    btc_test: {
        name: "Bitcoin",
        network: "Testnet",
        prefix: 0x6f,
        private_prefix: 0x6f+0x80,
        bip32_public: BITCOIN_TESTNET_PUBLIC,
        bip32_private: BITCOIN_TESTNET_PRIVATE
    },
    doge_main: {
        name: "Dogecoin",
        network: "Mainnet",
        prefix: 0x1e,
        private_prefix: 0x1e+0x80,
        bip32_public: DOGECOIN_MAINNET_PUBLIC,
        bip32_private: DOGECOIN_MAINNET_PRIVATE
    },
    doge_test: {
        name: "Dogecoin",
        network: "Testnet",
        prefix: 0x71,
        private_prefix: 0x71+0x80,
        bip32_public: DOGECOIN_TESTNET_PUBLIC,
        bip32_private: DOGECOIN_TESTNET_PRIVATE
    },
    ltc_main: {
        name: "Litecoin",
        network: "Mainnet",
        prefix: 0x30,
        private_prefix: 0x30+0x80,
        bip32_public: LITECOIN_MAINNET_PUBLIC,
        bip32_private: LITECOIN_MAINNET_PRIVATE
    },
    ltc_test: {
        name: "Litecoin",
        network: "Testnet",
        prefix: 0x6f,
        private_prefix: 0x6f+0x80,
        bip32_public: LITECOIN_TESTNET_PUBLIC,
        bip32_private: LITECOIN_TESTNET_PRIVATE
    },
    mona_main: {
        name: "Monacoin",
        network: "Mainnet",
        prefix: 0x32,
        private_prefix: 0x32+0x80,
        bip32_public: MONACOIN_MAINNET_PUBLIC,
        bip32_private: MONACOIN_MAINNET_PRIVATE
    },
    mona_test: {
        name: "Monacoin",
        network: "Testnet",
        prefix: 0x6f,
        private_prefix: 0x6f+0x80,
        bip32_public: MONACOIN_TESTNET_PUBLIC,
        bip32_private: MONACOIN_TESTNET_PRIVATE
    },
    kuma_main: {
        name: "Kumacoin",
        network: "Mainnet",
        prefix: 0x2d,
        private_prefix: 0x2d+0x80,
        bip32_public: KUMACOIN_MAINNET_PUBLIC,
        bip32_private: KUMACOIN_MAINNET_PRIVATE
    },
    kuma_test: {
        name: "Kumacoin",
        network: "Testnet",
        prefix: 0x75,
        private_prefix: 0x75+0x80,
        bip32_public: KUMACOIN_TESTNET_PUBLIC,
        bip32_private: KUMACOIN_TESTNET_PRIVATE
    }
};

function BTC_AccordMnemonicRecovery(mnemonicData) {
    mnemonicData = mnemonicData.normalize("NFKD");
    if(!bip39.validate(mnemonicData)&&mnemonicData!=''){
        return BTC_errorMsg("bip39 unvalidate");
    }
    else if (mnemonicData != '') {
        bip32_passphrase_hash = bip39.mnemonicToSeed(mnemonicData, "");
        return BTC_updatePassphraseHash();
    }
}

function BTC_CreateMnemonic() {
    var seed = bip39.generateMnemonic((12/3)*32);
    var jsonData = {
        "result":"true",
        "mnemonic":seed,
    }
    return jsonData;
}

function BTC_errorMsg(msg) {
    var errMsg = {
        "result":"false",
        "msg":msg,
    }
    return errMsg;
}

function BTC_updatePassphraseHash() {
    var hasher = new jsSHA(bip32_passphrase_hash, 'HEX');
    var I = hasher.getHMAC("Bitcoin seed", "TEXT", "SHA-512", "HEX");
    var il = Crypto.util.hexToBytes(I.slice(0, 64));
    var ir = Crypto.util.hexToBytes(I.slice(64, 128));

    var gen_bip32 = new BIP32();
    try {
        gen_bip32.eckey = new Bitcoin.ECKey(il);
        gen_bip32.eckey.pub = gen_bip32.eckey.getPubPoint();
        gen_bip32.eckey.setCompressed(true);
        gen_bip32.eckey.pubKeyHash = Bitcoin.Util.sha256ripe160(gen_bip32.eckey.pub.getEncoded(true));
        gen_bip32.has_private_key = true;

        gen_bip32.chain_code = ir;
        gen_bip32.child_index = 0;
        gen_bip32.parent_fingerprint = Bitcoin.Util.hexToBytes("00000000");
        gen_bip32.version = COINS[coin].bip32_private;
        gen_bip32.depth = 0;

        gen_bip32.build_extended_public_key();
        gen_bip32.build_extended_private_key();
    } catch (err) {
        return BTC_errorMsg(err);
    }
   return BTC_updateSourceKey(gen_bip32.extended_private_key_string("base58"));
}

function BTC_updateSourceKey(sourceKey)
{
    try {
        if(sourceKey.length == 0)
            return BTC_errorMsg("sourceKey length = 0");
        bip32_source_key = new BIP32(sourceKey);
    } catch(err) {
        bip32_source_key = null;
        return BTC_errorMsg(err);
    }
    bip32_derivation_path = "m/0'/0/0";
    return BTC_updateResult();
}

function BTC_getCoinFromKey(k) {
    for(var coin_name in COINS) {
        var c = COINS[coin_name];
        if(k.version == c.bip32_public || k.version == c.bip32_private) {
            return c;
        }
    }
    return null;
}

function BTC_updateResult() {
    var p = '' + bip32_derivation_path;
    var k = 0;
    var i = 0;

    p = p.replace('i', i).replace('k', k);

    try {
        if(bip32_source_key == null) {
            return BTC_errorMsg("bip32_source_key is null");
        }
        var result = bip32_source_key.derive(p);
    } catch (err) {
        return BTC_errorMsg(err.toString());
    }

    var key_coin = BTC_getCoinFromKey(result);

    if( result.has_private_key ) {
        var derivedPrivateKey = result.extended_private_key_string("base58");
        var privkeyBytes = result.eckey.priv.toByteArrayUnsigned();
        while (privkeyBytes.length < 32) {
            privkeyBytes.unshift(0)
        };
        var bytes = [key_coin.private_prefix].concat(privkeyBytes).concat([1]);
        var checksum = Crypto.SHA256(Crypto.SHA256(bytes, {asBytes: true}), {asBytes: true}).slice(0, 4);
        var deriverPrivateKeyWif = Bitcoin.Base58.encode(bytes.concat(checksum));
    } else {
        return BTC_errorMsg("No private key available");
    }

    var deriverPublicKey = result.extended_public_key_string("base58");

    var derivedPublicKeyHex = Crypto.util.bytesToHex(result.eckey.pub.getEncoded(true));

    var hash160 = result.eckey.pubKeyHash;
    var addr = new Bitcoin.Address(hash160);
    addr.version = key_coin.prefix;
    var address = addr.toString()
    var jsonData = {
        "result":"true",
        "address":address,
        "privkey":deriverPrivateKeyWif,
        "pubkey":derivedPublicKeyHex,
    }
    return jsonData;
}