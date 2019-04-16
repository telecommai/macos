<!-- 一对一聊天接收密信格式
{
  type:"PerSecretTextRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width=30px height=30px :src = "model.strBuddyHeadPath" />
        </p>
            <div style="position: relative;">
                <img @click="openRecvSecret()"
    src='qrc:/html/secret/Resources/html/secret/secretLetter.png'
    style='max-width:200px;width:200px; height:79px; margin-bottom:10px; float:left;cursor:pointer' />
    <div style="position: absolute;left: 70px;color: white;font-size:14px;top: 50px;line-height: 30px;">{{$t("secret.letter")}}
                            </div>
            </div>
                <div style='font-size:13px;color:#e4ba7b;'>
                    <img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-left: 10px;margin-bottom: -4px'>
                +{{model.nScore}}
            </div>
                </div>
</template>
<script>
export default {
    name: 'PerSecretTextRecv',
    props: ['model'],
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        openRecvSecret: function() {
            window.bridge.slotOpenUrl(this.model.strMsgID);
        },
    },
}
</script>