<!-- 群组聊天发送图片格式
{
  type:"GroupPictureSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  isUserDefine:false,
  strUserDefinePicPath: "",
  strPicPath: "",
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
                        <p class='triangle-right right' @dblclick="ChangeGroupSize()">
                            <img v-if='model.isUserDefine' @load='onPicLoad()' width=30px height=30px :src='model.strUserDefinePicPath' />
                            <img v-if='!model.isUserDefine' @load='onPicLoad()' :src='model.strPicPath' />
                        </p>
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
    name: 'GroupPictureSend',
    props: ['model'],
    methods: {
        ChangeGroupSize: function() {
            if (this.model.strMsgID != "") {
                window.bridge.slotZoomImg(this.model.strMsgID);
            }
        },
        onPicLoad: function() {
            if(!this.model._isShowingMore)
            {
                window.loadpic();
            }
        },
    },
}
</script>