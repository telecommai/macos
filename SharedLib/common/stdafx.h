#ifndef STDAFX_H
#define STDAFX_H
#include "imdatabaseoperainfo.h"
#include "imdatamanagersharelib.h"
#include "imsocketmessageinfo.h"
extern IMDataBaseOperaInfo *gDataBaseOpera;
extern IMDataManagerShareLib *gDataManager;
extern IMSocketMessageInfo *gSocketMessage;
#define WM_MESSAGE_SCREENSHOT    WM_USER+301
#endif // STDAFX_H