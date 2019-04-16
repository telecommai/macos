<!--通告接收
{
  type:"NoticeRecv",
  name:"",
  time:"",
  webUrl:"",
  imageUrl:"",
  imageTitle:"",
  webTitle:"",
  msgID:"",
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <div @click="OpenLink()" style="width: 280px;height: 180px; margin-top: 5px; margin-left:16px; display: inline-block; cursor:pointer;">
            <div style="width: 280px;height: 120px;16px;position: relative;margin-left;">
                <div v-show='!isLoadFinished' class='temp' style='width:100%; height:100%; border-top-left-radius: 10px; border-top-right-radius: 10px;background-color:rgb(24,50,87); color: white;font-size:14px;text-align: center;line-height:120px;'>{{$t("msg.loading")}}</div>
                <img v-show='isLoadFinished' class="notice" @load="imgLoadFinished()" :id="model.webUrl" style="display:none; border-top-left-radius: 10px; border-top-right-radius: 10px; background-color: rgb(10,24,45);"  :src='model.imageUrl'/>
                <div style="width: 280px; height: 30px; position: absolute; bottom: 0; line-height: 30px; background-color: rgba(0,0,0, 0.5); color: white;font-size:14px;">&nbsp;{{model.imageTitle}}</div>
            </div>
            <div style="width: 270px; padding:5px; background-color: white;border-bottom-left-radius: 10px; border-bottom-right-radius: 10px; word-wrap: break-word;font-size:14px;\">{{model.webTitle}}</div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'NoticeRecv',
    props: ['model'],
    data: function() {
        return {
            isLoadFinished: false,
        }
    },
    methods: {
        OpenLink: function() {
            window.bridge.slotOpenUrl(this.model.webUrl);
        },
        imgLoadFinished: function() {
            this.isLoadFinished = true;
        },
    },
}
</script>