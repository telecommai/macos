<!-- 查看更多消息
{
  type:"FetchMore",
}
 -->
<template>
    <div style=" margin:10 auto; text-align:center;">
        <div style="display:inline-block;">
            <img style="width:15px; height:15px; position:relative; top:2px;" src='qrc:/html/Resources/html/clock.png' />
         </div>
        <div style=" margin-left:5px" @click="checkMore()" class='showMoreStyle'>
            {{$t("msg.seeMore")}}
        </div>
        </div>
</template>
<script>
export default {
    name: 'FetchMore',
    props: ['model'],
    methods: {
        checkMore: function() {
            window.bridge.slotShowMore();
        },
    },
}
</script>