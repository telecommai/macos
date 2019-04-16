<!-- 交易转出
{
  type:"PerTransferSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  transTitle:"",
  transContent:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divMyHead'>
            <img width=30px height=30px :src ="model.strBuddyHeadPath" />
                            </p>
            <div style='float:right;'>
                <ul class=''>
                    <li>
                        <img class='MessageState' style='border-radius:50%;' width=12px height=12px :src="model.strMsgState" />
                     </li>
                    <li>
                        <div v-if='isLocaleZh' @click='getTransfer()' style='cursor:pointer; float:right; border-radius: 5px;position: relative;display: inline-block;word-wrap: break-word;padding: 10px;width:160px;height: 50px;background-color: #0033ff;margin: 5 0 5 0;margin-right:3px'>
                            <div style='float: left;'>
                                <p style='display: block; margin: 0 0 5 0;font-size: 18px;color: white;'>{{model.transTitle}}</p>
                                <p style='color: white;'>{{model.transContent}}</p>
                            </div>
                            <div style='float: right;'><img src='qrc:/html/image/Resources/html/image/balance.png' width='50px'/></div>
                            </div>


                            <div v-if='!isLocaleZh' @click='getTransfer()' style='cursor:pointer; float:right; border-radius: 5px;position: relative;display: inline-block;word-wrap: break-word;padding: 10px;width:250px;height: 70px;background-color: #0033ff;margin: 5 0 5 0;margin-right:3px'>
                                <div style='float: left;width:190px;'>
                                    <p style='display: block; margin: 0 0 5 0;font-size: 18px;color: white;'>{{model.transTitle}}</p>
                                    <p style='color: white;'>{{model.transContent}}</p>
                                </div>
                                <div style='float: right;;margin-top: 10px;'><img src='qrc:/html/image/Resources/html/image/balance.png' width='50px'/></div>
                                </div>


                    </li>
                </ul>
            </div>
            <div class='score' v-if="model.nScore > 0">
                <div style='text-align:right;font-size:13px;color:#e4ba7b;'>
                    <img width='20px' height='20px' src='qrc://:/html/Resources/html/diamond1.png' style='margin-bottom: -4px' />+{{model.nScore}}
            </div>
                </div>
            </div>
</template>
<script>
export default {
    name: 'PerTransferSend',
    props: ['model'],
    data: function() {
        return {
            isLocaleZh: window.$Vue.$i18n.locale == 'zh_CN',
        }
    },
    methods: {
        getTransfer: function() {
            window.bridge.slotMsgID(this.model.strMsgID);
        },
    },
}
</script>