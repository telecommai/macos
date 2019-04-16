#ifndef WEBOBJECTSHARELIB_H
#define WEBOBJECTSHARELIB_H

#include <QObject>

class WebObjectShareLib : public QObject
{
    Q_OBJECT
public:
    WebObjectShareLib(QObject *parent = 0);

public slots:
    void slotRecoveryResult(QString strReuslt);
    void slotZoomImg(QString strReuslt);
    void slotVideoPlay(QString strReuslt);
    void slotOpenFile(QString strReuslt);
    void slotOpenDocument(QString strReuslt);
    void slotCancleLoadorDownLoad(QString msgId);
    void slotSendFileByID(QString strReuslt);
    void slotGetFile(QString strReuslt);
    void slotSaveFile(QString strReuslt);
    void slotDrag(QStringList strReuslt);
    void slotOpenUrl(QString strReuslt);
    void slotOpenSecret(QString strReuslt);
    void slotMsgID(QString strReuslt);
    void slotOpenDir(QString strReuslt);
    void slotTransactionData(QString strReuslt);
    void slotSendFile(QString strReuslt);
    void slotOpenGroupFile(QString strReuslt);
    void slotClickUserHeader(QString);
    void slotLocation(QString strReuslt);
    void slotTransmit(QString strReuslt);

	void slotPopUpMenu(bool isShowCopy, bool isShowTransmit, QString msgId);
	void slotLogImg(QString);
	void slotShowMore();
	void slotOnChatIFrameLoad(QString);
signals:
    void sigRecoveryResult(QString strReuslt);
    void sigTransactionData(QString strReuslt);

    void sigZoomImg(QString strReuslt);
    void sigVideoPlay(QString strReuslt);
    void sigOpenFile(QString strReuslt);
    void sigOpenDocument(QString strReuslt);
    void sigCancleLoadorDownLoad(QString MsgId);
    void sigSendFileByID(QString strReuslt);
    void sigGetFile(QString strReuslt);
    void sigSaveFile(QString strReuslt);
    void sigDrag(QStringList strReuslt);
    void sigOpenUrl(QString strReuslt);
    void sigOpenSecret(QString strReuslt);
    void sigMsgID(QString strReuslt);
    void sigOpenDir(QString strReuslt);
    void sigSendFile(QString strReuslt);
    void sigOpenGroupFile(QString strReuslt);
    void sigClickUserHeader(QString strReuslt);

    void sigLocation(QString strReuslt);

    void sigTransmit(QString strReuslt);

	void sigPopUpMenu(bool isShowCopy, bool isShowTransmit, QString msgId);
	void sigLogImg(QString);
    void sigShowMore();
	void sigOnChatIFrameLoad(QString chatId);
};

#endif // WEBOBJECTSHARELIB_H
