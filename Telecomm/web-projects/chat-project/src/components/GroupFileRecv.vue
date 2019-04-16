<!-- 群组接收文件格式
{
  type:"GroupFileRecv",
  strMsgID:"",
  strBuddyHeadPath:"",
  strBuddyNickName:"",
  strPicPath:"",
  strUlID2:"",
  strFileName:"",
  FileName:"",
  strSize:"",
  progressID:"",
  strUlID:"",
  nScore:0,
  [可选]OperateFlag:0,
  [可选]progressID_width:250,
  [可选]progressID_backgroundColor:'#D1D1D1',
}
 -->
<template>
    <div :id="model.strMsgID" style='overflow:hidden;'>
        <p class="divotherhead" @click='openProfile()'>
            <img width=30px height=30px :src="model.strBuddyHeadPath" />
            <div style='text-align:left;color:#B2B2B2;font-size:12px;margin-left:10px'>{{model.strBuddyNickName}}</div>
        </p>
        <div class="triangle-left left" style="width:250px;height:90px;margin-right:10px">
            <div style='width: 100%;height: 100%;background-color: white;'>
                <div class='lb' style="height:60px;">
                    <div>
                        <img style='margin: 5px;' width=54x height=54px :src="model.strPicPath" />
                                      </div>
                        <div class='namesta' style="height:64px;margin:0 auto;">
                            <ul :id="model.strUlID2" style="margin:0px auto;padding-left:15px;">
                                <li style='font-size:12px;height:30px;margin-top:10px;color:black' :title="model.strFileName">{{model.FileName}} {{model.strSize}}</li>
                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 0'>{{$t("file.recvTip")}}</li>
                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 1'>{{$t("file.recving")}}</li>
                                <li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 2'>{{$t("file.recvSuccess")}}</li>
								<li style='font-size:12px;margin-top:5px;' v-if='model.OperateFlag == 3'>{{$t("file.recvFailed")}}</li>
                            </ul>
                        </div>
                    </div>
                    <div style="margin-top:3px;padding-top:6px;width: 250px; height: 0px; border: solid 0px #ccc; position:relative">
                        <div style="background-color: #D1D1D1; width: 250px; height: 3px;position:absolute;left:0px;top:0px"></div>
                        <div :id="model.progressID" :style="{'background-color':model.progressID_backgroundColor,width: model.progressID_width+'px', height:'3px',position:'absolute',left:'0px',top:'0px'}"></div>
                    </div>
                    <div v-if='!isLocaleRu' class='btn'>
                        <ul :id="model.strUlID" style="margin:0 auto">
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="getGroupFile()" v-if='model.OperateFlag == 0'>{{$t("file.save")}}</li>
							<li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="getGroupFile()" v-if='model.OperateFlag == 3'>{{$t("file.reSave")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="getGroupFile()" v-if='model.OperateFlag == 2'>{{$t("file.open")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="saveGroupFile()" v-if='model.OperateFlag == 0'>{{$t("file.saveAs")}}</li>
							<li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="saveGroupFile()" v-if='model.OperateFlag == 3'>{{$t("file.saveAs")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="saveGroupFile()" v-if='model.OperateFlag == 1'>{{$t("file.cancel")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:30px" @click="saveGroupFile()" v-if='model.OperateFlag == 2'>{{$t("file.openDir")}}</li>
                        </ul>
                    </div>
                    <div v-if='isLocaleRu' class='btn'>
                        <ul :id="model.strUlID" style="margin:0 auto">
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="getGroupFile()" v-if='model.OperateFlag == 0'>{{$t("file.save")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="getGroupFile()" v-if='model.OperateFlag == 3'>{{$t("file.reSave")}}</li>
							<li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="getGroupFile()" v-if='model.OperateFlag == 2'>{{$t("file.open")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="saveGroupFile()" v-if='model.OperateFlag == 0'>{{$t("file.saveAs")}}</li>
							<li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="saveGroupFile()" v-if='model.OperateFlag == 3'>{{$t("file.saveAs")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="saveGroupFile()" v-if='model.OperateFlag == 1'>{{$t("file.cancel")}}</li>
                            <li style="font-size:12px;cursor:hand;padding-top:15px;color:#0000ff;padding-right:5px" @click="saveGroupFile()" v-if='model.OperateFlag == 2'>{{$t("file.openDir")}}</li>
                        </ul>
                    </div>
                </div>
            </div>
            <div style='margin-left:40px; font-size:13px;color:#e4ba7b;'><img width='20px' height='20px' src='qrc:/html/Resources/html/diamond1.png' style='margin-bottom: -4px' />+{{model.nScore}}</div>
            </div>
</template>
<script>
export default {
    name: 'GroupFileRecv',
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
            this.$set(this.model, 'OperateFlag', 0)
        }

        if (this.model.progressID_width == null) {
            this.$set(this.model, 'progressID_width', 250)
        }

        if (this.model.progressID_backgroundColor == null) {
            this.$set(this.model, 'progressID_backgroundColor', '#D1D1D1')
        }
    },
    methods: {
        openProfile: function() {
            window.bridge.slotClickUserHeader(this.model.strMsgID);
        },
        getGroupFile: function() {
            if (this.model.OperateFlag == 0 || this.model.OperateFlag == 3) {
                window.bridge.slotGetFile(this.model.strMsgID);
            } else if (this.model.OperateFlag == 2) {
                if (this.model.strMsgID != null) {
                    window.bridge.slotOpenGroupFile(this.model.strMsgID);
                }
            }
        },
        saveGroupFile: function() {
            if (this.model.OperateFlag == 0 || this.model.OperateFlag == 3) {
                if (this.model.strMsgID != null) {
                    window.bridge.slotSaveFile(this.model.strMsgID);
                }
            } else if (this.model.OperateFlag == 2) {
                if (this.model.strMsgID != null) {
                    window.bridge.slotOpenDocument(this.model.strMsgID);
                }
            } else if (this.model.OperateFlag == 1) {
                this.model.OperateFlag = 0;
                window.bridge.slotCancleLoadorDownLoad(this.model.strMsgID);
            }

        },
    },

}
</script>