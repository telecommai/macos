<!--图片接收
{
  type:"ImgRecv",
  name:"",
  time:"",
  strImg:"",
  strSmallImg:"",
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <div @dblclick='ChangeSize()'>
            <img :src="model.strSmallImg" class='image' />
        </div>
    </div>
</template>
<script>
export default {
    name: 'ImgRecv',
    props: ['model'],
     methods: {
        ChangeSize: function() {
          window.bridge.slotLogImg(this.model.strImg); 
        },
        
    },
}
</script>