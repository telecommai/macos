#ifndef UPDATESHARELIB_H
#define UPDATESHARELIB_H

#include <QDebug>
#include <QJsonDocument>
#ifdef Q_OS_WIN
#include <Windows.h>
#include <shlwapi.h>
#include "zlib\zip_util.h"
#else
#include "updatewidget.h"
#endif
#include <QApplication>
#include "messagebox.h"
#include "httpnetworksharelib.h"
#include "stdafx.h"
#include "logindatabaseoperasharelib.h"
#include "oprequestsharelib.h"

class UpdateShareLib : public QObject
{
	Q_OBJECT
public:
	UpdateShareLib();
	~UpdateShareLib();

	void onUpdate(); 

	private slots:
	void slotUpdateApp(bool, QString);
	void slotDownloadUpdate(bool);
	void slotUpdateMain();
    void slotQuit();
signals:
	void sigAlreadyLatest();

private:
    void OnDealMacUpdate(QVariantMap result);
	int VersionCompare(std::string v1, std::string v2);
	QVariantMap appMap;
	QVariantMap updateMap;
#ifndef Q_OS_WIN
    updateWidget *m_pWidget;
#endif
};

#endif // UPDATESHARELIB_H
