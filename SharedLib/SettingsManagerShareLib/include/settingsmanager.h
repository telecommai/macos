#ifndef SETTINGSMANAGER_H
#define SETTINGSMANAGER_H

#include <QObject>


class SettingsManager : public QObject
{
	Q_OBJECT

public:
	SettingsManager(QObject *parent = NULL);
	~SettingsManager();

	void setScreenShot(QString strValue);
	void setQuickOpen(QString strValue);
	void setSendMeg(int bValue);
	void setCheckKey(int bValue);
	QString getScreenShot();
	QString getQuickOpen();
	int getSendMeg();
	int getCheckKey();
	
	QString getUserPath();
	void setUserPath(QString strParh);
	void ChangeNewPath();						
	bool copyUserDir(QString oldPath, QString newPath, bool bCover);	
	bool DelDir(QString strPath);
	QString getUserFileSize(QString strId);		
	void DelUserFile(QString strId);			
	void DelTempUserFile();						
	double getDirSize(QString strPath);
	void setLanguage(QString);					
	QString getLanguage();
signals:
	void sigGlobalScreenShot();
	void sigQuickOpen();
	void sigSetScreenShot(QString);
	void sigSetQuickOpen(QString);
	void sigThemeSwitch(QString);
	void sigRestart();
private:
	QString m_strScreenShot;	
	QString m_strQuickOpen;		
	int m_iSend;				
	int m_iCheckKey;
	QString m_strUserPath;		
	QString m_strlanguage;

};

#endif // SETTINGSMANAGER_H
