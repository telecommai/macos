<!-- 一对一聊天接收视频格式
{
  type:"PerVideoRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  isLoading:true,
  strVideoPicPath:"",
  strVideoPath:"",
  nScore:0,
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divotherhead' @click='openProfile()'>
            <img width=30px height=30px :src = "model.strBuddyHeadPath" />
        </p>
            <p class='triangle-left left' @click="videoPlay()">
                <img ref='refPlay' src='qrc:/html/Resources/html/readyPlay.png' style='position:absolute;' />
                <img v-if='model.isLoading' width=30px height=30px src='qrc:/html/Resources/html/load.gif' />
                <img ref='refVdo' v-if='!model.isLoading' height:auto width:auto :src='model.strVideoPicPath' :name = 'model.strVideoPath' @load='movePlayIcon()'/>
        </p>
                <div style='font-size:13px;color:#e4ba7b;'>
                    <img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-left: 10px;margin-bottom: -4px' />
                +{{model.nScore}}
        </div>
                </div>
</template>
<script>
export default {
    name: 'PerVideoRecv',
    props: ['model'],
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
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