<template>
    <div id="app">
        <p class='title' v-if='props.strTitle != ""'>{{$t("app.messageLogPrefix")}}{{props.strTitle}}{{$t("app.messageLogPostfix")}}</p>
        <p style='height:20px;margin:0'></p>
        <template v-for="model in models">
            <component :model="model" :is="model.type" ref="refComponents"></component>
        </template>
    </div>
</template>
<script>
export default {
    name: 'app',

    data: function() {
        return {
            models: window.$models,
            props:window.$props,
        }
    },

    created: function() {
        window.$app = this;
    },
}
</script>
<style>
</style>