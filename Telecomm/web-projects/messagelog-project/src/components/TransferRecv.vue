<!--交易转入
{
  type:"TransferRecv",
  name:"",
  time:"",
  msgID:"",
  transTitle:"",
  transContent:"",
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <div @click='getTransfer()' class='rectangle' :id="model.msgID" style='cursor:pointer;overflow:hidden;width:250px;height:85px;margin-left:16px;border-radius: 5px;background-color:#0033ff'>
            <div style='float:left;width:250px;height:7px;color:white;font-size:14px'>
                <div style='color:white;font-size:18px;padding-left:10px;padding-top:10px'>{{model.transTitle}}</div>
                <div style='color:white;padding-left:10px;padding-top:5px;word-break:break-word;word-wrap:break-word;white-space:normal;width:170px;'>{{model.transContent}}</div>
            </div>
            <div style='float:right;position:right;'>
                <img style='width:50px;padding-right:10px;padding-top:10px' src='qrc:/html/image/Resources/html/image/balance.png' />
                </div>
            </div>
    </div>
</template>
<script>
export default {
    name: 'TransferRecv',
    props: ['model'],
    methods: {
        getTransfer: function() {
            window.bridge.slotMsgID(this.model.msgID);
        },
    },
}
</script>