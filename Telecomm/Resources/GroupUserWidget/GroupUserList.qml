import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 2.3
import QtGraphicalEffects 1.0
import QtQuick.Controls.Styles 1.4

MouseArea{
    id:mouseAreaRoot
    focus: true
    hoverEnabled: true
    //anchors.fill: parent


    //换肤相关{{
    property var currentStyle: dayStyle
    property var clearColor: currentStyle.bgColor

    QtObject{
        id:dayStyle
        objectName:"dayStyle"

        readonly property string bgColor:"#fafaf9"

        readonly property string scrollBarBgColor:"#dcd9d4"

        readonly property string itemSelectBgColor:"#eceae8"
        readonly property string itemHoverBgColor:"#ecebea"

        readonly property string itemNickNameColor:"#000000"
    }

    QtObject{
        id:nightStyle
        objectName:"nightStyle"

        readonly property string bgColor:"#0a182d"

        readonly property string scrollBarBgColor:"#063451"

        readonly property string itemSelectBgColor:"#183257"
        readonly property string itemHoverBgColor:"#092442"

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

    Keys.onUpPressed: listViewGroupUser.decrementCurrentIndex()
    Keys.onDownPressed: listViewGroupUser.incrementCurrentIndex()

    ScrollView {
        anchors.fill:parent
        ScrollBar.horizontal.policy: ScrollBar.AlwaysOff
        ScrollBar.vertical.policy: ScrollBar.AlwaysOff
        ListView {
            id:listViewGroupUser
            objectName: "listViewGroupUser"
            anchors.fill: parent
            model: groupUserListModel
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
            delegate: ItemDelegate {
                height: 30
                width: parent.width

                Rectangle{
                    anchors.fill: parent
                    color: parent.ListView.isCurrentItem? currentStyle.itemSelectBgColor:(mouseAreaUserItem.containsMouse? currentStyle.itemHoverBgColor:currentStyle.bgColor)
                }

                MouseArea{
                    id:mouseAreaUserItem
                    anchors.fill: parent
                    hoverEnabled: true
                    acceptedButtons: Qt.LeftButton|Qt.RightButton;


                    onPressed: {
                        if(mouse.button === Qt.LeftButton)
                        {
                            //左键单击
                            listViewGroupUser.currentIndex = index;
                        }

                    }

                    onClicked:  {
                        if(mouse.button === Qt.RightButton)
                        {
                            //右键单击
                            listViewGroupUser.currentIndex = index;
                            groupUserList.sigGroupListContextMenuRequested(index);

                            listViewGroupUser.currentIndex = -1;
                            listViewGroupUser.currentIndex = index;
                        }

                    }

                    onDoubleClicked: {
                        //双击
                        if(mouse.button === Qt.LeftButton)
                        {
                            groupUserList.sigItemDoubleClicked(index);
                        }

                    }


                }

                RowLayout {
                    id: rowLayout
                    anchors.fill: parent

                    Item {
                        id: item1
                        width: 25
                        Layout.fillHeight: true

                        Image {
                            id: imageHead
                            width: 20
                            height: 20
                            anchors.left: parent.left
                            anchors.leftMargin: 5
                            anchors.verticalCenter: parent.verticalCenter
                            sourceSize.height: 20
                            sourceSize.width: 20
                            asynchronous: true
                            mipmap:true
                            //source: "file:///C:/OpenPlanet/resource/header/192210.png"
                            source:headUrl
                            layer.enabled: true
                            layer.effect: OpacityMask {
                                maskSource: Item {
                                    width: imageHead.width
                                    height: imageHead.height
                                    Rectangle {
                                        anchors.centerIn: parent
                                        width: imageHead.width
                                        height: imageHead.height
                                        radius: 10
                                    }
                                }
                            }
                        }
                    }

                    Item {
                        id: item2
                        Layout.fillWidth: true
                        Layout.fillHeight: true

                        Label {
                            id: labelNickName
                            color: currentStyle.itemNickNameColor
							anchors.fill: parent
                            elide:Text.ElideRight
                            //text: qsTr("用户名用户名用户名用户名用户名")
                            text:nickName
                            font.family: "microsoft yahei"
                            //font.pixelSize: 14
                            font.pointSize: Qt.platform.os == "osx"? 14:14*0.75
                            //font.capitalization: Font.AllUppercase
                            anchors.verticalCenter: parent.verticalCenter
                            verticalAlignment: Text.AlignVCenter
                        }
                    }

                    Item {
                        id: item3
                        width: 35
						visible:adminUrl==""? false:true
                        Layout.alignment: Qt.AlignRight | Qt.AlignVCenter
                        Layout.fillHeight: true

                        Image {
                            id: imageAdmin
							width: 18
                            height: 18
                            anchors.verticalCenter: parent.verticalCenter
                            sourceSize.height: 18
                            sourceSize.width: 18
                            //source: "file:///D:/workspace/OpenPlanetOrigin/OpenPlanet/Resources/groupchat/manager.png"
                            source:adminUrl
                        }
                    }
                }

            }
        }
    }


}




