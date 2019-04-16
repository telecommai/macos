<!--密件发送
{
  type:"SecretFileSend",
  name:"",
  time:"",
  msgID:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div :id="model.strMsgID" style='overflow:hidden;margin-left:16px;'>
            <div style="position: relative;">
                <img @click="openRecvSecret()" src='qrc:/html/secret/Resources/html/secret/secretFile.png'
        style='max-width:200px;max-height:200px;width:200px; height:auto; margin-bottom:10px; float:left;cursor:pointer' />
                <div style="position: absolute;left: 30px;color: white;font-size:14px;top: 103px;line-height: 30px;">{{$t("secret.file")}}
                </div>
            </div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'SecretFileSend',
    props: ['model'],
    methods: {
        openRecvSecret: function() {
            window.bridge.slotOpenUrl(this.model.msgID);
        },
    },
}
</script>