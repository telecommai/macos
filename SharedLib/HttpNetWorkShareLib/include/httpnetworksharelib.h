#ifndef HTTPNETWORKSHARELIB_H
#define HTTPNETWORKSHARELIB_H

#include <QObject>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QNetworkAccessManager>
#include <QSslConfiguration>
#include <QFile>
#include <QTimer>


namespace HttpNetWork
{
	class HttpNetWorkShareLib : public QObject
	{
		Q_OBJECT
	public:
		HttpNetWorkShareLib(QObject *parent = NULL);
		~HttpNetWorkShareLib();

		void setData(QVariant var) { mUserData = var; }
		QVariant getData() { return mUserData; }

		void getHttpRequest(QString strUrl, int time_out = 20000);
		void postHttpRequest(QString strUrl, QByteArray data, int time_out = 20000);
		void postHttpJsonRequest(QString strUrl, QByteArray data, int time_out = 20000);
		private slots:
		
		void slotReplyFinished(QNetworkReply*reply);

		void slotRequestTimeout();

	signals:
	
		void sigReplyFinished(bool bResult, QString strResult);
		
	private:
		QNetworkReply *mReply;
		QTimer* m_pTimer;

		QVariant mUserData; 
	};

	class HttpDownLoadFile : public QObject
	{
		Q_OBJECT
	public:
		HttpDownLoadFile(QObject *parent = 0);
		~HttpDownLoadFile();

		bool StartDownLoadFile(QString strUrl, QString strFilePath);

		public slots:
		
		void replyFinished(QNetworkReply*reply);
		
		void onDownloadProgress(qint64 bytesSent, qint64 bytesTotal);

		void onReadyRead();

		void slotLoadorDownLoadCancle(QString MsgId);

		void slotRequestTimeout();

	public:

		void setData(QVariant var) { mUserData = var; }

		QVariant getData() { return mUserData; }
		
	signals:
		void sigDownFinished(bool);
		void sigDownloadProgress(qint64 bytesSent, qint64 bytesTotal);
		void sigDownFailed();

	private:
		QNetworkAccessManager *accessManager;
		QNetworkRequest request;
		QNetworkReply *mReply;
		QFile *file;
		QVariant mUserData; 
		QTimer * m_timer;
	};

	class HttpUpLoadFile : public QObject
	{
		Q_OBJECT
	public:
		HttpUpLoadFile(QObject *parent = 0);
		~HttpUpLoadFile();

		void StartUpLoadFile(QString strUrl, QString filePath, QVariantMap paramMap);

		void setData(QVariant var) { mUserData = var; }

		QVariant getData() { return mUserData; }
	public slots :
		void replyFinished(QNetworkReply*);
		void OnUploadProgress(qint64 bytesSent, qint64 bytesTotal);
		void slotLoadorDownLoadCancle(QString MsgId);
	signals:
		void sigUpLoadFinished(bool bResult,QByteArray byteArray);
		void sigUpLoadProgress(qint64 bytesSent, qint64 bytesTotal);

	private:
		QNetworkAccessManager *accessManager;
		QNetworkRequest request;
		QNetworkReply *mReply;
		QVariant mUserData;  
	};
}
#endif // HTTPNETWORKSHARELIB_H
