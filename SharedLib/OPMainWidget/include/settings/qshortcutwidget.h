#ifndef QSHORTCUTWIDGET_H
#define QSHORTCUTWIDGET_H

#include <QWidget>
namespace Ui {class QShortCutWidget;};

class QShortCutWidget : public QWidget
{
	Q_OBJECT

public:
	QShortCutWidget(QWidget *parent = 0);
	~QShortCutWidget();
	void setSendMsg(int iValue);
	void setScreenCut(QString strValue);
	void setQuickOpen(QString strValue);
	void setCheckKey(int bValue);
private slots:
	void SLO_getShortCut();
	void SLO_getShortCutKey(QString);
	void SLO_getOpen();
	void SLO_getOpenKey(QString);
	void SLO_setToDefault();
	void SLO_onStateChanged(int);
	void SLO_onIndexChanged(int);
	void keyPressEvent(QKeyEvent *e);
	void keyReleaseEvent(QKeyEvent *e);
	void saveKey();
signals:
	void SIG_val(int val);
	void sigScreenCut(QString);
	void sigQuickOpen(QString);
	void sigSendMsg(int);
	void sigCheckKey(int);
protected:
	bool eventFilter(QObject *obj, QEvent *e);
private:
	Ui::QShortCutWidget *ui;
	QString m_strScreenCut;
	QString m_strQuickOpen;
	int m_iSendMsg;
	bool m_bCheckKey;
	int iBtnFlag;
	bool m_bpressOrRelease;
};

#endif // QSHORTCUTWIDGET_H
