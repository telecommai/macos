<!-- 时间线
{
  type:"TimeLine",
  strDate:"",
}
 -->
<template>
    <div style='position: relative; margin-top: 20px; margin-bottom: 20px'>
        <p class='dateTime' ref = 'refDateTime'>{{model.strDate}}</p>
        <hr />
    </div>
</template>
<script>
export default {
    name: 'TimeLine',
    props: ['model'],
}
</script>