<!-- 一对一聊天发送位置格式
{
  type:"PerLocationSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  data:"",
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
                        <div @click="OpenLocation()" style="width: 260px;height: 200px; margin-top: 5px; position:relative; float:left; display: inline-block; cursor:pointer;">
                            <div style="width: 260px;height: 140px;position: relative;">
                                <div v-show='!isLoadFinished' class='temp' style='width:100%; height:100%; border-top-left-radius: 10px; border-top-right-radius: 10px;background-color:rgb(24,50,87); color: white;font-size:14px;text-align: center;line-height:120px;'>{{$t("msg.loading")}}</div>
                                <img v-show='isLoadFinished' class="location" @load="imgLoadFinished()" :id="model.data" style="display:none; border-top-left-radius: 10px; border-top-right-radius: 10px; background-color: rgb(10,24,45);"  :src='model.imageUrl'/>
                                <div style="width: 260px; height: 30px; position: absolute; bottom: 0; line-height: 30px; background-color: white; color: black;font-size:14px;">&nbsp;{{model.imageTitle}}</div>
                            </div>
                            <div style="width: 250px; padding:5px; background-color: white; color: grey; border-bottom-left-radius: 10px; border-bottom-right-radius: 10px; word-wrap: break-word;font-size:14px;">{{model.webTitle}}</div>
                        </div>
                    </li>
                </ul>
            </div>
            <div class='score' v-if="model.nScore > 0">
                <div style='text-align:right;font-size:13px;color:#e4ba7b;'>
                    <img width='20px' height='20px' src='qrc://:/html/Resources/html/diamond1.png' style='margin-bottom: -4px' />
                    +{{model.nScore}}
                </div>
                </div>
            </div>
</template>
<script>
export default {
    name: 'PerLocationSend',
    props: ['model'],
    data: function() {
        return {
            isLoadFinished: false,
        }
    },
    methods: {
        imgLoadFinished: function() {
            this.isLoadFinished = true;
        },
        OpenLocation: function() {
            var data = JSON.parse(this.model.data);
            var url = "http://api.map.baidu.com/marker?";
            url += "location=" + data.latitude + "," + data.longitude;
            url += "&title=" + data.name + "&content=" + data.specific;
            url += "&coord_type=gcj02&output=html";
            window.bridge.slotOpenUrl(url);
        },
    },
}
</script>