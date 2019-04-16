<!-- 群组聊天接收分享链接格式
{
  type:"GroupShareUrlRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  strBuddyNickName:"",
  url:"",
  imageUrl:"",
  subject:"",
  text:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width='30px' height='30px' :src = "model.strBuddyHeadPath" />
            <div style='text-align:left;color:#B2B2B2;font-size:12px;margin-left:10px'>{{model.strBuddyNickName}}</div>
        </p>
        <div @click='OpenLink()' style="width: 240px;height: 90px; margin-top: 5px; position:relative; float:left; display: inline-block; cursor:pointer;">
            <div style="width: 240px;height: 80px;border-radius: 10px; background-color: white; position: relative;">
                <div v-show='!isLoadFinished' class="temp" style="background-color: rgba(0,0,0,0); width:50px;height:50px; margin-top:10px; padding:10px; float:right;font-size:12px;text-align: center;line-height:50px;">{{$t("msg.loading")}}</div>
                <img v-show='isLoadFinished' class="notice" @load="imgLoadFinished()" :id="model.url" style="display:none; background-color: rgba(0,0,0,0); width:50px;height:50px; margin-top:10px; padding:10px; float:right"  :src='model.imageUrl'/>
                <div>
                    <p style='display: block; margin:0; padding:10px; padding-bottom:5px;text-overflow: ellipsis;white-space: nowrap;overflow: hidden;'>{{model.subject}}</p>
                    <p style='display: block; margin:0; color: grey;word-break: break-all; font-size:12px; padding:10px; padding-top:0; line-height:18px; overflow: hidden;height:30px;'>{{model.text}}</p>
                </div>
            </div>
        </div>
        <div style='margin-left:40px; font-size:13px;color:#e4ba7b;'>
            <img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-bottom: -4px' />
            +{{model.nScore}}
        </div>
        </div>
</template>
<script>
export default {
    name: 'GroupShareUrlRecv',
    props: ['model'],
    data: function() {
        return {
            isLoadFinished: false,
        }
    },
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        OpenLink: function() {
            window.bridge.slotOpenUrl(this.model.url);
        },
        imgLoadFinished: function() {
            this.isLoadFinished = true;
        },
    },
}
</script>