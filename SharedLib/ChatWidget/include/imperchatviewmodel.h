#ifndef IMPERCHATVIEWMODEL_H
#define IMPERCHATVIEWMODEL_H

#include <QObject>

class IMPerChatView;

class IMPerChatViewModel : public QObject
{
    Q_OBJECT
private:
	IMPerChatView* m_view;

	QString m_strNickName;
	QString m_strBuddyId;
public:
    explicit IMPerChatViewModel(QObject *parent = nullptr);
	void init();

	void runJs(const QString &scriptSource);

	QString getImagePathByDescription(QString strImgDescription);  
	void setNickNameAndBuddyId(QString strText, QString strBuddyID);
	QString getNickName();
	QString getBuddyId();

	void showByChatId(bool isNew);
	void insertImageToTextEditSend(QString strPath);

	void startInputting();
	void endInputting();

	QString getDraft();
	void setTextEditSendFocus();
signals:
	void sigSetNickNameAndBuddyId(QString strText, QString strBuddyID);
public slots:
};

#endif // IMPERCHATVIEWMODEL_H