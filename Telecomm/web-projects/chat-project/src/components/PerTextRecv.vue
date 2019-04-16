<!-- 一对一聊天接收文本格式
{
  type:"PerTextRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgHtml:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width=30px height=30px :src = "model.strBuddyHeadPath" />
        </p>
            <pre class='triangle-left left' @dblclick="ChangeSize()" v-html='model.strMsgHtml'></pre>
            <div style='font-size:13px;color:#e4ba7b;'>
                <img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-left: 10px;margin-bottom: -4px' />
                +{{model.nScore}}
            </div>
            </div>
</template>
<script>
export default {
    name: 'PerTextRecv',
    props: ['model'],
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        ChangeSize: function() {
            if (this.model.strMsgID != "") {
                window.bridge.slotZoomImg(this.model.strMsgID);
            }
        },
    },
}
</script>