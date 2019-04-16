#ifndef GETDEVICEINFO_H
#define GETDEVICEINFO_H

#include <QObject>

class GetDeviceInfo : public QObject
{
	Q_OBJECT

public:
	GetDeviceInfo(QObject *parent = 0);
	~GetDeviceInfo();

	QString GetDeviceType();         

	QString GetDeviceVersion();      

	QString GetDeviceManufacturer(); 

	QString GetDeviceModel();        

	QString GetAppVersion();         

	QString GetDeviceID();           

	QString GetDeviceClass();        

	QString GetCurrentMacAddress();  

private:
	
};

#endif // GETDEVICEINFO_H
