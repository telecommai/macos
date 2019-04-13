#pragma once
#ifndef IMGROVIDER_H
#define IMGROVIDER_H
#include <QImageReader>

#include <QQuickImageProvider>

class ImgProvider : public QQuickImageProvider
{
public:
	ImgProvider(ImageType type, Flags flags = 0);
	~ImgProvider();
	QImage requestImage(const QString & id, QSize * size, const QSize & requestedSize);
};

#endif // HEADPROVIDER_H
