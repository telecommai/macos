#ifndef INLINE_MAC_H
#define INLINE_MAC_H

#include "QtCore/QString"
#include <QObject>
#include <QStandardPaths>

inline QString getResourcePath()
{
    QString strLocationName = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);
    strLocationName = strLocationName.section("/", -1, -1);
    QString strPath = "/Users/" + strLocationName +"/Library/Application\ Support/Telecomm/";
    return strPath;
}

#endif // INLINE_MAC_H
