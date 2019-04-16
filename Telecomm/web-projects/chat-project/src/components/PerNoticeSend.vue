<!-- 一对一聊天发送通告格式
{
  type:"PerNoticeSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  webUrl:"",
  imageUrl:"",
  imageTitle:"",
  webTitle:"",
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
                        <div @click="OpenLink()" style="width: 280px;height: 180px; margin-top: 5px; position:relative; float:left; display: inline-block; cursor:pointer;">
                            <div style="width: 280px;height: 120px;position: relative;">
                                <div v-show='!isLoadFinished' class='temp' style='width:100%; height:100%; border-top-left-radius: 10px; border-top-right-radius: 10px;background-color:rgb(24,50,87); color: white;font-size:14px;text-align: center;line-height:120px;'>{{$t("msg.loading")}}</div>
                                <img v-show='isLoadFinished' class="notice" @load="imgLoadFinished()" :id="model.webUrl" style="display:none; border-top-left-radius: 10px; border-top-right-radius: 10px; background-color: rgb(10,24,45);"  :src='model.imageUrl' />
                                <div style="width: 280px; height: 30px; position: absolute; bottom: 0; line-height: 30px; background-color: rgba(0,0,0, 0.5); color: white;font-size:14px;">&nbsp;{{model.imageTitle}}</div>
                            </div>
                            <div style="width: 270px; padding:5px; background-color: white;border-bottom-left-radius: 10px; border-bottom-right-radius: 10px; word-wrap: break-word;font-size:14px;">{{model.webTitle}}</div>
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
    name: 'PerNoticeSend',
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
