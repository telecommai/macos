#ifndef READCONFIG_H
#define READCONFIG_H

#include <QObject>
#include <QDomDocument>
#include <QFile>
#include <QApplication>
#include <QDebug>

struct AppButton
{
	int id;
	QString name;
	QString className;
	QString icon;
	QString configPath;
};

class ReadConfig : public QObject
{
	Q_OBJECT

public:
	ReadConfig(QObject *parent=NULL);
	~ReadConfig();

	QList<AppButton> read();

private:
};

#endif // READCONFIG_H
