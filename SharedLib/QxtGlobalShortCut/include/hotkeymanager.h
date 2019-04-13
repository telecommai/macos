#ifndef HOTKEYMANAGER_H
#define HOTKEYMANAGER_H

#include <QObject>
class QxtGlobalShortcut;
class HotKeyManager : public QObject
{
	Q_OBJECT

public:
	HotKeyManager(QObject *parent = NULL);
	~HotKeyManager();
	bool InitScreenShot();
	bool InitQuickOpen();
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
signals:
	void sigGlobalScreenShot();
	void sigQuickOpen();
private:
	QxtGlobalShortcut* m_shortcutPic;
	QxtGlobalShortcut* m_shortcutOpen;
	QString m_strScreenShot;	
	QString m_strQuickOpen;		
	int m_iSend;				
	int m_iCheckKey;
	QString m_strUserPath;		
	
};

#endif // HOTKEYMANAGER_H
