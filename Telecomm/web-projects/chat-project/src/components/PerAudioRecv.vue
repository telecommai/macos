<!-- 一对一聊天接收语音格式
{
  type:"PerAudioRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsg:"",
  nDuration:0
  nScore:0,
}
 -->
<template>
    <div :id='model.strMsgID' style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width=30px height=30px :src = 'model.strBuddyHeadPath' /></p>
            <div class='triangle-left left' style='cursor: pointer;' @click='playAudio()'>
                <!-- 隐藏显示gif，不然的话快速切换显示gif时gif停在第一帧，原因不明 -->
                <img v-show='false' src='qrc:/html/image/Resources/html/image/voice.gif'/>
                <img v-if='isPlaying' style='margin-top:2px' src='qrc:/html/image/Resources/html/image/voice.gif' width='20px' />
                <img v-if='!isPlaying' style='margin-top:2px' src='qrc:/html/image/Resources/html/image/voice.png' width='20px' />
                &emsp;{{model.nDuration}}″
                <audio :src='"file:///"+model.strMsg' ref='refAudio' @ended='onAudioEnded()'></audio>
            </div>
            <div style='font-size:13px;color:#e4ba7b;'>
                <img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-left: 10px;margin-bottom: -4px'>
            +{{model.nScore}}
        </div>
            </div>
</template>
<script>
export default {
    name: 'PerAudioRecv',
    props: ['model'],
    data: function() {
        return {
            isPlaying: false,
        }
    },
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        stopAudio: function() {
            this.$refs.refAudio.pause();
            this.$refs.refAudio.currentTime = 0;
            this.isPlaying = false;
        },
        playAudio: function() {
            //暂停其它所有组件的播放，然后播放自己
            window.$app.$refs.refComponents.forEach((comp) => {
                if (comp.stopAudio != null) {
                    comp.stopAudio();
                }
            })

            this.isPlaying = true;
            this.$refs.refAudio.play();
        },
        onAudioEnded: function() {
            this.isPlaying = false;
        },
    },
}
</script>