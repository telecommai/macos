#ifndef MESSAGELOG_H
#define MESSAGELOG_H

#include <qdesktopservices.h>
#include <QListWidgetItem>
#include <QWidget>
#include <QCalendarWidget>
#include <QEvent>
#include <QKeyEvent>
#include "messagebox.h"
#include "qmath.h"
#include "shadow.h"
#include "childWidget/expresswidget.h"
#include "imvideoplayer.h"
#include "zooming/picwidget.h"
#include "qjsonobject.h"
#include "imbuddy.h"
#include <QWebChannel>
#include <webobjectsharelib.h>
#include "opcommon.h"
#include "redPacketWidget/openPack.h"
#include "redPacketWidget/RedPackDetail.h"
#include "redPacketWidget/giveredpackwidget.h"
#include "secretWidget/enterpasswordwidget.h"
namespace Ui {
	class MessageLog;
}

class MessageLog : public QWidget
{
	Q_OBJECT

public:
	MessageLog(QWidget *parent = 0);
	~MessageLog();

	void loadPerLogByID(QString id);
	void loadGroupLogByID(QString id);

    void setLinuxCenter();

	QString GetFileMd5(QString fileNamePath);
	const QString GetSmallImg(QString strPath);
public slots:
	void show();

	void slotZoomImg(QString strfileName);
	void slotVideoPlay(QString mediaPath);
	void slotOpenFile(QString fileName);
	void slotOpenDir(QString fileDir);
	void slotPicClose();
	void slotGetPacketResult(QString);
	void slotCloseDetailWidget();
	void slotPacketStatus(bool valid);
	void slotClosePacketWidget();
	void slotOpenPacket(QString msgID);
	void slotCloseEnterWidget();
	void maxOrRstrWindow(); 
	void slotGetFile(QString);
	void slotDownLoadFileProgress(qint64, qint64);
	void slotCoverFile();
	void ChangeFileState(QString, int);
	void slotRequestHttpFileResult(bool);
	void slotDownFailed();
	bool slotSaveFile(QString);
	void slotCancleLoadorDownLoad(QString);

protected:
	void changeEvent(QEvent * event);
	void moveEvent(QMoveEvent *event);
	void resizeEvent(QResizeEvent* event);
	void mousePressEvent(QMouseEvent *event);       
	void mouseReleaseEvent(QMouseEvent *event);     
	void mouseMoveEvent(QMouseEvent *event);        

	bool eventFilter(QObject *obj, QEvent *e);
	void closeEvent(QCloseEvent * event);
private:
	Ui::MessageLog *ui;

	Shadow *shadow;
	QPoint mouse;

	int pageAmount;
	int currentPage;

	ExpressWidget *mExpressWidget; 
	QCalendarWidget *dateSelector;
	QString keyString;

	PicWidget* m_pPicWidget;
	IMVideoPlayer *videoWidget;

	QString recognizeUrl(const QString& strMessage);
	QString formatMessageFromImgDescriptionWithHtmlEncode(const QString& strMessage);
	
	void showCurrentPageLog(bool isPer);

	QString decodeURI(QString str);

	private slots:
	void doClickContacts(bool);
	void doClickGroup(bool);

	void doClickPerItem(QListWidgetItem *);
	void doClickGroupItem(QListWidgetItem *);

	void toFirstPage();
	void toEndPage();
	void toLastPage();
	void toNextPage();

	void doShowDateSelector();
	void toDateLogPage(QDate);

	void doSearch();
	void doClearSearch();

	void slotOpenLink(QString link);
	void slotLocation(QString);

	void slotChangePic(int iType);

	void slotCloseVideoWidget();
	void slotOpenSecret(QString);
	void slotMsgID(QString);

	int CalWavLength(QString strPath);

	void slotUpdateNotice(bool);
signals:
	void sigInitFinished();
	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigTransferRecord(RecordInfo);
	void sigClose();
	void sigCancle(QString);
public slots:
	void slotInitFinished();
private:
	QList<QString> m_listPic;
	QList<QString>::iterator m_PicIter;

	QWebChannel *m_pWebChannel;
	WebObjectShareLib *m_pWebObject;
	RedPackDetail *detailWidget;
	OpenPacketWidget *openPacketWidget;
	EnterPasswordWidget *enterWidget;
};

#endif // MESSAGELOG_H
