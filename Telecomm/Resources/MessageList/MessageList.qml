import QtQuick 2.9
import QtQuick.Controls 2.2

import QtQuick.Layouts 1.1
import QtGraphicalEffects 1.0
import QtQuick.Controls.Styles 1.4

//c++暴露了vm,vm_model,dispathcer

Item{
    id:rootItem
    objectName:"rootItem"

    //换肤相关{{
    property var currentStyle: dayStyle
    property var clearColor: currentStyle.bgColor

    QtObject{
        id:dayStyle
        objectName:"dayStyle"

        readonly property string bgColor:"#fafaf9"

        readonly property string scrollBarBgColor:"#dcd9d4"

        readonly property string itemSelectBgColor:"#eceae8"
        readonly property string itemTopOrderBgColor:"#ecebea"

        readonly property string itemNickNameColor:"#000000"
        readonly property string itemMsgColor:"#9a9691"
        readonly property string itemMsgTimeColor:"#999999"

        readonly property string itemButtonRemoveColor:"#ff7f24"
    }

    QtObject{
        id:nightStyle
        objectName:"nightStyle"

        readonly property string bgColor:"#0a182d"

        readonly property string scrollBarBgColor:"#063451"

        readonly property string itemSelectBgColor:"#183257"
        readonly property string itemTopOrderBgColor:"#182350"

        readonly property string itemNickNameColor:"#1381c6"
        readonly property string itemMsgColor:"#3b5b7c"
        readonly property string itemMsgTimeColor:"#1381c6"

        readonly property string itemButtonRemoveColor:"#ff7f24"
    }

    function changeStyle(styleName)
    {
        if(styleName === "dayStyle")
        {
            currentStyle = dayStyle;
        }else if(styleName === "nightStyle")
        {
            currentStyle = nightStyle;
        }
        else
        {
        }
    }

    //换肤相关}}


    function doUpDownKeyClick(isUp)
    {
        if(isUp)
        {
            listViewMessageList.decrementCurrentIndex();

            listViewMessageList.currentItem.doClick();
        }else
        {
            listViewMessageList.incrementCurrentIndex();

            listViewMessageList.currentItem.doClick();
        }
    }

    function doClickIndex(index)
    {
        listViewMessageList.positionViewAtIndex(index ,ListView.Visible);
        listViewMessageList.currentIndex = index;

        listViewMessageList.currentItem.doClick();
    }

    function getGroupId(qPoint)
    {
        var idBuff;
        var getCurrIndex =  listViewMessageList.indexAt(qPoint.x, qPoint.y);
        listViewMessageList.currentIndex = getCurrIndex;
        idBuff = listViewMessageList.itemAt(qPoint.x, qPoint.y).getCurrGroupId();
        return idBuff;
    }


    MouseArea{
        id:mouseAreaRoot
        anchors.fill: parent
        hoverEnabled: true

        ScrollView{
            anchors.fill: parent
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ScrollBar.vertical.policy: ScrollBar.AlwaysOff

            ListView {
                id: listViewMessageList
                objectName: "listViewMessageList"
                width: parent.width

                ScrollBar.vertical:
                    ScrollBar
                    {
                        id: control
                        hoverEnabled: true
                        active:  true
                        anchors.top: parent.top
                        anchors.right: parent.right
                        anchors.bottom: parent.bottom
                        policy: mouseAreaRoot.containsMouse?ScrollBar.AsNeeded:ScrollBar.AlwaysOff
                        contentItem: Rectangle
                        {
                            implicitWidth: 10
                            implicitHeight: parent.height
                            radius: width / 2
                            color: currentStyle.scrollBarBgColor
                            visible:height+4 == parent.height?false:true
                        }
                    }
                delegate:ItemDelegate {
                    width: parent.width
                    height: 58

                    function getCurrGroupId()
                    {
                        var idBuff = userId;
                        return idBuff;
                    }
                    function doClick()
                    {
                        listViewMessageList.currentIndex = index;
                        vm_model.currentSelectedUserId = userId;
                        unreadMsgCount = 0;
                        dispatcher.sigClickItem(userId);
                    }
                    function doRightClick()
                    {
                        listViewMessageList.currentIndex = index;
                        dispatcher.sigRightClickItem(userId);
                    }


                    Rectangle{
                        anchors.fill: parent
                        //color: parent.ListView.isCurrentItem? "#183257":(mouseAreaFriendItem.containsMouse|| buttonRemove.hovered? "#092442":"#0a182d")
                        color: parent.ListView.isCurrentItem? currentStyle.itemSelectBgColor:(msgTopOrder > 0? currentStyle.itemTopOrderBgColor:currentStyle.bgColor)
                    }

                    MouseArea{
                        id:mouseAreaFriendItem
                        anchors.fill: parent
                        hoverEnabled: true
                        acceptedButtons: Qt.LeftButton | Qt.RightButton//激活右键

                        onPressed: {
                            if(mouse.button === Qt.LeftButton)
                            {
                                parent.doClick();
                            }
                        }
                        onClicked:
                        {
                            if(mouse.button === Qt.RightButton)
                            {
                                parent.doRightClick();
                            }
                        }

                    }


                    RowLayout {
                        id: rowLayout
                        anchors.fill: parent

                        Item {
                            id: item1
                            width: 55
                            Layout.fillHeight: true

                            Image {
                                id: imageHead
                                x: 8
                                width: 40
                                height: 40
                                anchors.verticalCenter: parent.verticalCenter
                                sourceSize.height: 40
                                sourceSize.width: 40
                                mipmap: true
                                source: headUrl
                                asynchronous: false

                                layer.enabled: true
                                layer.effect: OpacityMask {
                                    maskSource: Item {
                                        width: imageHead.width
                                        height: imageHead.height
                                        Rectangle {
                                            anchors.centerIn: parent
                                            width: imageHead.width
                                            height: imageHead.height
                                            radius: 4
                                        }
                                    }
                                }
                            }
                        }

                        Item {
                            id: item2
                            Layout.fillWidth: true
                            Layout.fillHeight: true
                            clip:true

                            ColumnLayout {
                                id: columnLayout
                                spacing: Qt.platform.os == "linux"? 6:0
                                anchors.fill: parent

                                Item {
                                    id: item4
                                    Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true

                                    Label {
                                        id: labelNickName
                                        color: currentStyle.itemNickNameColor
                                        anchors.fill: parent
                                        elide:Text.ElideRight
                                        verticalAlignment: Text.AlignBottom
                                        text:nickName
                                        anchors.bottom: parent.bottom
                                        anchors.bottomMargin: 0
                                        font.family:"microsoft yahei"
                                        font.pointSize: Qt.platform.os == "osx"? 14:14*0.75
                                    }
                                }

                                Item {
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true

                                    RowLayout{
                                        anchors.fill: parent

                                        Item{
                                            Layout.alignment: Qt.AlignLeft | Qt.AlignTop
                                            width:12
                                            height: 12
                                            visible: sendStatusUrl != ""
                                            Image {
                                                anchors.top: parent.top
                                                anchors.topMargin: 3

                                                sourceSize.height: 12
                                                sourceSize.width: 12
                                                width:12
                                                height: 12
                                                source: sendStatusUrl
                                                mipmap: true
                                                asynchronous: true
                                                visible: sendStatusUrl != ""
                                            }
                                        }


                                        Label {
                                            id: labelMsg
                                            Layout.fillWidth: true
                                            Layout.fillHeight: true
                                            elide:Text.ElideRight
                                            verticalAlignment: Text.AlignTop
                                            text: msg
                                            color:currentStyle.itemMsgColor
                                            font.pointSize: Qt.platform.os == "osx"? 12:12*0.75
                                            font.family:"microsoft yahei"
                                        }
                                    }


                                }
                            }
                        }

                        Item {
                            id: item3
                            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
                            Layout.fillHeight: true
                            width:labelMsgTime.contentWidth+5

                            ColumnLayout {
                                id: columnLayoutRight
                                spacing: 0
                                anchors.fill: parent

                                Item {
                                    id: item6
                                    Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true

                                    Label {
                                        id: labelMsgTime
                                        text:msgTime
                                        anchors.right: parent.right
                                        anchors.rightMargin: 15
                                        verticalAlignment: Text.AlignBottom
                                        anchors.bottom: parent.bottom
                                        anchors.bottomMargin: 0
                                        color: currentStyle.itemMsgTimeColor
                                        font.family:"microsoft yahei"
                                        font.pointSize: Qt.platform.os == "osx"? 12:12*0.75
                                    }
                                }

                                Item {
                                    id: item7
                                    Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true

                                    Rectangle {
                                        id: rectangle
                                        visible: !buttonRemove.visible && unreadMsgCount > 0
                                        width: msgPrompt == 1 ? 10 : 20
                                        height: msgPrompt == 1 ? 10 : 20
                                        color: currentStyle.itemButtonRemoveColor
                                        radius: 10
                                        border.width: 0
                                        anchors.right: parent.right
                                        anchors.rightMargin: msgPrompt == 1 ? 20 : 15
                                        anchors.bottom: parent.bottom
                                        anchors.bottomMargin: msgPrompt == 1 ? 12 : 10

                                        border.color: "#00000000"

                                        Label {
                                            id: label1
                                            visible: msgPrompt == 1 ? false : true
                                            text:unreadMsgCount.toString()
                                            horizontalAlignment: Text.AlignHCenter
                                            verticalAlignment: Text.AlignVCenter
                                            anchors.fill: parent
                                            font.family:"microsoft yahei"
                                            font.pointSize: Qt.platform.os == "osx"? 10:10*0.75
                                        }
                                    }

                                    Button {
                                        id: buttonRemove
                                        width: 20
                                        height: 20
                                        anchors.right: parent.right
                                        anchors.rightMargin: 15
                                        visible: mouseAreaFriendItem.containsMouse || buttonRemove.hovered
                                        hoverEnabled:true
                                        background: Image{
                                            anchors.fill: parent
                                            source: buttonRemove.hovered? "qrc:/Login/Resources/login/message_close.png" : "qrc:/Login/Resources/login/message_close_hove.png"
                                        }

                                        MouseArea{
                                            anchors.fill: parent
                                            cursorShape:Qt.PointingHandCursor
                                            acceptedButtons: Qt.NoButton
                                        }

                                        onPressed:{
                                            dispatcher.sigCloseChatQuery(userId);
                                        }
                                    }
                                }
                            }


                        }
                    }
                }



                model: vm_model



                Component.onCompleted: {

                }
            }
        }
    }
}




