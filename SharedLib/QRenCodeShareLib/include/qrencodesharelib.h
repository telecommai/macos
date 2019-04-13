#ifndef QRENCODESHARELIB_H
#define QRENCODESHARELIB_H

#include <QImage>

class QRenCodeShareLib
{
public:
	QRenCodeShareLib();
	~QRenCodeShareLib();

	QImage GenerateQRcode(QString tempstr, int nWidth = 300, int nHeight=300);
private:

};

#endif // QRENCODESHARELIB_H
