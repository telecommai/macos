import QtQuick 2.9
import QtQuick.Controls 2.2

import QtQuick.Layouts 1.1
import QtGraphicalEffects 1.0
import QtQuick.Controls.Styles 1.4


Item{
    id:rootItem
    objectName:"rootItem"
    //focus: true

    //换肤相关{{
    property var currentStyle: dayStyle
    property var clearColor: currentStyle.bgColor

    QtObject{
        id:dayStyle
        objectName:"dayStyle"

        readonly property string bgColor:"#fafaf9"

        readonly property string scrollBarBgColor:"#dcd9d4"

        readonly property string itemHeadBgColor:"#fafaf9"
        readonly property string itemSelectBgColor:"#eceae8"

        readonly property string itemNickNameColor:"#000000"
    }

    QtObject{
        id:nightStyle
        objectName:"nightStyle"

        readonly property string bgColor:"#0a182d"

        readonly property string scrollBarBgColor:"#063451"

        readonly property string itemHeadBgColor:"#0a182d"
        readonly property string itemSelectBgColor:"#183257"

        readonly property string itemNickNameColor:"#108ee9"

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
            if(listViewContactList.currentIndex === 1)
            {
                return;
            }

            listViewContactList.decrementCurrentIndex();

            if(listViewContactList.currentItem.getMsgType() === "head")
            {
                listViewContactList.decrementCurrentIndex();
            }

            listViewContactList.currentItem.doClick();
        }else
        {
            listViewContactList.incrementCurrentIndex();

            if(listViewContactList.currentItem.getMsgType() === "head")
            {
                listViewContactList.incrementCurrentIndex();
            }

            listViewContactList.currentItem.doClick();
        }
    }

    function doClickIndex(index)
    {
        listViewContactList.positionViewAtIndex(index ,ListView.Visible);
        listViewContactList.currentIndex = index;

        listViewContactList.currentItem.doClick();
    }
    function emitClick()
    {

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
                id: listViewContactList
                objectName: "listViewContactList"
                width: parent.width
                boundsBehavior: Flickable.DragAndOvershootBounds

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
                        //policy: ScrollBar.AsNeeded
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
                    height: msgType=="head"?25:58

                    function getMsgType()
                    {
                        return msgType;
                    }

                    function doClick()
                    {
                        listViewContactList.currentIndex = index;
                        contactListModel.currentSelectedUserId = userId;
                        contactList.doClickItem(userId);
                    }
                    function doDoubleClick()
                    {
                        listViewContactList.currentIndex = index;
                        contactListModel.currentSelectedUserId = userId;
                        contactList.doDoubleClickItem(userId);
                    }
                    function doRightClick()
                    {
                        listViewContactList.currentIndex = index;
                        contactListModel.currentSelectedUserId = userId;
                        contactList.doRightClickItem(userId);
                    }





                    Rectangle{
                        id: backgroundColor
                        anchors.fill: parent
                        color: msgType=="head" ? currentStyle.itemHeadBgColor : (parent.ListView.isCurrentItem? currentStyle.itemSelectBgColor:currentStyle.bgColor)

                    }

                    MouseArea{
                        id:mouseAreaFriendItem
                        anchors.fill: parent
                        hoverEnabled: true
                        acceptedButtons: Qt.LeftButton | Qt.RightButton//激活右键

                        onPressed: {
                            if(mouse.button === Qt.LeftButton)
                            {
                                if(msgType == "head")
                                {}
                                else
                                    parent.doClick();
                            }
                        }
                        onEntered: {
                        }
                        onExited: {
                        }

                        onClicked:
                        {
                            if(mouse.button === Qt.RightButton)
                            {
                                if(msgType == "head")
                                {}
                                else
                                    parent.doRightClick();
                            }

                        }
                        onDoubleClicked:
                        {
                            if(msgType == "head")
                            {}
                            else
                                parent.doDoubleClick();
                        }

                    }


                    RowLayout {
                        id: rowLayout
                        anchors.fill: parent

                        Item {
                            id: item1
                            width: 55
                            Layout.fillHeight: true
                            visible: msgType == "head"? false:true

                            Image {
                                id: imageHead
                                x: 8
                                width: 40
                                height: 40
                                anchors.verticalCenter: parent.verticalCenter
                                sourceSize.height: 40
                                sourceSize.width: 40
                                mipmap: true
                                source: msgType == "head"? "" : headUrl+"?"+(new Date().getTime())
                                asynchronous: true

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
                                spacing: 0
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
                                        text:msgType=="head"?" "+titleCharacter:nickName
                                        anchors.bottom: parent.bottom
                                        anchors.bottomMargin: msgType == "head"? 0:20
                                        font.family:"microsoft yahei"
                                        //font.pointSize: Qt.platform.os == "osx"? 14:14*0.75
                                        //font.family: "Arial"
                                        //font.pixelSize: msgType == "head"? 12:16
                                        font.pointSize: msgType == "head"? (Qt.platform.os == "osx"? 12:12*0.75): (Qt.platform.os == "osx"? 16:16*0.75)
                                    }
                                }
                            }
                        }

                       }
                }

                model: contactListModel
                Component.onCompleted: {
                }
            }
        }
    }
}




