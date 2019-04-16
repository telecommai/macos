<!-- 个人聊天发送红包格式
{
  type:"PerRedPacketSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  strNotice:"",
  nScore:0,
  bOpen:false,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divMyHead'>
            <img width=30px height=30px :src="model.strBuddyHeadPath" />
                    </p>
            <div style="float:right;">
                <ul class=''>
                    <li>
                        <img class='MessageState' style='border-radius:50%; margin-top:73px' width=12px height=12px :src="model.strMsgState" />
                    </li>
                    <li>
                        <div @click="checkRedPack()" :class="model.bOpen? 'rectangle-open':'rectangle'">
                            <div :class="model.bOpen? 'redPackImg-open':'redPackImg'">
                                <img style="padding-top: 13px;padding-left:10px;width: 40px;" src="qrc:/html/Resources/html/redPack.png">
                                </div>
                                <div :class="model.bOpen? 'redPackText-open':'redPackText'">
                                    <div class="packetNotice" style="width:150px;height:25px;color:white;font-size: 14px;padding-top:12px;overflow: hidden;white-space: nowrap;text-overflow: ellipsis;">
                                        {{model.strNotice}}
                                    </div>
                                    <div class="checkOrOpen" style="width:150px;height:20px;color:white;font-size: 12px;">
                                        {{ model.bOpen? $t("redPacket.hasReceived"):$t("redPacket.view") }}
                                    </div>
                                </div>
                                <div style="width:240px;height:20px;background-color:white;float:left;color:grey;font-size:12px;padding-left: 15px;">
                                    {{$t("redPacket.title")}}
                                </div>
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
    name: 'PerRedPacketSend',
    props: ['model'],
    methods: {
        checkRedPack: function() {
            window.bridge.slotMsgID(this.model.strMsgID);
        },
    },
}
</script>
<style scoped>
.rectangle {
    cursor: hand;
    overflow: hidden;
    width: 211px;
    height: 85px;
    float: left;
    margin-bottom: 10px;
    border-radius: 10px;
    border: 1px solid orange;
}

.rectangle-open {
    cursor: hand;
    overflow: hidden;
    width: 211px;
    height: 85px;
    float: left;
    margin-bottom: 10px;
    border-radius: 10px;
    border: 1px solid #FECEA0
}

.redPackImg {
    float: left;
    width: 60px;
    height: 65px;
    background-color: orange;
    border-right: 1px solid orange;
}

.redPackImg-open {
    float: left;
    width: 60px;
    height: 65px;
    background-color: #FECEA0;
    border-right: 1px solid #FECEA0;
}

.redPackText {
    float: left;
    width: 150px;
    height: 65px;
    background-color: orange;
    position: right;
    color: white;
    font-size: 14px;
}

.redPackText-open {
    float: left;
    width: 150px;
    height: 65px;
    background-color: #FECEA0;
    position: right;
    color: white;
    font-size: 14px;
}
</style>