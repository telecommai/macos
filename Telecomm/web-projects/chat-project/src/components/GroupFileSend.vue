<!-- 群组发送文件格式
{
  type:"GroupFileSend",
  strMsgID:"",
  strBuddyHeadPath:"",
  strMsgState:"",
  strPicPath:"",
  strUlID:"",
  strFileName:"",
  strMsg:"",
  strSize:"",
  progressID:"",
  CancleID:"",
  [可选]OperateFlag:0,
  [可选]progressID_width:250,
  [可选]progressID_backgroundColor:'#D1D1D1',
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class='divMyHead'>
            <img width=30px height=30px :src ="model.strBuddyHeadPath" />
         </p>
            <div style='float:right;'>
                <ul class=''>
                    <li>
                        <img class='MessageState' style='border-radius:50%;' width=12px height=12px :src="model.strMsgState" />
                    </li>
                    <li>
                        <div class='triangle-right right' style="width:250px;height:90px">
                            <div style='width: 100%;height: 100%;background-color: white;'>
                                <div class='lb' style="height:60;">
                                    <div>
                                        <img  style='margin: 5px;' width=54x height=54px :src="model.strPicPath" />
                                    </div>
                                        <div class='namesta' style="margin:0 auto;">
                                            <ul :id="model.strUlID" style="margin:0 auto;padding-left:15px">
                                                <li style='font-size:12px;height:30px;margin-top:10px; color:black' :title="model.strFileName">{{model.strMsg}} {{model.strSize}}</li>
                                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 0'>{{$t("file.sending")}}</li>
                                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 1'></li>
                                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 2'>{{$t("file.sendSuccess")}}</li>
                                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 3'>{{$t("file.sendFailed")}}</li>
                                            </ul>
                                        </div>
                                    </div>
                                    <div style="margin-top:3px;padding-top:6px;width: 250px; height: 0px; border: solid 0px #ccc; position:relative">
                                        <div style="background-color: #D1D1D1; width: 250px; height: 3px;position:absolute;left:0px;top:0px"></div>
                                        <div :id="model.progressID" :style="{'background-color':model.progressID_backgroundColor,width: model.progressID_width+'px', height:'3px',position:'absolute',left:'0px',top:'0px'}"></div>

                                    </div>
                                    <div v-if='!isLocaleRu' class='btn' style="margin:0 auto;">
                                        <ul :id="model.CancleID" style="margin:0 auto;padding-top:15px;padding-left:35px">
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:15px" @click="CancleGroup()" v-if='model.OperateFlag == 0'>{{$t("file.cancel")}}</li>
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:15px" @click="CancleGroup()" v-if='model.OperateFlag == 1'>{{$t("file.reSend")}}</li>
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:15px" @click="CancleGroup()" v-if='model.OperateFlag == 2'></li>
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:15px" @click="CancleGroup()" v-if='model.OperateFlag == 3'></li>
                                            <li style="font-size:12px;cursor:hand;;padding-right:15px;color:#0000ff" @click="openGroupFile()">{{$t("file.open")}}</li>
                                            <li style="font-size:12px;cursor:hand;margin-right:0px;padding-right:15px;color:#0000ff" @click="openGroupDocument()">{{$t("file.openDir")}}</li>
                                        </ul>
                                    </div>
									<div v-if='isLocaleRu' class='btn' style="margin:0 auto;">
                                        <ul :id="model.CancleID" style="margin:0 auto;padding-top:15px;padding-left:5px">
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:5px" @click="CancleGroup()" v-if='model.OperateFlag == 0'>{{$t("file.cancel")}}</li>
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:5px" @click="CancleGroup()" v-if='model.OperateFlag == 1'>{{$t("file.reSend")}}</li>
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:5px" @click="CancleGroup()" v-if='model.OperateFlag == 2'></li>
                                            <li style="font-size:12px;cursor:hand;color:#0000ff;padding-right:5px" @click="CancleGroup()" v-if='model.OperateFlag == 3'></li>
                                            <li style="font-size:12px;cursor:hand;;padding-right:5px;color:#0000ff" @click="openGroupFile()">{{$t("file.open")}}</li>
                                            <li style="font-size:12px;cursor:hand;margin-right:0px;padding-right:5px;color:#0000ff" @click="openGroupDocument()">{{$t("file.openDir")}}</li>
                                        </ul>
                                    </div>
                                </div>
                            </div>
                    </li>
                </ul>
            </div>
    </div>
</template>
<script>
export default {
    name: 'GroupFileSend',
    props: {
        model: Object,
    },
    data: function() {
        return {
            isLocaleRu: window.$Vue.$i18n.locale === 'ru',
        }
    },
    created: function() {
        //组件初始化，对缺省值进行处理
        if (this.model.OperateFlag == null) {
            this.$set(this.model,'OperateFlag',0)
        }

        if (this.model.progressID_width == null) {
            this.$set(this.model,'progressID_width',250)
        }

        if (this.model.progressID_backgroundColor == null) {
            this.$set(this.model,'progressID_backgroundColor','#D1D1D1')
        }
    },
    methods: {
        CancleGroup: function() {
            if (this.model.OperateFlag == 0) {
                this.model.OperateFlag = 1;

                window.bridge.slotCancleLoadorDownLoad(this.model.strMsgID);
            } else if (this.model.OperateFlag == 1) {
                this.model.OperateFlag = 0;
                
                //删除当前组件及前面可能存在的时间线组件
                window.DeleteByMegId(this.model.strMsgID);

                window.bridge.slotSendFileByID(this.model.strMsgID);
            }
        },
        openGroupFile: function() {
            window.bridge.slotOpenGroupFile(this.model.strMsgID);
        },
        openGroupDocument: function() {
            if (this.model.strMsgID != null) {
                window.bridge.slotOpenDocument(this.model.strMsgID);
            }
        },
    },
}
</script>