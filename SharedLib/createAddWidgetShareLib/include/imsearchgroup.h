#ifndef IMSEARCHGROUP_H
#define IMSEARCHGROUP_H

#include <QWidget>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include "imbuddy.h"
#include "stdafx.h"
#include "httpnetworksharelib.h"
#include "qloadingwidget.h"

namespace Ui {
	class IMSearchGroup;
}

class IMSearchGroup : public QWidget
{
	Q_OBJECT

public:
	IMSearchGroup(QWidget *parent = 0);
	~IMSearchGroup();
	void setItemFocus();

	void OnSearchGroup(QString strData);
private:
	void ParseSearchGroupResult(QString strResult);
private slots:
	void doClickSearchGroup();
	void doHttpSearchGroupResultInfo(bool bState, QString strResult);
	void doAddGroup(QString strGroupID,int iType);
	void doHttpAddGroupResultInfo(bool bResult, QString strResult);
	void slotApplySuccessed();
	void slotApplyFailed();
	void doHttpUserListResult(bool, QString);
	void slotOpenGrpProfile(QString);
	void slotRequestGroupInfoFinished(bool bResult, QString result);
protected:
	void keyPressEvent(QKeyEvent * event);
private:
	Ui::IMSearchGroup *ui;
	QString mStrSaveSearchContent;
	QLoadingWidget * m_pLoadWidget;
};

#endif // IMSEARCHGROUP_H
