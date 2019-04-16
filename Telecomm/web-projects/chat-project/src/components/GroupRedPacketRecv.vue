<!-- 群组聊天接收红包格式
{
  type:"GroupRedPacketRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  strBuddyNickName:"",
  strNotice:"",
  nScore:0,
  bOpen:false
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width='30px' height='30px' :src="model.strBuddyHeadPath" />
            <div style='text-align:left;color:#B2B2B2;font-size:12px;margin-left:10px'>{{model.strBuddyNickName}}</div>
        </p>
        <div @click="openRedPack()" :class="model.bOpen? 'rectangle-open':'rectangle'">
            <div :class="model.bOpen? 'redPackImg-open':'redPackImg'">
                <img style="padding-top: 13px;padding-left:10px;width: 40px;" src="qrc:/html/Resources/html/redPack.png">
             </div>
                <div :class="model.bOpen? 'redPackText-open':'redPackText'">
                    <div class="packetNotice" style="width:150px;height:25px;color:white;font-size: 14px;padding-top:12px;overflow: hidden;white-space: nowrap;text-overflow: ellipsis;">
                        {{model.strNotice}}
                    </div>
                    <div class="checkOrOpen" style="width:150px;height:20px;color:white;font-size: 12px;" >
                        {{ model.bOpen? $t("redPacket.hasReceived"):$t("redPacket.doRecv") }}
                    </div>
                </div>
                <div style="width:240px;height:20px;background-color:white;float:left;color:grey;font-size:12px;padding-left: 15px;">{{$t("redPacket.title")}}</div>
            </div>
            <div style='margin-left:40px; font-size:13px;color:#e4ba7b;'><img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-bottom: -4px' />+{{model.nScore}}
        </div>
            </div>
</template>
<script>
export default {
    name: 'GroupRedPacketRecv',
    props: ['model'],
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        openRedPack: function() {
            window.bridge.slotMsgID(this.model.strMsgID);
        },
    },
}
</script>
<style scoped>
.rectangle {
    margin-top: 5px;
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
    margin-top: 5px;
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