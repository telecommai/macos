
QT += core network gui widgets sql webenginewidgets xml multimedia multimediawidgets macextras quick quickwidgets quickcontrols2


CONFIG(debug,debug|release){
    mac{
        LIBS += -L$$PWD/../SharedLib/AlphabeticalSortSharedLib/lib/ -lAlphabeticalSortSharedLibD \
        -L$$PWD/../SharedLib/BaseUI/lib/ -lBaseUIShareLibD \
        -L$$PWD/../SharedLib/botan/lib/ -lbotan-2 \
        -L$$PWD/../SharedLib/ChatWidget/lib/ -lChatWidgetShareLibD \
        -L$$PWD/../SharedLib/ContactsProfileShareLib/lib/ -lContactsProfileShareLibD \
        -L$$PWD/../SharedLib/ContactsWidget/lib/ -lContactsWidgetShareLibD \
        -L$$PWD/../SharedLib/createAddWidgetShareLib/lib/ -lCreateAddWidgetShareLibD \
        -L$$PWD/../SharedLib/ewalletShareLib/lib/ -leWalletLibD \
        -L$$PWD/../SharedLib/HttpNetWorkShareLib/lib/ -lHttpNetWorkShareLibD \
        -L$$PWD/../SharedLib/IMDataBaseOperaInfo/lib/ -lIMDataBaseOperaInfoD \
        -L$$PWD/../SharedLib/IMDataManagerShareLib/lib/ -lIMDataManagerShareLibD \
        -L$$PWD/../SharedLib/IMDownLoadHeaderImg/lib/ -lIMDownLoadHeaderImgD \
        -L$$PWD/../SharedLib/IMRequestBuddyInfo/lib/ -lIMRequestBuddyInfoD \
        -L$$PWD/../SharedLib/IMSocketDataBaseShareLib/lib/ -lIMSocketDataBaseShareLibD \
        -L$$PWD/../SharedLib/IMSocketNetWorkShareLib/lib/ -lIMSocketNetWorkShareLibD \
        -L$$PWD/../SharedLib/libqrencode/lib/ -lqrencode \
        -L$$PWD/../SharedLib/LoginDatabaseOperaShareLib/lib/ -lLoginDatabaseOperaShareLibD \
        -L$$PWD/../SharedLib/openssl/lib/ -lssl \
        -L$$PWD/../SharedLib/openssl/lib/ -lcrypto \
        -L$$PWD/../SharedLib/OPDataManager/lib/ -lOPDataManagerD \
        -L$$PWD/../SharedLib/OPDateBaseShareLib/lib/ -lOPDatebaseShareLibD \
        -L$$PWD/../SharedLib/OPMainMangerShareLib/lib/ -lOPMainManagerShareLibD \
        -L$$PWD/../SharedLib/OPMainWidget/lib/ -lOPMainWidgetShareLibD \
        -L$$PWD/../SharedLib/OPObjectManager/lib/ -lOPObjectManagerD \
        -L$$PWD/../SharedLib/OPRecoveryWalletShareLib/lib/ -lOPRecoveryWalletShareLibD \
        -L$$PWD/../SharedLib/OPRequestShareLib/lib/ -lOPRequestShareLibD \
        -L$$PWD/../SharedLib/OPWindowsManagerShareLib/lib/ -lOPWindowsManagerShareLibD \
        -L$$PWD/../SharedLib/QRenCodeShareLib/lib/ -lQRenCodeShareLibD \
        -L$$PWD/../SharedLib/ReadAppConfig/lib/ -lReadAppConfigD \
        -L$$PWD/../SharedLib/ScanQRLoginShareLib/lib/ -lScanQRLoginShareLibD \
        -L$$PWD/../SharedLib/SocketNetWorkShareLib/lib/ -lSocketNetWorkShareLibD \
        -L$$PWD/../SharedLib/SqlLiteShareLib/lib/ -lSqlLiteShareLibD \
        -L$$PWD/../SharedLib/UpdateShareLib/lib/ -lUpdateShareLibD \
        -L$$PWD/../SharedLib/VideoPlayShareLib/lib/ -lVideoPlayShareLibD \
        -L$$PWD/../SharedLib/WebObjectShareLib/lib/ -lWebObjectShareLibD \
        -L$$PWD/../SharedLib/ScreenCutShareLib/lib/ -lScreenCutShareLibD \
        -L$$PWD/../SharedLib/MacUpdate/lib/ -lMacUpdateD \
        -L$$PWD/../SharedLib/QxtGlobalShortCut/lib/ -lQxtGlobalShortCutD \
        -L$$PWD/../SharedLib/breakpad/lib/ -lgooglebreakpad \
        -L$$PWD/../SharedLib/MacNotification/lib/ -lMacNotificationD
    }
}else
{
        LIBS += -L$$PWD/../SharedLib/AlphabeticalSortSharedLib/lib/ -lAlphabeticalSortSharedLib \
        -L$$PWD/../SharedLib/BaseUI/lib/ -lBaseUIShareLib \
        -L$$PWD/../SharedLib/botan/lib/ -lbotan-2 \
        -L$$PWD/../SharedLib/ChatWidget/lib/ -lChatWidgetShareLib \
        -L$$PWD/../SharedLib/ContactsProfileShareLib/lib/ -lContactsProfileShareLib \
        -L$$PWD/../SharedLib/ContactsWidget/lib/ -lContactsWidgetShareLib \
        -L$$PWD/../SharedLib/createAddWidgetShareLib/lib/ -lCreateAddWidgetShareLib \
        -L$$PWD/../SharedLib/ewalletShareLib/lib/ -leWalletLib \
        -L$$PWD/../SharedLib/HttpNetWorkShareLib/lib/ -lHttpNetWorkShareLib \
        -L$$PWD/../SharedLib/IMDataBaseOperaInfo/lib/ -lIMDataBaseOperaInfo \
        -L$$PWD/../SharedLib/IMDataManagerShareLib/lib/ -lIMDataManagerShareLib \
        -L$$PWD/../SharedLib/IMDownLoadHeaderImg/lib/ -lIMDownLoadHeaderImg \
        -L$$PWD/../SharedLib/IMRequestBuddyInfo/lib/ -lIMRequestBuddyInfo \
        -L$$PWD/../SharedLib/IMSocketDataBaseShareLib/lib/ -lIMSocketDataBaseShareLib \
        -L$$PWD/../SharedLib/IMSocketNetWorkShareLib/lib/ -lIMSocketNetWorkShareLib \
        -L$$PWD/../SharedLib/libqrencode/lib/ -lqrencode \
        -L$$PWD/../SharedLib/LoginDatabaseOperaShareLib/lib/ -lLoginDatabaseOperaShareLib \
        -L$$PWD/../SharedLib/openssl/lib/ -lssl \
        -L$$PWD/../SharedLib/openssl/lib/ -lcrypto \
        -L$$PWD/../SharedLib/OPDataManager/lib/ -lOPDataManager \
        -L$$PWD/../SharedLib/OPDateBaseShareLib/lib/ -lOPDatebaseShareLib \
        -L$$PWD/../SharedLib/OPMainMangerShareLib/lib/ -lOPMainManagerShareLib \
        -L$$PWD/../SharedLib/OPMainWidget/lib/ -lOPMainWidgetShareLib \
        -L$$PWD/../SharedLib/OPObjectManager/lib/ -lOPObjectManager \
        -L$$PWD/../SharedLib/OPRecoveryWalletShareLib/lib/ -lOPRecoveryWalletShareLib \
        -L$$PWD/../SharedLib/OPRequestShareLib/lib/ -lOPRequestShareLib \
        -L$$PWD/../SharedLib/OPWindowsManagerShareLib/lib/ -lOPWindowsManagerShareLib \
        -L$$PWD/../SharedLib/QRenCodeShareLib/lib/ -lQRenCodeShareLib \
        -L$$PWD/../SharedLib/ReadAppConfig/lib/ -lReadAppConfig \
        -L$$PWD/../SharedLib/ScanQRLoginShareLib/lib/ -lScanQRLoginShareLib \
        -L$$PWD/../SharedLib/SocketNetWorkShareLib/lib/ -lSocketNetWorkShareLib \
        -L$$PWD/../SharedLib/SqlLiteShareLib/lib/ -lSqlLiteShareLib \
        -L$$PWD/../SharedLib/UpdateShareLib/lib/ -lUpdateShareLib \
        -L$$PWD/../SharedLib/VideoPlayShareLib/lib/ -lVideoPlayShareLib \
        -L$$PWD/../SharedLib/WebObjectShareLib/lib/ -lWebObjectShareLib \
        -L$$PWD/../SharedLib/ScreenCutShareLib/lib/ -lScreenCutShareLib \
        -L$$PWD/../SharedLib/MacUpdate/lib/ -lMacUpdate \
        -L$$PWD/../SharedLib/QxtGlobalShortCut/lib/ -lQxtGlobalShortCut \
        -L$$PWD/../SharedLib/breakpad/lib/ -lgooglebreakpad \
        -L$$PWD/../SharedLib/MacNotification/lib/ -lMacNotification \
        -L$$PWD/../SharedLib/SettingsManagerShareLib/lib/ -lSettingsManagerShareLib
}

