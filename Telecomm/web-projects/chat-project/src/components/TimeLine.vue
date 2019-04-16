<!-- 时间线
{
  type:"TimeLine",
  timeStamp:"",
  time:"",
}
 -->
<template>
    <div class='time' :id='model.timeStamp'>{{ model.time }}</div>
</template>
<script>
export default {
    name: 'TimeLine',
    props: ['model'],
}
</script>
