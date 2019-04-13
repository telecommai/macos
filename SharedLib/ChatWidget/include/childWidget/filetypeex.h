#ifndef FILETYPEEX_H
#define FILETYPEEX_H

#include <QObject>
#include <QFile>
#include <QMap>

class FileTypeEx : public QObject
{
	Q_OBJECT

public:
	FileTypeEx(QObject *parent = NULL);
	~FileTypeEx();

	QString GetFileType(QString strFilePath);

	qint64 GetFileSize(QString strFilePath);

	QString GetFilePic(QString strFilePath);

private:
	void OnInit();
private:
	QMap<QString, QList<QString> > mMapFileType;
};

#endif // FILETYPEEX_H
