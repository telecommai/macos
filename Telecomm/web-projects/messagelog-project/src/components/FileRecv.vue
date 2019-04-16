<!--文件接收
{
  type:"FileRecv",
  name:"",
  time:"",
  strImg:"",
  strName:"",
  strShortName:"",
  strSize:"",
  strPath:"",
  strDir:"",
  OperateFlag:"",
  strMsgID:"";
  [可选]OperateFlag:0,
  [可选]progressID_width:300,
  [可选]progressID_backgroundColor:'#D1D1D1',
}
 -->
<template>
    <div>
        <p class='buddy'>{{model.name}}&nbsp;{{model.time}}</p>
        <div style='margin-left: 16px; border: 1px solid #cfdbe2; border-radius: 5px; width: 300px;height: 100px;background-color:white'>
            <img :src='model.strImg' style='width: 48px;height: 48px; margin-top: 8px;margin-left: 8px; border-radius: 3px; float: left;' />
            <div style='margin-top: 10px; margin-left: 60px; font-size: 12px;'>
                <div style='display: inline; font-size: 14px;' :title="model.strName">{{model.strShortName}}&nbsp;&nbsp;</div>
                <div style='display: inline; color: #767676;'>({{model.strSize}})</div>
                <p :title='model.strPath' style='margin: 0; margin-top: 6px; width: 220px; white-space: nowrap; text-overflow: ellipsis; overflow: hidden; color: #767676;' v-if='model.OperateFlag == 2'>{{$t("file.recvSuccess")}}{{model.strPath}}</p>
                <p :title='model.strPath' style='margin: 0; margin-top: 6px; width: 220px; white-space: nowrap; text-overflow: ellipsis; overflow: hidden; color: #767676;' v-if='model.OperateFlag == 0'>{{$t("file.recvTip")}}</p>
				<p :title='model.strPath' style='margin: 0; margin-top: 6px; width: 220px; white-space: nowrap; text-overflow: ellipsis; overflow: hidden; color: #767676;' v-if='model.OperateFlag == 1'>{{$t("file.recving")}}</p>
				<p :title='model.strPath' style='margin: 0; margin-top: 6px; width: 220px; white-space: nowrap; text-overflow: ellipsis; overflow: hidden; color: #767676;' v-if='model.OperateFlag == 3'>{{$t("file.recvFailed")}}</p>
			</div>
			<div style="margin-top:10px;padding-top:6px;width: 300; height: 0px; border: solid 0px #ccc; position:relative">
                <div style="background-color: #D1D1D1; width: 300; height: 3px;position:absolute;left:0px;top:0px"></div>
                <div :id="model.progressID" :style="{'background-color':model.progressID_backgroundColor,width: model.progressID_width+'px', height:'3px',position:'absolute',left:'0px',top:'0px'}"></div>
            </div>
			<div style='margin-left: 60px; font-size: 12px;'>
				<div style='position:absolute; left: 17px; width: 300px; color: #009ada;'>
                    <a style='float: right; margin-top: 8px; margin-right: 8px; cursor: pointer;' @click='openDir()' :id='model.strDir' 	v-if='model.OperateFlag == 0'>{{$t("file.save")}}</a>
                    <a style='float: right; margin-top: 8px; margin-right: 10px; cursor: pointer;' @click='openFile()' :id='model.strPath' 	v-if='model.OperateFlag == 0'>{{$t("file.saveAs")}}</a>
					<a style='float: right; margin-top: 8px; margin-right: 8px; cursor: pointer;' @click='openDir()' :id='model.strDir' 	v-if='model.OperateFlag == 1'>{{$t("file.cancel")}}</a>
                    <a style='float: right; margin-top: 8px; margin-right: 10px; cursor: pointer;' @click='openFile()' :id='model.strPath' 	v-if='model.OperateFlag == 2'>{{$t("file.open")}}</a>
					<a style='float: right; margin-top: 8px; margin-right: 8px; cursor: pointer;' @click='openDir()' :id='model.strDir' 	v-if='model.OperateFlag == 2'>{{$t("file.openDir")}}</a>
					<a style='float: right; margin-top: 8px; margin-right: 10px; cursor: pointer;' @click='openFile()' :id='model.strPath' 	v-if='model.OperateFlag == 3'>{{$t("file.reSave")}}</a>
					<a style='float: right; margin-top: 8px; margin-right: 8px; cursor: pointer;' @click='openDir()' :id='model.strDir' 	v-if='model.OperateFlag == 3'>{{$t("file.saveAs")}}</a>
                </div>
			</div>
        </div>
    </div>
</template>
<script>
export default {
    name: 'FileRecv',
    props: ['model'],
	created: function() {
        //组件初始化，对缺省值进行处理
        if (this.model.OperateFlag == null) {
            this.$set(this.model, 'OperateFlag', 0)
        }

        if (this.model.progressID_width == null) {
            this.$set(this.model, 'progressID_width', 300)
        }

        if (this.model.progressID_backgroundColor == null) {
            this.$set(this.model, 'progressID_backgroundColor', '#D1D1D1')
        }
    },
    methods: {
        openDir: function() {
		if (this.model.OperateFlag == 2){
			window.bridge.slotOpenDir(this.model.strMsgID);
		}
		else if (this.model.OperateFlag == 0 || this.model.OperateFlag == 3) {
			if (this.model.strMsgID != null) {
                window.bridge.slotGetFile(this.model.strMsgID);
            }
		}
		else if (this.model.OperateFlag == 1) {
			this.model.OperateFlag = 0;
			window.bridge.slotCancleLoadorDownLoad(this.model.strMsgID);
		}
		},
        openFile: function() {
		if (this.model.OperateFlag == 0 || this.model.OperateFlag == 3) {
				if (this.model.strMsgID != null) {
					window.bridge.slotSaveFile(this.model.strMsgID);
				}
			}
			else if (this.model.OperateFlag == 2) {
				window.bridge.slotOpenFile(this.model.strMsgID);
			}
        },

    },
}
</script>