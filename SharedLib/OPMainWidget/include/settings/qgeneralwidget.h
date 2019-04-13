#ifndef QGENERALWIDGET_H
#define QGENERALWIDGET_H

#include <QWidget>
namespace Ui {class QGeneralWidget;};

class QGeneralWidget : public QWidget
{
	Q_OBJECT

public:
	QGeneralWidget(QWidget *parent = 0);
	~QGeneralWidget();
	void setClearText(QString strValue);
	void setUserPath(QString strValue);
	void setLanguage(QString strValue);
private slots:
	void SLO_openFile();
	void SLO_changePath();
	void SLO_clear();
	void slotLanguage(int);
	void slotSendLang();
	void slotCancelLang();
	void slotChangePath();
	void slotRevert();
signals:
	void sigChangePath(QString);
	void sigClearPath();
	void sigLanguage(QString);
private:
	Ui::QGeneralWidget *ui;
	QString m_strPath;

	QString currentLanguage;
};

#endif // QGENERALWIDGET_H
