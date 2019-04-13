#ifndef SCREENPENSETTINGWIGET_H
#define SCREENPENSETTINGWIGET_H

#include <QWidget>
#include <QMap>
class QButtonGroup;
namespace Ui { class ScreenPenSettingWidget; };

class ScreenPenSettingWidget : public QWidget
{
	Q_OBJECT

public:
	ScreenPenSettingWidget(QWidget *parent = Q_NULLPTR);
	~ScreenPenSettingWidget();
	void setType(int);
private:
	void paintEvent(QPaintEvent* event);

private slots:
	void slotSelectColor(int);
	void slotSelectLine(int);

signals:
	void sigSetColor(QColor);
	void sigSetLine(int);
	void sigTextSizeChanged(QString);
    void sigMasicChanged(int);
private:
	Ui::ScreenPenSettingWidget *ui;
	QButtonGroup *m_btnColorGroup;
	QButtonGroup *m_btnLineGroup;
	QMap<int, QString>m_colorMap;
};
#endif
