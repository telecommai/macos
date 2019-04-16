<!-- 一对一聊天发送密件格式
{
  type:"PerSecretFileSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden; display:block;'>
        <p class='divMyHead'>
            <img width=30px height=30px :src ="model.strBuddyHeadPath" />
        </p>
            <div style='float:right;'>
                <ul class=''>
                    <li>
                        <img class='MessageState' style='border-radius:50%;' width=12px height=12px :src="model.strMsgState" />
                            </li>
                    <li>
                        <div style="position: relative;">
                        <img @click='openSendSecret()' src='qrc:/html/secret/Resources/html/secret/secretFile.png' style='max-width:200px;max-height:200px;width:200px; height:131px; margin-bottom:10px;cursor:pointer;'></img>
                        <div style="position: absolute;left: 30px;color: white;font-size:14px;bottom: 9px;line-height: 30px;">{{$t("secret.file")}}
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
    name: 'PerSecretFileSend',
    props: ['model'],
    methods: {
        openSendSecret: function() {
            window.bridge.slotOpenUrl(this.model.strMsgID);
        },
    },
}
</script>