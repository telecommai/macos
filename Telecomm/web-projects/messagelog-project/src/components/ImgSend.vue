<!--图片发送
{
  type:"ImgSend",
  name:"",
  time:"",
  strImg:"",
  strSmallImg:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div @dblclick='ChangeSize()'>
            <img :src="model.strSmallImg" class='image' />
        </div>
        </div>
</template>
<script>
export default {
    name: 'ImgSend',
    props: ['model'],
    methods: {
        ChangeSize: function() {
            window.bridge.slotLogImg(this.model.strImg);
        },

    },
}
</script>