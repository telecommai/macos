#ifndef MYTITLEBAR_H
#define MYTITLEBAR_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QTimer>

enum ButtonType
{
	MIN_BUTTON = 0,       
	MIN_MAX_BUTTON,       
	ONLY_CLOSE_BUTTON     
};

class MyTitleBar : public QWidget
{
	Q_OBJECT

public:
	MyTitleBar(QWidget *parent);
	~MyTitleBar();

	void setBackgroundColor(int r, int g, int b);

	void setTitleIcon(QString filePath, QSize IconSize = QSize(18, 18));
	
	void setTitleContent(QString titleContent, int titleFontSize = 9,QString strFamily = "Microsoft Yahei", bool bold = false );
	
	void setTitleContentBKColor(QString strSheetStyle);
	
	void setTitleWidth(int width);
	
	void setButtonType(ButtonType buttonType);
	
	void setTitleRoll();
	
	void setWindowBorderWidth(int borderWidth);

	void saveRestoreInfo(const QPoint point, const QSize size);
	void getRestoreInfo(QPoint& point, QSize& size);

	void loadStyleSheet(const QString &sheetName);

	QPushButton* getCloseBtn() { return m_pButtonClose; }

private:
	void paintEvent(QPaintEvent *event);
	void mouseDoubleClickEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

	void initControl();
	void initConnections();

signals:
	
	void sigButtonMinClicked();
	void sigButtonRestoreClicked();
	void sigButtonMaxClicked();
	void sigButtonCloseClicked();
private slots:

	void onButtonMinClicked();
	void onButtonRestoreClicked();
	void onButtonMaxClicked();
	void onButtonCloseClicked();
	void onRollTitle();

private:
	QLabel* m_pIcon;                  
	QLabel* m_pTitleContent;          
	QPushButton* m_pButtonMin;        
	QPushButton* m_pButtonRestore;    
	QPushButton* m_pButtonMax;        
	QPushButton* m_pButtonClose;      

	int m_colorR;
	int m_colorG;
	int m_colorB;

	QPoint m_restorePos;
	QSize m_restoreSize;
	
	bool m_isPressed;
	QPoint m_startMovePos;
	
	QTimer m_titleRollTimer;

	QString m_titleContent;

	ButtonType m_buttonType;
	
	int m_windowBorderWidth;
};

#endif // MYTITLEBAR_H
