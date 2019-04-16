<!-- 提示消息
{
  type:"TipMsg",
  message:"",
}
 -->
<template>
    <div style='display:block; text-align:center; color:#4A708B; font-size:13px;'>{{ model.message }} </div>
</template>
<script>
export default {
    name: 'TipMsg',
    props: ['model'],
}
</script>