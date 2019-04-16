<!-- 群组聊天发送视频格式
{
  type:"GroupVideoSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  isLoading:true,
  strVideoPicPath:"",
  strVideoPath:"",
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
                        <p class='triangle-right right' @click="videoPlay()">
                            <img ref='refPlay' src='qrc:/html/Resources/html/readyPlay.png' style='position:absolute;' />
                            <img v-if='model.isLoading' width=30px height=30px src='qrc:/html/Resources/html/load.gif' />
                            <img ref='refVdo' v-if='!model.isLoading' height:auto width:auto :src='model.strVideoPicPath' :name = 'model.strVideoPath' @load='movePlayIcon()'/>
                        </p>
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
    name: 'GroupVideoSend',
    props: ['model'],
    methods: {
        videoPlay: function() {
            window.bridge.slotVideoPlay(this.model.strVideoPath);
        },
        movePlayIcon: function() {
            var x = (parseInt(this.$refs.refVdo.offsetWidth) - 64 + 10) / 2;
            var y = (parseInt(this.$refs.refVdo.offsetHeight) - 64 + 10) / 2;
            this.$refs.refPlay.style.top = y.toString();
            this.$refs.refPlay.style.left = x.toString();

            if (!this.model._isShowingMore) {
                window.loadpic();
            }
        },
    },
}
</script>