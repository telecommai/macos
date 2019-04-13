import QtQuick 2.9
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.1
import QtGraphicalEffects 1.0
import QtQuick.Controls.Styles 1.4


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

        readonly property string itemHoverBgColor:"#eceae8"

        readonly property string itemNickNameColor:"#000000"
        readonly property string itemMsgColor:"#000000"
    }

    QtObject{
        id:nightStyle
        objectName:"nightStyle"

        readonly property string bgColor:"#183257"

        readonly property string scrollBarBgColor:"#063451"

        readonly property string itemHoverBgColor:"#162D4B"

        readonly property string itemNickNameColor:"#1381c6"
        readonly property string itemMsgColor:"#6a82a5"
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

    MouseArea{
        id:mouseAreaRoot
        anchors.fill: parent
        hoverEnabled: true

        ScrollView{
            anchors.fill: parent
            ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
            ScrollBar.vertical.policy: ScrollBar.AlwaysOff

            ListView {
                id: listViewNotifyList
                objectName: "listViewNotifyList"
                width: parent.width
                height: 300
                //keyNavigationWraps: true
                boundsBehavior: Flickable.StopAtBounds

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
                    height: 50

                    function doClick()
                    {
                        listViewNotifyList.currentIndex = index;
                        messageNotifyModel.currentSelectedUserId = userId;
                        messageNotify.sigDoClickItem(userId);
                    }


                    Rectangle{
                        id: contentRect
                        anchors.fill: parent
                        color: mouseAreaFriendItem.containsMouse? currentStyle.itemHoverBgColor:currentStyle.bgColor
                    }
//                    Rectangle{
//                        id: lineRect
//                        height: 1
//                        width: parent.width
//                        anchors.bottom: parent.bottom
//                        anchors.left: parent.left
//                       // anchors.leftMargin: 12
//                        color: "#042439"
//                    }


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
                        }

                        onEntered: {
                            //messageList.showToolTip(msg);
                        }

                        onExited: {
                            //messageList.showToolTip("");//隐藏显示
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
                                anchors.left: parent.left
                                anchors.leftMargin: 12
                                sourceSize.height: 40
                                sourceSize.width: 40
                                mipmap: true
                                source: headUrl
                                asynchronous: false
                                //asynchronous: true

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
                                //spacing: 0
                                spacing: Qt.platform.os == "linux"? 6:0
                                anchors.fill: parent

                                Item {
                                    id: item4
                                    Layout.alignment: Qt.AlignLeft | Qt.AlignBottom
                                    Layout.fillHeight: true
                                    anchors.left: parent.left
                                    anchors.right: parent.right
                                    anchors.rightMargin: 28


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
                                    anchors.left: parent.left
                                    anchors.right: parent.right
                                    anchors.rightMargin: 28

                                    RowLayout{
                                        anchors.fill: parent


                                        Label {
                                            id: labelMsg
                                            Layout.fillWidth: true
                                            Layout.fillHeight: true
                                            elide:Text.ElideRight
                                            verticalAlignment: Text.AlignTop
                                            text: lastMsg
                                            color:currentStyle.itemMsgColor
                                            font.pointSize: Qt.platform.os == "osx"? 12:12*0.75
                                            font.family: "Arial"
                                        }
                                    }


                                }
                            }
                        }

                        Item {
                            id: item3
                            Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
                            Layout.fillHeight: true

                            ColumnLayout {
                                id: columnLayoutRight
                                spacing: 0
                                anchors.fill: parent

                                Item {
                                    id: item7
                                    Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
                                    Layout.fillHeight: true
                                    Layout.fillWidth: true

                                    Rectangle {
                                        id: rectangle
                                        visible: true
                                        width: 16
                                        height: 16
                                        color: "#ff3b30"
                                        radius: 12
                                        border.width: 0
                                        anchors.right: parent.right
                                        anchors.rightMargin: 12
                                        anchors.bottom: parent.bottom
                                        anchors.bottomMargin: 17
                                        border.color: "#00000000"

                                        Label {
                                            id: label1
                                            visible: true
                                            text:perMsgCount.toString()
                                            color: "#ffffff"
                                            horizontalAlignment: Text.AlignHCenter
                                            verticalAlignment: Text.AlignVCenter
                                            anchors.fill: parent
                                            //font.pointSize:10
                                            font.family:"microsoft yahei"
                                            font.pointSize: Qt.platform.os == "osx"? 10:10*0.75
                                        }
                                    }

                                }
                            }


                        }
                    }
                }
                model: messageNotifyModel
                Component.onCompleted: {

                }
            }
        }
    }
}




