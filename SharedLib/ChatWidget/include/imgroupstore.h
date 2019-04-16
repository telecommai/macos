#ifndef IMGROUPSTORE_H
#define IMGROUPSTORE_H

#include <QObject>

class IMGroupDispatcher;
class IMGroupViewModel;
class IMGroupView;

class IMGroupStore : public QObject
{
    Q_OBJECT
private:
	IMGroupDispatcher* m_dispatcher;
	IMGroupViewModel* m_vm;
	IMGroupView* m_view;
public:
    explicit IMGroupStore(QObject *parent = nullptr);

	void init();
signals:

public slots:
	void slotSetGroupNameAndGroupId(QString strGroupName, QString strGroupID);
};

#endif // IMGROUPSTORE_H