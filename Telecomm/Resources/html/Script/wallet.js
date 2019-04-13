function recoveryFromWord(word)
{
	var json = AccordMnemonicRecovery(word);
	window.bridge.slotRecoveryResult(JSON.stringify(json));
}
function recoveryFromKey(key)
{
    var json = AccordPrivateKeyRecovery(key);
    window.bridge.slotRecoveryResult(JSON.stringify(json));
}
/*数字签名*/

function generalSign(dataNonce,dataGasPrice,dataGasLimit,toEthAddress,dataValue,priveKey)
{
	var json = GeneralSignTransaction(dataNonce,dataGasPrice,dataGasLimit,toEthAddress,dataValue,priveKey);
    window.bridge.slotTransactionData(JSON.stringify(json));
}

function clickFirm()
{
    var data = document.getElementById("Mnemonic");
 //   var jsonData = AccordMnemonicRecovery(data.value);
//	alert(JSON.stringify(jsonData));
    //var data = document.getElementById("Key");
    //var jsonData =  AccordPrivateKeyRecovery(data.value);
    //console.log(jsonData);

    var jsonData =  generalSign(9,18000000000,21000,"0xd0ee5841e06d46877b87d41b1a223a09c81ad73e",7,'0x4c87ea453d9c3072a5c19b0d41467c1a9408d58c68f595c29488b1d4611aee5d');
    alert(jsonData);
}

new QWebChannel(qt.webChannelTransport,
                function(channel)
                {
                window.bridge = channel.objects.web;
                }
                );
