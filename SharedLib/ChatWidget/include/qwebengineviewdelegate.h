#ifndef QWEBENGINEVIEWDELEGATE_H
#define QWEBENGINEVIEWDELEGATE_H

#include <QWebEngineView> 
#include "qwebenginepagedelegate.h"
#include "qwebengineviewmanager.h"
#include <QPointer>

class WebObjectShareLib;

namespace Ui {
class QWebEngineViewDelegate;
}

class QWebEngineViewDelegate : public QWidget
{
    Q_OBJECT

private:
	QString m_currentChatId;
	QWebEnginePageDelegate* m_webenginePageDelegate;

	QPointer<QWebEngineView> m_webEngineView;
public:
    explicit QWebEngineViewDelegate(QWidget *parent = 0);
    ~QWebEngineViewDelegate();

	QWebEngineView*  bindChatId(const QString& chatId);
	void unbindChatId();

	QString chatId();

	void loadChatManager();

	void adjustWebEngineView();
	void switchChatIFrame(bool bAdjustView = true);
private:
	
	void hideAllIFrames();
	void addChatIFrame(const QString& chatId);

	void chatIFramePresent();

	void delayChatIFramePresent();
protected:
	void paintEvent(QPaintEvent* event);
	void resizeEvent(QResizeEvent *event);

public:

	QWebEngineView* engine();
	QWebEnginePageDelegate* page();
	void triggerPageAction(QWebEnginePage::WebAction action, bool checked = false);
private:
    Ui::QWebEngineViewDelegate *ui;
private slots:
	void slotLoadChatManagerFinished(bool ok);
	void slotOnChatIFrameLoad(QString chatId);
signals:
	void renderProcessTerminated(QWebEnginePage::RenderProcessTerminationStatus terminationStatus, int exitCode);
	void loadFinished(bool ok);
};

#endif // QWEBENGINEVIEWDELEGATE_H
