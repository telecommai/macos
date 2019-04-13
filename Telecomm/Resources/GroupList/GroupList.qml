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

        readonly property string itemSelectBgColor:"#eceae8"

        readonly property string itemNickNameColor:"#000000"
    }

    QtObject{
        id:nightStyle
        objectName:"nightStyle"

        readonly property string bgColor:"#0a182d"

        readonly property string scrollBarBgColor:"#063451"

        readonly property string itemSelectBgColor:"#183257"

        readonly property string itemNickNameColor:"#1381c6"

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
            listViewGroupList.decrementCurrentIndex();

            listViewGroupList.currentItem.doClick();
        }else
        {
            listViewGroupList.incrementCurrentIndex();

            listViewGroupList.currentItem.doClick();
        }
    }

    function doClickIndex(index)
    {
        listViewGroupList.positionViewAtIndex(index ,ListView.Visible);
        listViewGroupList.currentIndex = index;

        listViewGroupList.currentItem.doClick();
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
                id: listViewGroupList
                objectName: "listViewGroupList"
                width: parent.width
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
                    height: 58

                    function doClick()
                    {
                        listViewGroupList.currentIndex = index;
                        groupListModel.currentSelectedUserId = userId;
                        groupList.doClickItem(userId);
                    }
					function doDoubleClick()
                    {
                        listViewGroupList.currentIndex = index;
                        groupListModel.currentSelectedUserId = userId;
                        groupList.doDoubleClickItem(userId);
                    }
					function doRightClick()
                    {
                        listViewGroupList.currentIndex = index;
                        groupListModel.currentSelectedUserId = userId;
                        groupList.doRightClickItem(userId);
                    }



                    Rectangle{
                        id: backgroundColor
                        anchors.fill: parent
                        //color: parent.ListView.isCurrentItem? "#183257":(mouseAreaFriendItem.containsMouse? "#092442":"#0a182d")
                        color: parent.ListView.isCurrentItem? currentStyle.itemSelectBgColor:currentStyle.bgColor

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
                        onEntered: {
                             //console.log("GroupList.qml  onEntered>>>>>>>>>>"+index);
                        }
                        onExited: {
                            //console.log("GroupList.qml  onExited>>>>>>>>>>"+index);
                        }

                        onClicked:
                        {
                            if(mouse.button === Qt.RightButton)
                            {
                                parent.doRightClick();
                            }
						}
                        onDoubleClicked:
                        {
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

                            Image {
                                id: imageHead
                                x: 8
                                width: 40
                                height: 40
                                anchors.verticalCenter: parent.verticalCenter
                                sourceSize.height: 40
                                sourceSize.width: 40
                                mipmap: true
                                source: headUrl+"?"+(new Date().getTime())
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
                                        text:nickName
                                        anchors.bottom: parent.bottom
                                        anchors.bottomMargin: 20
                                        font.family:"microsoft yahei"
                                        font.pointSize: Qt.platform.os == "osx"? 14:14*0.75
                                    }
                                }

                             }
                        }
                    }
                }



                model: groupListModel

                Component.onCompleted: {

                }
            }
        }
    }
}




