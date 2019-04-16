#ifndef PINYIN_H
#define PINYIN_H

#include <stdio.h>
#include <string.h>
#include <QTextCodec>

struct PinYin
{
	QString fullPinYin;
	QString easyPinYin;
};

#define HZ2PY_OUTPUT_BUF_ARRAY_SIZE 5120	
#define HZ2PY_MAX_PINYIN_SIZE 30			

bool safeAddToOutbuf(char* outbuf, int &iOutbuf, char* pinyinValue, int iPinyinValue);

int findLetter(int nCode, char* strValue);

void pinyin_gb2312(char * inbuf, char * outbuf, bool m_blnSimaple = false, bool polyphone_support = false, bool m_blnFirstBig = false, bool m_blnAllBiG = false, bool m_LetterEnd = false, bool m_unknowSkip = true, bool m_filterPunc = true);


PinYin getPinYin(QString name);

#endif // PINYIN_H
