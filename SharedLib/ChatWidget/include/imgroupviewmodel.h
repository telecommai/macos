#ifndef IMGROUPVIEWMODEL_H
#define IMGROUPVIEWMODEL_H

#include <QObject>

class IMGroupView;

class IMGroupViewModel : public QObject
{
    Q_OBJECT
private:
	IMGroupView* m_view;
public:
    explicit IMGroupViewModel(QObject *parent = nullptr);

	void init();

	void setGroupNameAndGroupId(QString strGroupName, QString strGroupID);
signals:

public slots:
};

#endif // IMGROUPVIEWMODEL_H