<!-- 群组聊天发送通用卡片格式
{
  type:"GroupCardSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  image:"",
  title:"",
  content:"",
  smallIcon:"",
  systemName:"",
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
                        <div @click='getCommonID()' style="width: 240px;height: 110px; margin-top: 5px; position:relative; float:left; display: inline-block; cursor:pointer;">
                            <div style="width: 240px;height: 70px;border-top-left-radius: 10px; border-top-right-radius: 10px; background-color: #108DE9; position: relative;">
                                <div v-show='!isLoadFinished' class="temp" style="background-color: rgba(0,0,0,0); width:50px;height:50px; padding:10px; float:left;font-size:12px;color:white;text-align: center;line-height:50px;">{{$t("msg.loading")}}</div>
                                <img v-show='isLoadFinished' class="notice" @load="imgLoadFinished()" :id="model.image" style="display:block; background-color: rgba(0,0,0,0); width:50px;height:50px; padding:10px; float:left"  :src='model.image' />
                                <div>
                                    <p style='display: block;margin:0;color: white;padding: 10 10 5 0;text-overflow: ellipsis;white-space: nowrap;overflow: hidden;'>{{model.title}}</p>
                                    <p style='display: block;margin:0;color: white;padding-right: 10;text-overflow: ellipsis;white-space: nowrap;overflow: hidden;'>{{model.content}}</p>
                                </div>
                            </div>
                            <div style="width: 232px; padding: 4px; background-color: #0c72ba; color: white; border-bottom-left-radius: 10px; border-bottom-right-radius: 10px; word-wrap: break-word;font-size:12px;">
                                <img style='width:20px; height:20px;' :src='model.smallIcon' />
                                <div style='display:inline;vertical-align: top; padding-left:5px'>{{model.systemName}}</div>
                            </div>
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
    name: 'GroupCardSend',
    props: ['model'],
    data: function() {
        return {
            isLoadFinished: false,
        }
    },
    methods: {
        getCommonID: function() {
            if (this.model.strMsgID != "") {
                window.bridge.slotMsgID(this.model.strMsgID);
            }
        },
        imgLoadFinished: function() {
            this.isLoadFinished = true;
        },
    },
}
</script>