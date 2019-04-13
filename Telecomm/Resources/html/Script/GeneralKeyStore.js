/*数字签名*/
function GeneralSignTransaction(dataNonce,dataGasPrice,dataGasLimit,toEthAddress,dataValue,priveKey)
{
    var data_nonce = EthJS.Util.intToHex(dataNonce);
    var data_gasprice = EthJS.Util.intToHex(dataGasPrice);
    var data_gasLimit = EthJS.Util.intToHex(dataGasLimit);
    var data_value = EthJS.Util.intToHex(Number(dataValue) * 1.0e18);
    var rawTx = {
        nonce: data_nonce,
        gasPrice: data_gasprice,
        gasLimit: data_gasLimit,
        to: toEthAddress,
        value: data_value
    };
    var jsonData;
    var tx = new EthJS.Tx(rawTx);
    var privKey = EthJS.Util.toBuffer(EthJS.Util.addHexPrefix(priveKey));
    if (EthJS.Util.isValidPrivate(privKey)) {
        tx.sign(privKey);
        var serializedHexTx = '0x' + tx.serialize().toString('hex');
        jsonData = {
            "result":"true",
            "SignTransaction":serializedHexTx,
        }
    }
    else {
        jsonData = {
            "result":"false",
            "msg":"Invalid priveKey",
        }
    }
	return jsonData;
}