<!--视频发送
{
  type:"VideoSend",
  name:"",
  time:"",
  strVideoPicPath:"",
  strVideoPath:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div style='position:relative;margin-left:16px' @click="videoPlay()">{{model.strPath}}
            <img ref='refPlay' style='position:absolute;z-index:2;' src='qrc:/html/Resources/html/readyPlay.png' />
            <img ref='refVdo' height:auto width:auto :src='model.strVideoPicPath' :name = 'model.strVideoPath' @load='movePlayIcon()'/>
        </div>
        </div>
</template>
<script>
export default {
    name: 'VideoSend',
    props: ['model'],
    methods: {
        videoPlay: function() {
            window.bridge.slotVideoPlay(this.model.strVideoPath);
        },
        movePlayIcon: function() {
            var x = (parseInt(this.$refs.refVdo.offsetWidth) - 64) / 2;
            var y = (parseInt(this.$refs.refVdo.offsetHeight) - 64) / 2;
            this.$refs.refPlay.style.top = y.toString();
            this.$refs.refPlay.style.left = x.toString();
        },
    },
}
</script>