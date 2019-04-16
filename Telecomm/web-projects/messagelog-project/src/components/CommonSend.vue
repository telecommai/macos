<!--通用卡片发送
{
  type:"CommonSend",
  name:"",
  time:"",
  msgID:"",
  image:"",
  title:"",
  content:"",
  smallIcon:"",
  systemName:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div :id="model.msgID" @click='getCommonID()' style="width: 240px;height: 110px; margin-left:16px; position:relative;  display: inline-block; cursor:pointer;">
            <div style="width: 240px;height: 70px;border-top-left-radius: 10px; border-top-right-radius: 10px; background-color: #108DE9; position: relative;">
                <div v-show='!isLoadFinished' class="temp" style="background-color: rgba(0,0,0,0); width:50px;height:50px; padding:10px; float:left;font-size:12px;color:white;text-align: center;line-height:50px;">{{$t("msg.loading")}}</div>
                <img v-show='isLoadFinished' class="notice" @load="imgLoadFinished()" :id="model.image" style="display:none; background-color: rgba(0,0,0,0); width:50px;height:50px; padding:10px; float:left" :src='model.image'/>
                <div>
                    <p style='display: block; margin:0; color: white; padding:10px; padding-bottom:5px;'>{{model.title}}</p>
                    <p style='display: block; margin:0; color: white'>{{model.content}}</p>
                </div>
            </div>
            <div style="width: 232px; padding: 4px; background-color: #0c72ba; color: white; border-bottom-left-radius: 10px; border-bottom-right-radius: 10px;word-wrap: break-word;font-size:12px;">
                <img style='width:20px; height:20px;' :src='model.smallIcon'/>
                <div style='display:inline;vertical-align: top; padding-left:5px'>{{model.systemName}}</div>
            </div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'CommonSend',
    props: ['model'],
    data: function() {
        return {
            isLoadFinished: false,
        }
    },
    methods: {
        getCommonID: function() {
            window.bridge.slotMsgID(this.model.msgID);
        },
        imgLoadFinished: function() {
            this.isLoadFinished = true;
        },
    },
}
</script>