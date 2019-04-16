<!-- 群组聊天发送文本格式
{
  type:"GroupTextSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  strMsgHtml:"",
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
                        <pre class='triangle-right right' @dblclick="ChangeGroupSize()" v-html='model.strMsgHtml'></pre>
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
    name: 'GroupTextSend',
    props: ['model'],
    methods: {
        ChangeGroupSize: function() {
            if (this.model.strMsgID != "") {
                window.bridge.slotZoomImg(this.model.strMsgID);
            }
        },
    },
}
</script>
<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
</style>