<template>
    <div id="app">
        <template v-for="model in models">
            <component :model="model" :is="model.type" ref="refComponents"></component>
        </template>
    </div>
</template>
<script>

export default {
    name: 'app',

    data: function() {
        return{
            models:window.$models
        }
    },
    
    created:function()
    {
        window.$app = this;
    },
}
</script>
<style>
</style>