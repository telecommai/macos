<!-- 群组聊天发送语音格式
{
  type:"GroupAudioSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  strMsg:"",
  nDuration:0
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
                        <div class='triangle-right right' style='cursor: pointer;' @click='playAudio()'>
                            <!-- 隐藏显示gif，不然的话快速切换显示gif时gif停在第一帧，原因不明 -->
                            <img v-show='false' src='qrc:/html/image/Resources/html/image/voice.gif'/>
                            <img v-if='isPlaying' style='margin-top:2px' src='qrc:/html/image/Resources/html/image/voice.gif' width='20px' />
                            <img v-if='!isPlaying' style='margin-top:2px' src='qrc:/html/image/Resources/html/image/voice.png' width='20px' />
                            &emsp;{{model.nDuration}}″
                            <audio :src='"file:///"+model.strMsg' ref='refAudio' @ended='onAudioEnded()'></audio>
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
    name: 'GroupAudioSend',
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