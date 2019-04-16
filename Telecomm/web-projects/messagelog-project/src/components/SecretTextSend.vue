<!--密信发送
{
  type:"SecretTextSend",
  name:"",
  time:"",
  msgID:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div :id="model.msgID" style='margin-left:16px;'>
            <div style="position: relative;">
                <img @click="openRecvSecret()" src='qrc:/html/secret/Resources/html/secret/secretLetter.png' style='max-width:200px;width:200px; height:auto; margin-bottom:10px;cursor:pointer' />
                <div style="position: absolute;left: 30px;color: white;font-size:14px;top: 50px;line-height: 30px;">{{$t("secret.letter")}}
                </div>
            </div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'SecretTextSend',
    props: ['model'],
    methods: {
        openRecvSecret: function() {
            window.bridge.slotOpenUrl(this.model.msgID);
        },
    },
}
</script>