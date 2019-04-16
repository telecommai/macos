<!-- 交易转入
{
  type:"PerTransferRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  transTitle:"",
  transContent:"",
  nScore:0,
}
 -->
<template>
    <div :id='model.strMsgID' style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width='30px' height='30px' :src='model.strBuddyHeadPath' />
        </p>


            <div v-if='isLocaleZh' @click='getTransfer()' style='cursor:pointer; float:left; border-radius: 5px;position: relative;display: inline-block;word-wrap: break-word;padding: 10px;width:160px;height: 50px;background-color: #0033ff;margin: 5 0 5 0;'>
                <div style='float: left;'>
                    <p style='display: block; margin: 0 0 5 0;font-size: 18px;color: white;'>{{model.transTitle}}</p>
                    <p style='color: white;'>{{model.transContent}}</p>
                </div>
                <div style='float: right;'>
                    <img src='qrc:/html/image/Resources/html/image/balance.png' width='50px' />
                </div>
            </div>


            <div v-if='!isLocaleZh' @click='getTransfer()' style='cursor:pointer; float:left; border-radius: 5px;position: relative;display: inline-block;word-wrap: break-word;padding: 10px;width:250px;height: 70px;background-color: #0033ff;margin: 5 0 5 0;'>
                <div style='float: left;width:190px;'>
                    <p style='display: block; margin: 0 0 5 0;font-size: 18px;color: white;'>{{model.transTitle}}</p>
                    <p style='color: white;word-break:break-word;word-wrap:break-word;white-space:normal;width:170px;'>{{model.transContent}}</p>
                </div>
                <div style='float: right;margin-top: 10px;'>
                    <img src='qrc:/html/image/Resources/html/image/balance.png' width='50px' />
                </div>
            </div>



            <div style='font-size:13px;color:#e4ba7b;'><img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-left: 10px;margin-bottom: -4px'>
                 +{{model.nScore}}
            </div>
    </div>
</template>
<script>
export default {
    name: 'PerTransferRecv',
    props: ['model'],
    data: function() {
        return {
            isLocaleZh: window.$Vue.$i18n.locale == 'zh_CN',
        }
    },
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        getTransfer: function() {
            window.bridge.slotMsgID(this.model.strMsgID);
        },
    },
}
</script>