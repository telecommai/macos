#ifndef HEADPROVIDER_H
#define HEADPROVIDER_H

#include <QQuickImageProvider>

class HeadProvider : public QQuickImageProvider
{
public:
	HeadProvider(ImageType type, Flags flags = 0);
    ~HeadProvider();
    QImage requestImage(const QString & id, QSize * size, const QSize & requestedSize);
};

#endif // HEADPROVIDER_H
