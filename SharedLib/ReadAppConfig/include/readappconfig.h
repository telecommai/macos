#ifndef READAPPCONFIG_H
#define READAPPCONFIG_H

#include "common.h"
#include <QObject>

class ReadAppConfig : public QObject
{
    Q_OBJECT
public:
	ReadAppConfig(QObject *parent = 0);
	~ReadAppConfig();

	AppConfig ReadConfig(QString configPath);

private:

};

#endif // READAPPCONFIG_H
