<!--文件发送
{
  type:"FileSend",
  name:"",
  time:"",
  strImg:"",
  strName:"",
  strShortName:"",
  strSize:"",
  strPath:"",
  strDir:"",
}
 -->
<template>
    <div>
        <p class='me'>{{model.name}}&nbsp;{{model.time}}</p>
        <div style='margin-left: 16px; border: 1px solid #cfdbe2; border-radius: 5px; width: 300px;height: 100px;background-color:white'>
            <img :src='model.strImg' style='width: 48px;height: 48px; margin-top: 8px;margin-left: 8px; border-radius: 3px; float: left;' />
            <div style='margin-top: 10px; margin-left: 60px; font-size: 12px;'>
                <div style='display: inline; font-size: 14px;' :title="model.strName">{{model.strShortName}}&nbsp;&nbsp;</div>
                <div style='display: inline; color: #767676;'>({{model.strSize}})</div>
                <p :title='model.strPath' style='margin: 0; margin-top: 6px; width: 220px; white-space: nowrap; text-overflow: ellipsis; overflow: hidden; color: #767676;'>{{$t("file.sendSuccess")}}</p>
                <div style='position:absolute; margin-top: 13px; left: 17px; border-top: 1px solid #cfdbe2; width: 300px; color: #009ada;'>
                    <a style='float: right; margin-top: 8px; margin-right: 8px; cursor: pointer;' @click='openDir()' :id='model.strDir'>{{$t("file.openDir")}}</a>
                    <a style='float: right; margin-top: 8px; margin-right: 10px; cursor: pointer;' @click='openFile()' :id='model.strPath'>{{$t("file.open")}}</a>
                </div>
            </div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'FileSend',
    props: ['model'],
    methods: {
        openDir: function() {
            window.bridge.slotOpenDir(this.model.strMsgID);
        },
        openFile: function() {
            window.bridge.slotOpenFile(this.model.strMsgID);
        },

    },
}
</script>