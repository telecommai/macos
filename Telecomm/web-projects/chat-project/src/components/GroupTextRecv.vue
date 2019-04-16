<!-- 群组聊天接收文本格式
{
  type:"GroupTextRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  strBuddyNickName:"",
  strMsgHtml:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width='30px' height='30px' :src = "model.strBuddyHeadPath" />
            <div style='text-align:left;color:#B2B2B2;font-size:12px;margin-left:10px'>{{model.strBuddyNickName}}</div>
        </p>
        <pre class='triangle-left left' @dblclick="ChangeGroupSize()" v-html='model.strMsgHtml'></pre>
        <div style='margin-left:40px; font-size:13px;color:#e4ba7b;'>
            <img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-bottom: -4px'>
            +{{model.nScore}}
        </div>
        </div>
</template>
<script>
export default {
    name: 'GroupTextRecv',
    props: ['model'],
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        ChangeGroupSize: function() {
            if (this.model.strMsgID != "") {
                window.bridge.slotZoomImg(this.model.strMsgID);
            }
        },
    },
}
</script>