#pragma once

#include <QThread>
#include <QVariantMap>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

extern "C"
{
#include "wavwriter.h"
#include "interf_dec.h"
}
#ifdef Q_OS_WIN
#define SAMPLE_RATE 8000
#else
#define SAMPLE_RATE 11000
#endif
#define CHANNELS 1
#define BITS_PER_SAMPLE 16

#define BYTES_PER_SECOND (SAMPLE_RATE*CHANNELS*BITS_PER_SAMPLE/8)

class AmrDec : public QThread
{
	Q_OBJECT

public:
	AmrDec(QObject *parent = NULL);
	~AmrDec();

	void setData(QVariantMap map) { this->data = map; }
	QVariantMap getData() { return this->data; }

	void convertAmrToWav(QString amr, QString wav, bool usingThread = false);

	void doConvert();

protected:
	void run() override;

signals:
	void sigConvertFinished(QString);

private:
	QVariantMap data;

	QString amrPath;
	QString wavPath;
};
