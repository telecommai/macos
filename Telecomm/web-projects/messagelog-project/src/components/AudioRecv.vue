<!--音频接收
{
  type:"AudioRecv",
  name:"",
  time:"",
  msgID:"",
  duration:"",
  strAudio:"",
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <div :id="model.msgID" class='triangle-left left' style='cursor: pointer;' @click='playAudio()'>
            <img v-show='false' src='qrc:/html/image/Resources/html/image/voice.gif'/>
            <img v-if='isPlaying' style='margin-top:2px' src='qrc:/html/image/Resources/html/image/voice.gif' width='20px' />
            <img v-if='!isPlaying' style='margin-top:2px' src='qrc:/html/image/Resources/html/image/voice.png' width='20px' />
          &emsp;{{model.duration}}″
            <audio :src='"file:///"+model.strAudio' ref='refAudio' @ended='onAudioEnded()'></audio>
        </div>
    </div>
</template>
<script>
export default {
    name: 'AudioRecv',
    props: ['model'],
    data: function() {
        return {
            isPlaying: false,
        }
    },
    methods: {
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