//通过私钥恢复钱包

function AccordPrivateKeyRecovery(privateKey)
{
    var tchar = privateKey.substr(0,2);
    if (tchar == "0x") {
        privateKey = privateKey.substr(2,privateKey.length);
    }
    var jsonData;
    var priv = hexstrToBuffer(privateKey);
    if (EthJS.Util.isValidPrivate(priv))
    {
        var address = EthJS.Util.bufferToHex(EthJS.Util.privateToAddress(priv));
        jsonData = {
            "result":"true",
            "address":address,
            "privkey":privateKey,
            "pubkey":"",
        }
    }
    else
    {
        jsonData = {
            "result":"false",
            "msg":"Invalid mnemonic",
        }
    }
    return jsonData;
}

function hexstrToBuffer(hexstr) {
    return EthJS.Util.toBuffer(EthJS.Util.addHexPrefix(hexstr));
}