INCLUDEPATH += ../SharedLib/openssl/include \
    ../SharedLib/common \
    ../SharedLib/libqrencode/include \
    ../SharedLib/AlphabeticalSortSharedLib/include \
    ../SharedLib/SqlLiteShareLib/include \
    ../SharedLib/QRenCodeShareLib/include \
    ../SharedLib/VideoPlayShareLib/include \
    ../SharedLib/SocketNetWorkShareLib/include \
    ../SharedLib/ReadAppConfig/include \
    ../SharedLib/OPDataManager/include \
    ../SharedLib/baseUI/include \
    ../SharedLib/HttpNetWorkShareLib/include \
    ../SharedLib/IMDataManagerShareLib/include \
    ../SharedLib/IMDataBaseOperaInfo/include \
    ../SharedLib/IMSocketDataBaseShareLib/include \
    ../SharedLib/OPDatebaseShareLib/include \
    ../SharedLib/LoginDatabaseOperaShareLib/include \
    ../SharedLib/OPRecoveryWalletShareLib/include \
    ../SharedLib/OPRequestShareLib/include \
    ../SharedLib/IMDownLoadHeaderImg/include \
    ../SharedLib/IMRequestBuddyInfo/include \
    ../SharedLib/IMSocketNetWorkShareLib/include \
    ../SharedLib/ContactsProfileShareLib/include \
    ../SharedLib/ContactsWidget/include \
    ../SharedLib/ChatWidget/include \
    ../SharedLib/UpdateShareLib/include \
    ../SharedLib/ewalletShareLib/include \
    ../SharedLib/ScanQRLoginShareLib/include \
    ../SharedLib/CreateAddWidgetShareLib/include \
    ../SharedLib/OPMainWidget/include \
    ../SharedLib/OPMainMangerShareLib/include \
    ../SharedLib/OPWindowsManagerShareLib/include \
    ../SharedLib/OPObjectManager/include \
    ../SharedLib/botan/include \
    ../SharedLib/OPObjectManager/include \
    ../SharedLib/WebObjectShareLib/include \
    ../SharedLib/ScreenCutShareLib/include \
    ../SharedLib/MacUpdate/include \
    ../SharedLib/breakpad/include \
    ../SharedLib/SettingsManagerShareLib/include
include(Telecomm.pri)
include(shared.pri)

QMAKE_LFLAGS += -framework Carbon -framework CoreFoundation -framework Foundation -framework Cocoa

HEADERS += \
    myapplication.h

SOURCES += \
    myapplication.cpp
