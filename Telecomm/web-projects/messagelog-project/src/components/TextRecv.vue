<!--文本接收
{
  type:"TextRecv",
  name:"",
  time:"",
  strText:"",
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <pre class='text' v-html='model.strText'></pre>
    </div>
</template>
<script>
export default {
    name: 'TextRecv',
    props: ['model'],
}
</script>