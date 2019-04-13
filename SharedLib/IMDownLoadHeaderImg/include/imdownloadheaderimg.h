#ifndef IMDOWNLOADHEADERIMG_H
#define IMDOWNLOADHEADERIMG_H

#include <QObject>
#include <QPixmap>
#include "httpnetworksharelib.h"
#include "imbuddy.h"
#include "common.h"

class IMDownLoadHeaderImg : public QObject
{
	Q_OBJECT
public:
	IMDownLoadHeaderImg(QObject *parent = NULL);
	~IMDownLoadHeaderImg();

	bool IsValidImage(QString imgPath);

	void StartDownLoadUserInfoHeaderImage(UserInfo userInfo);

	void StartDownLoadBuddyeHeaderImage(BuddyInfo buddyInfo);

	void StartDownLoadGroupHeaderImage(GroupInfo groupInfo);

	QPixmap GetImagePix(QString strPath);

	bool IsImageFile(QString localPath);

private slots:
	
	void slotDownUserPicFinished(bool bResult);

	void slotDownBuddyPicFinished(bool bResult);

	void slotDownGroupPicFinished(bool bResult);

signals:
	
	void sigUpdateBuddyHeaderImage(int nIMUserID, QPixmap pix);

	void sigUpdateBuddyHeaderImagePath(int nIMUserID, QString headerPath);
private:
};

#endif // IMDOWNLOADHEADERIMG_H
