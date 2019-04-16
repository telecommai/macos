var mnemonics = { "english": new Mnemonic("english") };
var mnemonic = mnemonics["english"];
var seed = null;
var bip32RootKey = null;
var bip32ExtendedKey = null;
var network = bitcoinjs.bitcoin.networks.bitcoin;

//根据助记词恢复钱包
function AccordMnemonicRecovery(mnemonicData)
{
    var errorText = findPhraseErrors(mnemonicData);
    if (errorText) {
        return errorMsg("invalid data");
    }
    calcBip32RootKeyFromSeed(mnemonicData, "");
    calcForDerivationPath();
    return calculateValues();
}

function errorMsg(msg) {
    var errMsg = {
        "result":"false",
        "msg":msg,
    }
    return errMsg;
}

function findPhraseErrors(phrase)
{
    phrase = mnemonic.normalizeString(phrase);
    var words = phraseToWordArray(phrase);
    if (words.length == 0) {
        return "Blank mnemonic";
    }
    for (var i=0; i<words.length; i++) {
        var word = words[i];
        var language = "english";
        if (WORDLISTS[language].indexOf(word) == -1) {
            console.log("Finding closest match to " + word);
            return "Finding closest match to " + word;
        }
    }
    var properPhrase = wordArrayToPhrase(words);
    var isValid = mnemonic.check(properPhrase);
    if (!isValid)
    {
        return "Invalid mnemonic";
    }
    return false;
}

function phraseToWordArray(phrase)
{
    var words = phrase.split(/\s/g);
    var noBlanks = [];
    for (var i=0; i<words.length; i++) {
        var word = words[i];
        if (word.length > 0) {
            noBlanks.push(word);
        }
    }
    return noBlanks;
}

function wordArrayToPhrase(words) {
    var phrase = words.join(" ");
    return phrase;
}

function calcBip32RootKeyFromSeed(phrase, passphrase)
{
    seed = mnemonic.toSeed(phrase, passphrase);
    bip32RootKey = bitcoinjs.bitcoin.HDNode.fromSeedHex(seed, network);
}

function calcForDerivationPath()
{
    var derivationPath = "m/44'/60'/0'/0";
    bip32ExtendedKey = calcBip32ExtendedKey(derivationPath);
}

function calcBip32ExtendedKey(path)
{
    // Check there's a root key to derive from
    if (!bip32RootKey) {
        return bip32RootKey;
    }
    var extendedKey = bip32RootKey;
    // Derive the key from the path
    var pathBits = path.split("/");
    for (var i=0; i<pathBits.length; i++) {
        var bit = pathBits[i];
        var index = parseInt(bit);
        if (isNaN(index)) {
            continue;
        }
        var hardened = bit[bit.length-1] == "'";
        var isPriv = !(extendedKey.isNeutered());
        var invalidDerivationPath = hardened && !isPriv;
        if (invalidDerivationPath) {
            extendedKey = null;
        }
        else if (hardened) {
            extendedKey = extendedKey.deriveHardened(index);
        }
        else {
            extendedKey = extendedKey.derive(index);
        }
    }
    return extendedKey
}

function calculateValues()
{
    var key = "NA";
    key = bip32ExtendedKey.derive(0);
    var keyPair = key.keyPair;
    var address = keyPair.getAddress().toString();
    var hasPrivkey = !key.isNeutered();
    var privkey = "NA";
    if (hasPrivkey) {
        privkey = keyPair.toWIF(network);
    }

    var pubkey = keyPair.getPublicKeyBuffer().toString('hex');
    var indexText = "m/44'/60'/0'/0/3";

    var privKeyBuffer = keyPair.d.toBuffer(32);
    privkey = privKeyBuffer.toString('hex');
    var addressBuffer = ethUtil.privateToAddress(privKeyBuffer);
    var hexAddress = addressBuffer.toString('hex');
    var checksumAddress = ethUtil.toChecksumAddress(hexAddress);
    address = ethUtil.addHexPrefix(checksumAddress);
    privkey = ethUtil.addHexPrefix(privkey);
    pubkey = ethUtil.addHexPrefix(pubkey);

    var jsonData = {
        "result":"true",
        "address":address,
        "privkey":privkey,
        "pubkey":pubkey,
    }
    return jsonData;
}
