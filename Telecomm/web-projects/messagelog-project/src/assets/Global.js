//该文件为全局的变量及函数定义,以方便使用
//注意事项{{
//msg id的名字统一用msgID，以方便使用
//}}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

import Vue from 'vue'

////////////////////////////////////////////////////////////////////////////////////////////////////////////

window.changeStyle = function(styleName)
{
    if(styleName == "dayStyle")
    {
        window.document.getElementById("globalStyle").href="qrc:/html/messagelogScript/Resources/html/messagelogScript/dayStyle.css";
        window.document.body.style.backgroundColor="#ffffff";
    }else if(styleName == "nightStyle")
    {
        window.document.getElementById("globalStyle").href="qrc:/html/messagelogScript/Resources/html/messagelogScript/nightStyle.css";
        window.document.body.style.backgroundColor="#042439";
    }else
    {

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//模型操作
window.$models = []

window.modelsClear = function() {
    window.$models.splice(0);
}

window.modelsInsert = function(index, model) {
    window.$models.splice(index, 0, model);
}

window.modelsPushFront = function(model) {
    window.$models.unshift(model);
}

window.modelsPushBack = function(model) {
    window.$models.push(model);
}

window.modelPrint = function(model, tip) {
    tip = tip || "";
    window.console.log(tip + " => " + JSON.stringify(model));
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//其它属性值操作
window.$props = {
    strTitle: '', //消息记录标题
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////
//切换语言
window.switchI18NLocale = function(locale) {
    window.console.log("===============switchI18NLocale to => " + locale);
    window.$Vue.$i18n.locale = locale;
}

window.$tr = function(txt) {
    return window.$Vue.$t(txt);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//强制复制时只复制无格式文本信息，避免粘贴到WORD上格式太乱
document.body.oncopy = function(e) {
    e.preventDefault();
    e.clipboardData.setData('text/plain', window.getSelection());
}

window.DeleteByMsgIdOnly = function(msgID) {
    var idx = window.$models.findIndex((model) => { return model.msgID == msgID });

    if (idx >= 0) {
        window.$models.splice(idx, 1);
    }
}


//清空界面的方法
window.clear = function() {
    window.modelsClear();
}

//写入标题，例如“与张三的消息记录”
window.setPerTitle = function(strTitle) {
    window.console.log("============setPerTitle:" + strTitle);
    window.$props.strTitle = strTitle;
}

//写入标题，例如“在工作群的消息记录”
window.setGroupTitle = function(strTitle) {
    window.console.log("============setGroupTitle:" + strTitle);
    window.$props.strTitle = strTitle;
}

//当没有消息记录时执行此方法。
window.space = function() {
    var model = {
        type: "EmptyMsg",
    }

    window.modelsPushBack(model);
}

//添加时间标签
window.addDate = function(strDate) {
    var model = {
        type: "TimeLine",
        strDate: strDate,
    }

    window.modelsPushBack(model);
}

//滚动到指定时间标签。
window.scrollDate = function(strDate) {
    var item = window.$app.$refs.refComponents.find((comp) => { return comp.model.strDate == strDate });

    if (item != null) {
        var bar = item.$refs.refDateTime.offsetParent.offsetTop - 40;

        Vue.nextTick(function() {
            window.scrollTo(0, bar);
        });
    }
}

//接收文本信息。
window.recvText = function(name, time, strText) {
    strText = decodeURIComponent(strText);

    var model = {
        type: "TextRecv",
        name: name,
        time: time,
        strText: strText,
    }

    window.modelsPushBack(model);
}

//发送文本消息。
window.sendText = function(name, time, strText) {
    strText = decodeURIComponent(strText);

    var model = {
        type: "TextSend",
        name: name,
        time: time,
        strText: strText,
    }

    window.modelsPushBack(model);
}

//接收图片。
window.recvImg = function(name, time, strImg,strSmallImg) {
    var model = {
        type: "ImgRecv",
        name: name,
        time: time,
        strImg: strImg,
        strSmallImg: strSmallImg,
    }

    window.modelsPushBack(model);
}

//发送图片。
window.sendImg = function(name, time, strImg,strSmallImg) {
    var model = {
        type: "ImgSend",
        name: name,
        time: time,
        strImg: strImg,
        strSmallImg: strSmallImg,
    }

    window.modelsPushBack(model);
}

//发送音频
window.sendAudio = function(name, time, strAudio, duration, msgID) {
    var model = {
        type: "AudioSend",
        name: name,
        time: time,
        msgID: msgID,
        duration: duration,
        strAudio: strAudio,
    }

    window.modelsPushBack(model);
}

//接收音频
window.recvAudio = function(name, time, strAudio, duration, msgID) {
    var model = {
        type: "AudioRecv",
        name: name,
        time: time,
        msgID: msgID,
        duration: duration,
        strAudio: strAudio,
    }

    window.modelsPushBack(model);
}

//接收视频
window.recvVideo = function(name, time, strVideoPicPath, strVideoPath) {
    var model = {
        type: "VideoRecv",
        name: name,
        time: time,
        strVideoPicPath: strVideoPicPath,
        strVideoPath: strVideoPath,
    }

    window.modelsPushBack(model);
}

//发送视频
window.sendVideo = function(name, time, strVideoPicPath, strVideoPath) {
    var model = {
        type: "VideoSend",
        name: name,
        time: time,
        strVideoPicPath: strVideoPicPath,
        strVideoPath: strVideoPath,
    }

    window.modelsPushBack(model);
}

//接收文件
window.recvFile = function(strMsgID, name, time, strImg, strPath, strSize, OperateFlag) {
    var strDir = strPath.substr(0, strPath.lastIndexOf('/') + 1);
    var strName = strPath.substr(strPath.lastIndexOf('/') + 1);
    var strShortName;
	var progressID = strMsgID.concat("bar");
    if (strName.length > 14) {
        strShortName = strName.substr(0, 14) + "...";
    } else {
        strShortName = strName;
    }
    var model = {
		strMsgID: strMsgID,
        type: "FileRecv",
        name: name,
        time: time,
        strImg: strImg,
        strName: strName,
        strShortName: strShortName,
        strSize: strSize,
        strPath: strPath,
        strDir: strDir,
		OperateFlag: OperateFlag,
		progressID: progressID,
    }

    window.modelsPushBack(model);

}


//发送文件
window.sendFile = function(strMsgID, name, time, strImg, strPath, strSize) {
    var strDir = strPath.substr(0, strPath.lastIndexOf('/') + 1);
    var strName = strPath.substr(strPath.lastIndexOf('/') + 1);
    var strShortName;
    if (strName.length > 14) {
        strShortName = strName.substr(0, 14) + "...";
    } else {
        strShortName = strName;
    }

    var model = {
        type: "FileSend",
        strMsgID: strMsgID,
        name: name,
        time: time,
        strImg: strImg,
        strName: strName,
        strShortName: strShortName,
        strSize: strSize,
        strPath: strPath,
        strDir: strDir,
    }

    window.modelsPushBack(model);
}

//接收通告
window.recvNotice = function(name, time, imageUrl, imageTitle, webUrl, webTitle, msgID) {
    var model = {
        type: "NoticeRecv",
        name: name,
        time: time,
        webUrl: webUrl,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        msgID:msgID,
    }

    window.modelsPushBack(model);
}

//发送通告
window.sendNotice = function(name, time, imageUrl, imageTitle, webUrl, webTitle, msgID) {
    var model = {
        type: "NoticeSend",
        name: name,
        time: time,
        webUrl: webUrl,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        msgID:msgID,
    }

    window.modelsPushBack(model);
}

//地理位置接收
window.recvLocation = function(name, time, msgID, url, imageTitle, webTitle) {
    var model = {
        type: "LocationRecv",
        name: name,
        time: time,
        msgID: msgID,
        url: url,
        imageTitle: imageTitle,
        webTitle: webTitle,
    }

    window.modelsPushBack(model);
}

//地理位置发送
window.sendLocation = function(name, time, msgID, url, imageTitle, webTitle) {
    var model = {
        type: "LocationSend",
        name: name,
        time: time,
        msgID: msgID,
        url: url,
        imageTitle: imageTitle,
        webTitle: webTitle,
    }

    window.modelsPushBack(model);
}

//通用卡片接收
window.recvCommon = function(name, time, image, smallIcon, title, content, systemName, msgID) {
    var model = {
        type: "CommonRecv",
        name: name,
        time: time,
        msgID: msgID,
        image: image,
        title: title,
        content: content,
        smallIcon: smallIcon,
        systemName: systemName,
    }

    window.modelsPushBack(model);
}

//通用卡片发送
window.sendCommon = function(name, time, image, smallIcon, title, content, systemName, msgID) {
    var model = {
        type: "CommonSend",
        name: name,
        time: time,
        msgID: msgID,
        image: image,
        title: title,
        content: content,
        smallIcon: smallIcon,
        systemName: systemName,
    }

    window.modelsPushBack(model);
}


//密信接收
window.recvSecretText = function(name, time, msgID) {
    window.DeleteByMsgIdOnly(msgID);

    var model = {
        type: "SecretTextRecv",
        name: name,
        time: time,
        msgID: msgID,
    }

    window.modelsPushBack(model);
}

//密信发送
window.sendSecretText = function(name, time, msgID) {
    window.DeleteByMsgIdOnly(msgID);

    var model = {
        type: "SecretTextSend",
        name: name,
        time: time,
        msgID: msgID,
    }

    window.modelsPushBack(model);
}

//密图接收
window.recvSecretPic = function(name, time, msgID) {
    window.DeleteByMsgIdOnly(msgID);

    var model = {
        type: "SecretPictureRecv",
        name: name,
        time: time,
        msgID: msgID,
    }

    window.modelsPushBack(model);
}

//密图发送
window.sendSecretPic = function(name, time, msgID) {
    window.DeleteByMsgIdOnly(msgID);

    var model = {
        type: "SecretPictureSend",
        name: name,
        time: time,
        msgID: msgID,
    }

    window.modelsPushBack(model);
}

//密件接收
window.recvSecretFile = function(name, time, msgID) {
    window.DeleteByMsgIdOnly(msgID);

    var model = {
        type: "SecretFileRecv",
        name: name,
        time: time,
        msgID: msgID,
    }

    window.modelsPushBack(model);
}

//密件发送
window.sendSecretFile = function(name, time, msgID) {
    window.DeleteByMsgIdOnly(msgID);

    var model = {
        type: "SecretFileSend",
        name: name,
        time: time,
        msgID: msgID,
    }

    window.modelsPushBack(model);
}


//交易转入
window.recvTransfer = function(name, time, msgID) {
    var transTitle, transContent;
    transTitle = window.$tr('transfer.inTitle');
    transContent = window.$tr('transfer.inContent');

    var model = {
        type: "TransferRecv",
        name: name,
        time: time,
        msgID: msgID,
        transTitle: transTitle,
        transContent: transContent,
    }

    window.modelsPushBack(model);
}

//交易转出
window.sendTransfer = function(name, time, msgID) {
    var transTitle, transContent;
    transTitle = window.$tr('transfer.outTitle');
    transContent = window.$tr('transfer.outContent');

    var model = {
        type: "TransferSend",
        name: name,
        time: time,
        msgID: msgID,
        transTitle: transTitle,
        transContent: transContent,
    }

    window.modelsPushBack(model);
}

window.scrollToTop = function() {
    window.scrollTo(0, 0);
}



//红包接收
window.recvRedPacketAppend = function(name, time, strNotice, msgID, state) {
    var model = {
        type: "RedPacketRecv",
        name: name,
        time: time,
        msgID: msgID,
        strNotice: strNotice,
        bOpen: state == 'true',
    }

    window.modelsPushBack(model);
}

//红包发送
window.sendRedPacketAppend = function(name, time, strNotice, msgID, state) {
    var model = {
        type: "RedPacketSend",
        name: name,
        time: time,
        msgID: msgID,
        strNotice: strNotice,
        bOpen: state == 'true',
    }

    window.modelsPushBack(model);
}

//更新Notice图片
window.UpdateNoticeImg = function(MsgId, imgPath) {
    var item = window.$models.filter((model) => { return model.msgID == MsgId});
    if(item.length>0)
    {
        item[0].imageUrl = imgPath;
    }
}

window.ChangeFileState = function(strMsgId,iState) {
    var item = window.$models.find((model) => { return model.strMsgID == strMsgId });
    if (item != null) {
		item.OperateFlag = iState;
    }
}

window.ProgressBar = function(ID, num) {
    var item = window.$models.find((model) => { return model.progressID == ID });

    item.progressID_width = num;
    item.progressID_backgroundColor = "#00CD00";
}