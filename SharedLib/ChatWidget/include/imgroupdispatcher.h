#ifndef IMGROUPDISPATCHER_H
#define IMGROUPDISPATCHER_H

#include <QObject>
#include <QVariant>

class QKeyEvent;

class IMGroupDispatcher : public QObject
{
    Q_OBJECT
public:
    explicit IMGroupDispatcher(QObject *parent = nullptr);

	void init();
signals:
	void sigGroupClose();
	void sigGroupWidgetBtnCloseWClicked();
	void sigSetGroupNameAndGroupId(QString strGroupName, QString strGroupID);

	void sigShowGroupBuddyPerChat(int type, QVariant strBuddyID);
	void sigOpenGroupLog(QString);
	void sigGroupMinSize();
	void sigShowNormalWindow();
	void sigKeyUpDown(QKeyEvent *);
	void sigUpdateSelfMessage(bool, QVariant, QString, bool, QMap<QString, QVariant>);
	void sigMakeGroupHeader(QString groupID);
	void sigTransmit(QString);
	void sigOpenPic(QString, QList<QString>*, QWidget *);
	void sigHostingCharge(int, QString, QString, QString);


public slots:
};

#endif // IMGROUPDISPATCHER_H