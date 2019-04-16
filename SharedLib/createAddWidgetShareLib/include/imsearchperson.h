#ifndef IMSEARCHPERSON_H
#define IMSEARCHPERSON_H

#include <QWidget>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include "cfrientstylewidget.h"
#include "imbuddy.h"
#include "common.h"
#include "stdafx.h"
#include "httpnetworksharelib.h"
#include "qloadingwidget.h"

namespace Ui {
	class IMSearchPerson;
}

class IMSearchPerson : public QWidget
{
	Q_OBJECT

public:
	IMSearchPerson(QWidget *parent = 0);
	~IMSearchPerson();
	void setItemFocus();

	void ClearList();
private:
	void OnSearchPerson(QString strData);
	void OnInsertTabList(QString strBuddyID, QWidget *widget);
	void ParseSearchPersonResult(QString strResult);
	QString GetExeDir();
private slots:
	void doClickSearch();
	void doHttpSearchPersonResultInfo(bool bState, QString strResult);
	void doAddPerson(QString strBuddyID);
	void doHttpAddPersonResultInfo(bool bResult, QString strResult);
	void slotDoAddPerson(QString, QString);
	void slotTempFriend(bool bResult, QString result);

	void slotApplySuccessed();
	void slotApplyFailed();
	void slotOpenProfile(QString);
protected:
	void keyPressEvent(QKeyEvent * event);
private:
	Ui::IMSearchPerson *ui;
	QString mStrSaveSearchContent;  
	QString m_strBuddyId;
	BuddyInfo m_stTmpInfo;
	QLoadingWidget * m_pLoadWidget;
};

#endif // IMSEARCHPERSON_H
