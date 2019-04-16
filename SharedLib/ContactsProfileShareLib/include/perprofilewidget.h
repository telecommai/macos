#ifndef PERPROFILEWIDGET_H
#define PERPROFILEWIDGET_H

#include <QWidget>
#include <qpainter.h>
#include <qbitmap.h>
#include <QPushButton>
#include <QFile>
#include <qclipboard.h>
#include "opcommon.h"
#include "imbuddy.h"
#include "stdafx.h"
#include "imtranstype.h"
#include "zooming/picwidget.h"
#include "alphabeticalsortsharedlib.h"
#include "httpnetworksharelib.h"

namespace Ui {
	class perProfileWidget;
}

 
class perProfileWidget : public QWidget
{
	Q_OBJECT

public:
	perProfileWidget(QWidget *parent = 0);
	~perProfileWidget();

	void setBuddy(BuddyInfo buddy, AddressInfo info = AddressInfo());
	QString getBuddyId();
	void setAddress(AddressInfo info);


public slots:
	void slotPerChat();
	void slotPicClose();

private slots:
   void slotCopyAddress();
   void slotEditNote();

   void slotAddGroupUser();
   void slotApplySuccessed();
   void slotApplyFailed();

   void slotShare();
   void slotStrangerChat();
   void slotOpenPerChat();

protected:
	bool eventFilter(QObject *, QEvent *);

	void closeEvent(QCloseEvent * event);

signals:
	void sigPerChat(int, QVariant);
	void sigUpdateBuddyInfo(BuddyInfo);

	void sigCloseProfile();

	void sigOpenPic(QString, QList<QString>*, QWidget*);

	void sigShareID(int type, QString  buddyID);

private:
	void setStar(QString star);

private:
	Ui::perProfileWidget *ui;

	QPoint mouse; 
	QPushButton *closeBtn;

	QString headerPath;
	QString buddyID;
	PicWidget* m_pPicWidget;
	BuddyInfo m_buddyInfo;
};

#endif // PERPROFILEWIDGET_H
