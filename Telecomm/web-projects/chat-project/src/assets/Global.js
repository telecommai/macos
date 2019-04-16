//该文件为全局的变量及函数定义,以方便使用
//注意事项{{
//1.model里的strBuddyHeadPath和strBuddyNickName名字代表用户头像和昵称，若用户修改了头像和昵称，则会遍历模型修改这俩个属性值，所以这俩属性名不要乱改
//2.model里为了处理头像和昵称，要添加上strBuddyId这个属性值
//3.strBuddyHeadPath为了强制刷新，路径后添加?时间戳这种形式
//}}

import Vue from 'vue'

////////////////////////////////////////////////////////////////////////////////////////////////////////////
//注册C++函数到JS中
(function() {
    window.bridge = parent.window.channel_objects[window.frameElement.id];
})();

////////////////////////////////////////////////////////////////////////////////////////////////////////////

window.changeStyle = function(styleName)
{
    if(styleName == "dayStyle")
    {
        window.document.getElementById("globalStyle").href="qrc:/html/chatScript/Resources/html/chatScript/dayStyle.css";
        window.parent.document.body.style.backgroundColor="#ffffff";
    }else if(styleName == "nightStyle")
    {
        window.document.getElementById("globalStyle").href="qrc:/html/chatScript/Resources/html/chatScript/nightStyle.css";
        window.parent.document.body.style.backgroundColor="#042439";
    }else
    {

    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
window.isShowingMore = false; //是否处在获取更多消息中
window.$showMoreModels = [];



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

    if (window.isShowingMore) {
        window.$showMoreModels.push(model);
    } else {
        window.$models.push(model);
        window.scrollToBottom();
    }

}

window.modelPrint = function(model, tip) {
    tip = tip || "";
    window.console.log(tip + " => " + JSON.stringify(model));
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


window.scrollToBottom = function() {
    //下一个事件循环处理滚动条
    Vue.nextTick(function() {
        window.scrollTo(0, document.body.scrollHeight);
    });
}

//其它函数定义
window.onload = function() {
    document.getElementById("app").ondragover = function(e) {
        e.preventDefault();
    };
    document.getElementById("app").ondrop = function(e) {
        e.preventDefault();
    };

};


window.loadpic = function() {
    //图片加载完成后触发，代码需要设置onload

    window.scrollToBottom();
}


function GetMsgState(msgState) {
    switch (msgState) {
        case 0: //待发送
            //return "待发送";
            return "qrc:/MessageRemined/Resources/MessageReminder/wait_for_send.png";
        case 1:
            //return "预发送";
            return "qrc:/MessageRemined/Resources/MessageReminder/wait_for_send.png";
        case 2:
            //return "发送中";
            return "qrc:/MessageRemined/Resources/MessageReminder/send_ing.png";
        case 3:
            //return "已投递";
            return "qrc:/MessageRemined/Resources/MessageReminder/delivered.png";
        case 4:
            //return "已发送";
            return "qrc:/MessageRemined/Resources/MessageReminder/send_ed.png";
        case 5:
            //return "已送达";
            return "qrc:/MessageRemined/Resources/MessageReminder/sent.png";
        case 6:
            //return "已查看";
            return "qrc:/MessageRemined/Resources/MessageReminder/viewed.png";
        case 7:
            return "qrc:/MessageRemined/Resources/MessageReminder/unviewed.png";
        case 8:
            //return "发送失败";
            return "qrc:/MessageRemined/Resources/MessageReminder/send_failed.png";
        default:
            // return "erro";
            return "qrc:/MessageRemined/Resources/MessageReminder/delete.png";
    }
}


function getMenuMessage(menuLeft, menuTop) {
    var left = document.getElementsByClassName("triangle-left");

    var i, x, y, divx1, divy1, divx2, divy2;

    for (i = 0; i < left.length; i++) {
        var leftVar = left[i];
        x = menuLeft;
        y = menuTop;
        divx1 = leftVar.offsetLeft;
        divy1 = leftVar.offsetTop;
        divx2 = leftVar.offsetLeft + leftVar.offsetWidth;
        divy2 = leftVar.offsetTop + leftVar.offsetHeight;
        if (x < divx1 || x > divx2 || y < divy1 || y > divy2) {
            //不在div中
        } else {
            return leftVar.parentNode.id;
        }
    }
    var right = document.getElementsByClassName("triangle-right");
    for (i = 0; i < right.length; i++) {
        var rightVar = right[i];
        x = menuLeft;
        y = menuTop;
        divx1 = rightVar.offsetLeft;
        divy1 = rightVar.offsetTop;
        divx2 = rightVar.offsetLeft + rightVar.offsetWidth;
        divy2 = rightVar.offsetTop + rightVar.offsetHeight;
        if (x < divx1 || x > divx2 || y < divy1 || y > divy2) {
            //不在div中
        } else {
            if (rightVar.parentNode.parentNode.parentNode.parentNode.id != "")
                return rightVar.parentNode.parentNode.parentNode.parentNode.id;
            if (rightVar.parentNode.parentNode.parentNode.id != "")
                return rightVar.parentNode.parentNode.parentNode.id;
            var ulVar = rightVar.parentNode.parentNode;
            var imgVar = ulVar.getElementsByTagName("img")[0];
            if (imgVar.id != "")
                return imgVar.id;
        }
    }

    return null;
}


window.clear = function() {
    window.modelsClear();

    var isShowCopy = false;
    var isShowTransmit = false;

    document.addEventListener("contextmenu", function(event) {
        var selectionObj = window.getSelection();
        if (selectionObj.type != "Range") {
            isShowCopy = false;
        } else {
            isShowCopy = true;
        }
        event.preventDefault();

        //获取鼠标视口位置
        var top = event.clientY + document.body.scrollTop;
        var left = event.clientX + document.body.scrollLeft;

        var msgID = getMenuMessage(left, top);
        if (msgID == null)
            isShowTransmit = false;
        else
            isShowTransmit = true;


        window.bridge.slotPopUpMenu(isShowCopy, isShowTransmit, msgID == null ? "" : msgID);

    });
}


//清屏功能
window.clear_only = function() {
    window.modelsClear();
}

//个人聊天里我发送的文本消息
window.SendAppend = function(strBuddyHeadPath, strMsg, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);
    strMsg = decodeURIComponent(strMsg);

    var model = {
        type: "PerTextSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime() + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strMsgHtml: strMsg, //因为有表情，内嵌了HTML
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组里我发送的文本消息
window.SendGroupAppend = function(strBuddyHeadPath, strMsg, strMsgID, MsgState, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);
    strMsg = decodeURIComponent(strMsg);

    var model = {
        type: "GroupTextSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime() + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strMsgHtml: strMsg, //因为有表情，内嵌了HTML
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//个人聊天里我收到的文本消息
window.RecAppend = function(strBuddyHeadPath, strMsg, strMsgID, score, strBuddyId) {
    strMsg = decodeURIComponent(strMsg);

    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerTextRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime() + "?" + new Date().getTime(),
        strMsgHtml: strMsg, //因为有表情，内嵌了HTML
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组里我收到的文本消息
window.GroupRecvAppend = function(strBuddyHeadPath, strMsg, strBuddyNickName, strMsgId, score, strBuddyId) {
    strMsg = decodeURIComponent(strMsg);

    var model = {
        type: "GroupTextRecv",
        strMsgID: strMsgId,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        strMsgHtml: strMsg, //因为有表情，内嵌了HTML
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


function getTimeString(timeStamp) {
    var date = new Date(parseInt(timeStamp));
    var M = date.getMonth() + 1;
    var d = date.getDate();
    var h = date.getHours() < 10 ? ('0' + date.getHours()) : (date.getHours());
    var m = date.getMinutes() < 10 ? ('0' + date.getMinutes()) : (date.getMinutes());

    var curDate = new Date();
    if (curDate.getMonth() + 1 == M && curDate.getDate() == d) //如果消息日期是今天，不显示月日，只显示分时。
        return h + ":" + m;
    else {
        if (curDate.getMonth() + 1 == M && curDate.getDate() == d + 1) //如果消息日期是昨天，显示昨天+分时。
            return window.$tr('day.yesterday') + " " + h + ":" + m;
        else
            return M + "-" + d + " " + h + ":" + m; //以上条件都不符合，那就是更早的消息，显示月日+分时。            
    }

}

window.addTime = function(timeStamp) {
    var timeList = [];
    if (window.isShowingMore) {
        timeList = window.$showMoreModels.filter((model) => { return model.type == "TimeLine" });
    } else {
        timeList = window.$models.filter((model) => { return model.type == "TimeLine" });
    }

    var time = getTimeString(timeStamp);

    var model = {
        type: "TimeLine",
        timeStamp: timeStamp,
        time: time,
    }

    if (timeList.length == 0) {
        window.modelsPushBack(model);
    } else {
        var lastTime = null;
        for (var i = 0; i < timeList.length; i++) {
            if (i == 0)
                lastTime = timeList[i];
            else {
                if (parseInt(timeList[i].timeStamp) > parseInt(lastTime.timeStamp))
                    lastTime = timeList[i];
            }
        }

        if (parseInt(timeStamp) - parseInt(lastTime.timeStamp) > 60000) {
            window.modelsPushBack(model);
        }
    }
}

window.SetMsgState = function(msgID, msgState, score) {
    var strMsgState = GetMsgState(msgState);
    var item = window.$models.find((model) => { return model.strMsgID == msgID });
    if (item != null) {
        item.strMsgState = strMsgState;
        item.nScore = score;
    } else {
        //window.console.log("==========cannot find msgID:" + msgID);
    }

}

window.SetGroupMsgState = function(msgID, msgState, score) {
    var strMsgState = GetMsgState(msgState);
    var item = window.$models.find((model) => { return model.strMsgID == msgID });
    if (item != null) {
        item.strMsgState = strMsgState;
        item.nScore = score;
    } else {
        //window.console.log("==========cannot find msgID:" + msgID);
    }

}

window.tipMessage = function(message) {
    var model = {
        type: "TipMsg",
        message: message,
    }

    window.modelsPushBack(model);
}


/**
 * js截取字符串，中英文都能用
 * @param str：需要截取的字符串
 * @param len: 需要截取的长度
 */
function cutstr(str, len) {
    var str_length = 0;
    var str_len = 0;
    var str_cut = new String();
    str_len = str.length;
    for (var i = 0; i < str_len; i++) {
        var a = str.charAt(i);
        str_length++;
        if (escape(a).length > 4) {
            //中文字符的长度经编码之后大于4
            str_length++;
        }
        str_cut = str_cut.concat(a);
        if (str_length >= len) {
            str_cut = str_cut.concat("...");
            return str_cut;
        }
    }
    //如果给定字符串小于指定长度，则返回源字符串；
    if (str_length < len) {
        return str;
    }
}

//群组里我发送的文件
window.SendGroupFile = function(strBuddyHeadPath, strFileName, strMsgID, MsgState, strPicPath, strUlID, strSize, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);
    var strMsg = cutstr(strFileName, 12);
    var progressID = strMsgID.concat("bar");
    var CancleID = strMsgID.concat("can");

    var model = {
        type: "GroupFileSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strPicPath: strPicPath,
        strUlID: strUlID,
        strFileName: strFileName,
        strMsg: strMsg,
        strSize: strSize,
        progressID: progressID,
        CancleID: CancleID,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);

}

window.DeleteByMegId = function(strMsgID) {
    var idx = window.$models.findIndex((model) => { return model.strMsgID == strMsgID });
    var prev_idx = (idx - 1) < 0 ? null : idx - 1;

    if (prev_idx != null && window.$models[prev_idx].type == 'TimeLine') {
        window.$models.splice(prev_idx, 1);
    }

    if (idx >= 0) {
        window.$models.splice(idx, 1);
    }

}

window.DeleteByMsgIdOnly = function(strMsgID) {
    var idx = window.$models.findIndex((model) => { return model.strMsgID == strMsgID });

    if (idx >= 0) {
        window.$models.splice(idx, 1);
    }
}


window.ProgressBar = function(ID, num) {
    var item = window.$models.find((model) => { return model.progressID == ID });

    item.progressID_width = num;
    item.progressID_backgroundColor = "#00CD00";
}

window.ChangeLi = function(strUlID) {
    var item = window.$models.find((model) => { return model.strUlID == strUlID || model.CancleID == strUlID });

    if (item != null) {
        if (item.OperateFlag == null) {
            item.OperateFlag = 0;
        }

        if (item.OperateFlag == 0) {
            item.OperateFlag = 2;
        }
    }

}

window.ChangeLiFailed = function(strUlID) {
    var item = window.$models.find((model) => { return model.strUlID == strUlID || model.CancleID == strUlID });

    if (item != null) {
        if (item.OperateFlag == null) {
            item.OperateFlag = 0;
        }

        if (item.OperateFlag == 0) {
            item.OperateFlag = 3;
        }
    }

}

window.ChangeLiCanel = function(strUlID) {
    var item = window.$models.find((model) => { return model.strUlID == strUlID || model.CancleID == strUlID });

    if (item != null) {
        if (item.OperateFlag == null) {
            item.OperateFlag = 0;
        }

        if (item.OperateFlag == 0) {
            item.OperateFlag = 1;
        }
    }

}

window.ChangeLiTwo = function(strUlID) {
    var item = window.$models.find((model) => { return model.strUlID == strUlID || model.strUlID2 == strUlID });

    if (item != null) {
        item.OperateFlag = 2;
    }

}

window.ChangeLiThr = function(ID) {
    var item = window.$models.find((model) => { return model.strUlID == ID || model.strUlID2 == ID });

    if (item != null) {
        item.OperateFlag = 0;
    }

}


//群组里我接收到的文件
window.RecGroupFile = function(strBuddyHeadPath, strBuddyNickName, strFileName, strPicPath, strMsgID, strUlID, strUlID2, strSize, score, strBuddyId) {
    var FileName = cutstr(strFileName, 12);
    var progressID = strMsgID.concat("bar");

    var model = {
        type: "GroupFileRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        strPicPath: strPicPath,
        strUlID2: strUlID2,
        strFileName: strFileName,
        FileName: FileName,
        strSize: strSize,
        progressID: progressID,
        strUlID: strUlID,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

window.coverFile = function(strUlID) {
    var item = window.$models.find((model) => { return model.strUlID == strUlID || model.strUlID2 == strUlID });

    item.OperateFlag = 1;
}


//个人聊天里我发送的文件
window.SendFile = function(strBuddyHeadPath, strFileName, strMsgID, MsgState, strPicPath, strLiID, strSize, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var strMsg = cutstr(strFileName, 12);
    var progressID = strMsgID.concat("bar");
    var CancleID = strMsgID.concat("can");

    var model = {
        type: "PerFileSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strPicPath: strPicPath,
        strUlID: strLiID,
        strFileName: strFileName,
        strMsg: strMsg,
        strSize: strSize,
        progressID: progressID,
        CancleID: CancleID,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天里我接收到的文件
window.RecFile = function(strBuddyHeadPath, FileName, strPicPath, strMsgID, strUlID, strULID2, strSize, score, strBuddyId) {

    var strFileName = cutstr(FileName, 12);
    var progressID = strMsgID.concat("bar");

    var model = {
        type: "PerFileRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strPicPath: strPicPath,
        strUlID2: strULID2,
        strFileName: strFileName,
        FileName: FileName,
        strSize: strSize,
        progressID: progressID,
        strUlID: strUlID,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}



//我在其它设备上一对一聊天发送文件
window.SendOtherFile = function(strBuddyHeadPath, FileName, strPicPath, strMsgID, strUlID, strULID2, strSize, MsgState, score, strBuddyId) {

    var strFileName = cutstr(FileName, 12);
    var progressID = strMsgID.concat("bar");
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerFileOtherClientSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strPicPath: strPicPath,
        strUlID2: strULID2,
        strFileName: strFileName,
        strSize: strSize,
        progressID: progressID,
        strUlID: strUlID,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//我在其它设备上群组里发送文件
window.SendGroupOtherFile = function(strBuddyHeadPath, FileName, strPicPath, strMsgID, strUlID, strULID2, strSize, MsgState, score, strBuddyId) {

    var strFileName = cutstr(FileName, 12);
    var progressID = strMsgID.concat("bar");
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupFileOtherClientSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strPicPath: strPicPath,
        strUlID2: strULID2,
        strFileName: strFileName,
        strSize: strSize,
        progressID: progressID,
        strUlID: strUlID,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}



// 群组里我接收到的红包
window.GroupRedPacketAppend = function(strBuddyHeadPath, strBuddyNickName, strNotice, state, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupRedPacketRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        strNotice: strNotice,
        nScore: score,
        bOpen: state == "true", //红包是否被打开
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

window.setColor = function(strMsgID) {
    var item = window.$models.find((model) => { return model.strMsgID == strMsgID });

    item.bOpen = true;
}


//群组里我发送的红包
window.GroupRedPacketSend = function(strBuddyHeadPath, strNotice, state, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupRedPacketSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strNotice: strNotice,
        nScore: score,
        bOpen: state == "true", //红包是否被打开
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天我接收的红包
window.RecRedPacketAppend = function(strBuddyHeadPath, strNotice, state, strMsgID, score, strBuddyId) {
    var model = {
        type: "PerRedPacketRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strNotice: strNotice,
        nScore: score,
        bOpen: state == "true", //红包是否被打开
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天我发送的红包
window.SendRedPacketAppend = function(strBuddyHeadPath, strNotice, state, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerRedPacketSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        strNotice: strNotice,
        nScore: score,
        bOpen: state == "true", //红包是否被打开
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}




//个人聊天发送图片
window.SendPicture = function(strBuddyHeadPath, strIsUserDefine, strUserDefinePicPath, strPicPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerPictureSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        isUserDefine: strIsUserDefine == 'true',
        strUserDefinePicPath: strUserDefinePicPath,
        strPicPath: strPicPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//个人聊天接收图片
window.RecPictureAppend = function(strBuddyHeadPath, strIsUserDefine, strUserDefinePicPath, strPicPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerPictureRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        isUserDefine: strIsUserDefine == 'true',
        strUserDefinePicPath: strUserDefinePicPath,
        strPicPath: strPicPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组聊天发送图片
window.SendGroupPicture = function(strBuddyHeadPath, strIsUserDefine, strUserDefinePicPath, strPicPath, strMsgID, MsgState, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupPictureSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        isUserDefine: strIsUserDefine == 'true',
        strUserDefinePicPath: strUserDefinePicPath,
        strPicPath: strPicPath,
        //nScore: score,//暂未使用
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组聊天接收图片
window.GroupPictureAppend = function(strBuddyHeadPath, strIsUserDefine, strUserDefinePicPath, strPicPath, strBuddyNickName, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupPictureRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        isUserDefine: strIsUserDefine == 'true',
        strUserDefinePicPath: strUserDefinePicPath,
        strPicPath: strPicPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人语音发送
window.SendAudio = function(strBuddyHeadPath, strMsg, duration, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerAudioSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nDuration: duration,
        strMsgState: strMsgState,
        strMsg: strMsg,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//个人语音接收
window.RecAudioAppend = function(strBuddyHeadPath, strMsg, duration, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerAudioRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nDuration: duration,
        strMsg: strMsg,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组语音发送
window.SendGroupAudio = function(strBuddyHeadPath, strMsg, duration, strMsgID, MsgState, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupAudioSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nDuration: duration,
        strMsgState: strMsgState,
        strMsg: strMsg,
        //nScore: score,//暂时未用到
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//群组语音接收
window.GroupAudioAppend = function(strBuddyHeadPath, strMsg, duration, strBuddyNickName, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupAudioRecv",
        strMsgID: strMsgID,
        strBuddyNickName: strBuddyNickName,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nDuration: duration,
        strMsg: strMsg,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}



//个人通用卡片发送
window.SendCommon = function(image, smallIcon, title, content, systemName, strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerCardSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        image: image,
        title: title,
        content: content,
        smallIcon: smallIcon,
        systemName: systemName,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组通用卡片发送
window.SendGroupCommon = function(image, smallIcon, title, content, systemName, strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupCardSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        image: image,
        title: title,
        content: content,
        smallIcon: smallIcon,
        systemName: systemName,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人通用卡片接收
window.RecCommonAppend = function(image, smallIcon, title, content, systemName, strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerCardRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        image: image,
        title: title,
        content: content,
        smallIcon: smallIcon,
        systemName: systemName,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);

}

//群通用卡片接收
window.GroupCommonAppend = function(image, smallIcon, title, content, systemName, strBuddyNickName, strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupCardRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        image: image,
        title: title,
        content: content,
        smallIcon: smallIcon,
        systemName: systemName,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}



//个人位置发送
window.SendLocation = function(strBuddyHeadPath, data, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var jsonData = JSON.parse(data);
    var imageUrl = jsonData.url;
    var imageTitle = jsonData.name;
    var webTitle = jsonData.specific;

    var model = {
        type: "PerLocationSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        data: data,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//群位置发送
window.SendGroupLocation = function(strBuddyHeadPath, data, strMsgID, MsgState, strBuddyId) {

    var strMsgState = GetMsgState(MsgState);

    var jsonData = JSON.parse(data);
    var imageUrl = jsonData.url;
    var imageTitle = jsonData.name;
    var webTitle = jsonData.specific;

    var model = {
        type: "GroupLocationSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        data: data,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        //nScore: score,//暂未使用
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人位置接收
window.RecLocationAppend = function(strBuddyHeadPath, strMsgID, data, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var jsonData = JSON.parse(data);
    var imageUrl = jsonData.url;
    var imageTitle = jsonData.name;
    var webTitle = jsonData.specific;

    var model = {
        type: "PerLocationRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        data: data,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组位置接收
window.GroupLocationAppend = function(strBuddyHeadPath, strMsgID, strBuddyNickName, data, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var jsonData = JSON.parse(data);
    var imageUrl = jsonData.url;
    var imageTitle = jsonData.name;
    var webTitle = jsonData.specific;

    var model = {
        type: "GroupLocationRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        data: data,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人通告发送
window.SendNotice = function(strBuddyHeadPath, imageUrl, imageTitle, webUrl, webTitle, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerNoticeSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        webUrl: webUrl,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//群组通告发送
window.SendGroupNotice = function(strBuddyHeadPath, imageUrl, imageTitle, webUrl, webTitle, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupNoticeSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        webUrl: webUrl,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人通告接收
window.RecNoticeAppend = function(strBuddyHeadPath, strMsgID, imageUrl, imageTitle, webUrl, webTitle, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerNoticeRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        webUrl: webUrl,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组通告接收
window.GroupNoticeAppend = function(strBuddyHeadPath, strBuddyNickName, imageUrl, imageTitle, webUrl, webTitle, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupNoticeRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        webUrl: webUrl,
        imageUrl: imageUrl,
        imageTitle: imageTitle,
        webTitle: webTitle,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人分享链接发送
window.SendShareUrl = function(subject, text, url, imageUrl, strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerShareUrlSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        url: url,
        imageUrl: imageUrl == "" ? "qrc:/html/Resources/html/internet.png" : imageUrl,
        subject: subject,
        text: text,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//群组分享链接发送
window.SendGroupShareUrl = function(subject, text, url, imageUrl, strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupShareUrlSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        url: url,
        imageUrl: imageUrl == "" ? "qrc:/html/Resources/html/internet.png" : imageUrl,
        subject: subject,
        text: text,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人分享链接接收
window.RecShareUrlAppend = function(subject, text, url, imageUrl, strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerShareUrlRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        url: url,
        imageUrl: imageUrl == "" ? "qrc:/html/Resources/html/internet.png" : imageUrl,
        subject: subject,
        text: text,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//群组分享链接接收
window.GroupShareUrlAppend = function(subject, text, url, imageUrl, strBuddyNickName, strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupShareUrlRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        url: url,
        imageUrl: imageUrl == "" ? "qrc:/html/Resources/html/internet.png" : imageUrl,
        subject: subject,
        text: text,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);

}


//个人视频发送
window.SendVdo = function(strBuddyHeadPath, strIsLoading, strVideoPicPath, strVideoPath, strMsgID, MsgState, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerVideoSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        isLoading: strIsLoading == 'true',
        strVideoPicPath: strVideoPicPath,
        strVideoPath: strVideoPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);

}

//群组视频发送
window.GroupSendVdo = function(strBuddyHeadPath, strIsLoading, strVideoPicPath, strVideoPath, strMsgID, MsgState, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "GroupVideoSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        isLoading: strIsLoading == 'true',
        strVideoPicPath: strVideoPicPath,
        strVideoPath: strVideoPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);

}


//个人视频接收
window.VdoAppend = function(strBuddyHeadPath, strIsLoading, strVideoPicPath, strVideoPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerVideoRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        isLoading: strIsLoading == 'true',
        strVideoPicPath: strVideoPicPath,
        strVideoPath: strVideoPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//群聊天视频接收
window.GroupVdoAppend = function(strBuddyHeadPath, strIsLoading, strVideoPicPath, strVideoPath, strBuddyNickName, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "GroupVideoRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strBuddyNickName: strBuddyNickName,
        isLoading: strIsLoading == 'true',
        strVideoPicPath: strVideoPicPath,
        strVideoPath: strVideoPath,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}



//个人聊天密信发送
window.SendSecretAppend = function(strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerSecretTextSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}

//个人聊天密信接收
window.RecSecretAppend = function(strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerSecretTextRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天密图发送
window.SendSecretImageAppend = function(strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerSecretPictureSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天密图接收
window.RecSecretImageAppend = function(strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerSecretPictureRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天密件发送
window.SendSecretFileAppend = function(strBuddyHeadPath, strMsgID, MsgState, score, strBuddyId) {
    var strMsgState = GetMsgState(MsgState);

    var model = {
        type: "PerSecretFileSend",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        strMsgState: strMsgState,
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}


//个人聊天密件接收
window.RecSecretFileAppend = function(strBuddyHeadPath, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var model = {
        type: "PerSecretFileRecv",
        strMsgID: strMsgID,
        strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
        nScore: score,
        strBuddyId: strBuddyId,
    }

    window.modelsPushBack(model);
}



//交易转入转出
window.RecTransfer = function(strBuddyHeadPath, transfer, strMsgID, score, strBuddyId) {
    window.DeleteByMsgIdOnly(strMsgID);

    var transTitle, transContent;
    if (transfer == "sender") {
        transTitle = window.$tr('transfer.outTitle');
        transContent = window.$tr('transfer.outContent');
        var strMsgState = GetMsgState(4);

        var modelSend = {
            type: "PerTransferSend",
            strMsgID: strMsgID,
            strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
            strMsgState: strMsgState,
            transTitle: transTitle,
            transContent: transContent,
            nScore: score,
            strBuddyId: strBuddyId,
        }

        window.modelsPushBack(modelSend);

    } else if (transfer == "receiver") {
        transTitle = window.$tr('transfer.inTitle');
        transContent = window.$tr('transfer.inContent');

        var modelRecv = {
            type: "PerTransferRecv",
            strMsgID: strMsgID,
            strBuddyHeadPath: strBuddyHeadPath + "?" + new Date().getTime(),
            transTitle: transTitle,
            transContent: transContent,
            nScore: score,
            strBuddyId: strBuddyId,
        }

        window.modelsPushBack(modelRecv);
    }


}



window.RemoveFetchMore = function() {
    //删除可能存在的原有的FetchMore组件
    var idx = window.$models.findIndex((model) => { return model.type == "FetchMore" });

    if (idx >= 0) {
        window.$models.splice(idx, 1);
    }

}

window.AddShowMore = function() {

    window.RemoveFetchMore();

    var model = {
        type: "FetchMore",
    }

    if (!window.isShowingMore) {
        window.modelsPushFront(model);

        window.scrollToBottom();
    } else {
        window.$showMoreModels.push(model);
    }

}


window.BeginShowMore = function() {
    window.RemoveFetchMore();

    window.isShowingMore = true;
}

window.EndShowMore = function() {

    var old_scrollHeight = document.body.scrollHeight;
    //前头追加组件，注意对于图片组件的onload事件需要处理下滚动问题
    for (var i = 0; i < window.$showMoreModels.length; i++) {
        window.$showMoreModels[i]._isShowingMore = true; //标识当前模型为_isShowingMore
        window.modelsInsert(i, window.$showMoreModels[i]);
    }

    window.$showMoreModels = [];

    window.isShowingMore = false;

    Vue.nextTick(function() {
        window.scrollTo(0, document.body.scrollHeight - old_scrollHeight);
    });
}



//更新头像
window.UpdateHtmlBuddyHeaderImagePath = function(strBuddyId, strBuddyHeadPath) {
    if (strBuddyHeadPath.indexOf("file:///") == 0 || strBuddyHeadPath.indexOf("qrc:") == 0) {
        //不作处理
    } else if (strBuddyHeadPath.indexOf(":") == 0) {
        strBuddyHeadPath = "qrc" + strBuddyHeadPath;
    } else {
        strBuddyHeadPath = "file:///" + strBuddyHeadPath;
    }


    //window.console.log("===============UpdateHtmlBuddyHeaderImagePath strBuddyId="+strBuddyId+",strBuddyHeadPath="+strBuddyHeadPath);

    var items = window.$models.filter((model) => { return model.strBuddyId == strBuddyId });
    items.forEach(function(item) {
        //头像路径不变，内容变了，不会触发VUE更新，所以后面加上时间戳强制刷新
        item.strBuddyHeadPath = strBuddyHeadPath + "?" + new Date().getTime();
    });
}


//更新昵称
window.UpdateHtmlBuddyNickName = function(strBuddyId, strBuddyNickName) {
    var items = window.$models.filter((model) => { return model.strBuddyId == strBuddyId && model.strBuddyNickName != null });
    items.forEach(function(item) {
        item.strBuddyNickName = strBuddyNickName;
    });
}

//更新Notice图片
window.UpdateNoticeImg = function(MsgId, imgPath) {
    var item = window.$models.filter((model) => { return model.strMsgID == MsgId });
    if (item.length > 0) {
        item[0].imageUrl = imgPath;
    }
}


window.ChangeFileState = function(strMsgId,iState) {
     if (window.isShowingMore) {
        var item = window.$showMoreModels.find((model) => { return model.strMsgID == strMsgId });
        if (item != null) {
            item.OperateFlag = iState;
        }
     }else{
        var item = window.$models.find((model) => { return model.strMsgID == strMsgId });
        if (item != null) {
            item.OperateFlag = iState;
        }
     }
    
}