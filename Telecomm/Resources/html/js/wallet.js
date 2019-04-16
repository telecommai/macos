function recoveryFromWord(word)
{
	var jsonData = BTC_AccordMnemonicRecovery(word);
	window.bridge.slotRecoveryResult(JSON.stringify(jsonData));
}
function GeneralSignTransaction(privateWIFKey,toAddress,transferAmount,strUtxo)
{
    var transaction = require('/BTC_Transaction.js');
    var jsonData = transaction(privateWIFKey,toAddress,transferAmount,strUtxo);
    window.bridge.slotTransactionData(JSON.stringify(jsonData));
}
new QWebChannel(qt.webChannelTransport,
function(channel)
{
    window.bridge = channel.objects.web;
}
);
