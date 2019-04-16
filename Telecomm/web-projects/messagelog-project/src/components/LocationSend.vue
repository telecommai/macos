<!--地理位置发送
{
  type:"LocationSend",
  name:"",
  time:"",
  msgID:"",
  url:"",
  imageTitle:"",
  webTitle:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div :id='model.msgID' @click="OpenLocation()" style="width: 260px;height: 200px; margin-top: 5px;margin-left:16px; margin-left:16px; position:relative; cursor:pointer;">
            <div style="width: 260px;height: 140px;position: relative;">
                <div v-show='!isLoadFinished' class='temp' style='width:100%; height:100%; border-top-left-radius: 10px; border-top-right-radius: 10px;background-color:rgb(24,50,87); color: white;font-size:14px;text-align: center;line-height:120px;'>{{$t("msg.loading")}}</div>
                <img v-show='isLoadFinished' class="location" @load="imgLoadFinished()" style="display:none; border-top-left-radius: 10px; border-top-right-radius: 10px; background-color: rgb(10,24,45);"  :src='model.url'/>
                <div style="width: 260px; height: 30px; position: absolute; bottom: 0; line-height: 30px; background-color: white; color: black;font-size:14px;">&nbsp;{{model.imageTitle}}</div>
            </div>
            <div style="width: 250px; padding:5px; background-color: white; color: grey; border-bottom-left-radius: 10px; border-bottom-right-radius: 10px; word-wrap: break-word;font-size:14px;"> {{model.webTitle}} </div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'LocationSend',
    props: ['model'],
    data: function() {
        return {
            isLoadFinished: false,
        }
    },
    methods: {
        OpenLocation: function() {
            window.bridge.slotLocation(this.model.msgID)
        },
        imgLoadFinished: function() {
            this.isLoadFinished = true;
        },
    },
}
</script>