<!--文本发送
{
  type:"TextSend",
  name:"",
  time:"",
  strText:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <pre class='text' v-html='model.strText'></pre>
    </div>
</template>
<script>
export default {
    name: 'TextSend',
    props: ['model'],
}
</script>