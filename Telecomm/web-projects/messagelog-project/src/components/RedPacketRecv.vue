<!--红包接收
{
  type:"RedPacketRecv",
  name:"",
  time:"",
  msgID:"",
  strNotice:"",
  bOpen:false,
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <div :id="model.msgID" style='overflow:hidden;'>
            <div style="float:left;margin-left: 7px;">
                <li>
                    <div @click="checkRedPack()" :class="model.bOpen? 'rectangle-open':'rectangle'">
                        <div :class="model.bOpen? 'redPackImg-open':'redPackImg'">
                            <img style="padding-top: 13px;padding-left:10px;width: 40px;" src="qrc:/html/Resources/html/redPack.png">
                                </div>
                            <div :class="model.bOpen? 'redPackText-open':'redPackText'">
                                <div class="packetNotice" style="width:150px;height:25px;color:white;font-size: 14px;padding-top:12px;overflow: hidden;white-space: nowrap;text-overflow: ellipsis;">{{model.strNotice}}</div>
                                <div class="checkOrOpen" style="width:150px;height:20px;color:white;font-size: 12px;">
                                    {{ model.bOpen? $t("redPacket.hasReceived"):$t("redPacket.doRecv") }}
                                </div>
                            </div>
                            <div style="width:240px;height:20px;background-color:white;float:left;color:grey;font-size:12px;padding-left: 15px;">{{$t("redPacket.title")}}</div>
                        </div>
                </li>
            </div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'RedPacketRecv',
    props: ['model'],
    methods: {
        checkRedPack: function() {
            window.bridge.slotMsgID(this.model.msgID);
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