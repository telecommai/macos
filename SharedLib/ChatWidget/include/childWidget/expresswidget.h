#ifndef EXPRESSWIDGET_H
#define EXPRESSWIDGET_H

#include <QWidget>
#include <QTreeWidgetItem>
#include "myemotionwidget.h"
#include <QMap>
#include <QScrollBar>
#include <QFile>

#ifdef Q_OS_WIN
#pragma execution_character_set("utf-8")
#endif // Q_OS_WIN


namespace Ui {
class ExpressWidget;
}

class ExpressWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ExpressWidget(QWidget *parent = 0);
    ~ExpressWidget();

    void showNormalEmotion(QPoint point);   

    void showSmallEmotion(QPoint point);    

    QString GetExControlImgPath(int nIndex);

	static void InsertExControl();
	static QString GetDescriptionByImagePath(QString strImgPath); 
	static QString GetImagePathByDescription(QString strImgDescription); 
private:
	QString getTranslate(QString val);
    void InitExpressWindow();
    void InitExpressEmotion();
	void InitTranslation();
   
    bool eventFilter(QObject *obj, QEvent *e);

private slots:
void slotGetNormalRowColumn(int, int);  
signals:
	void sigExpressImagePath(QString);     
private:
    Ui::ExpressWidget *ui;
    bool m_isNeedHide;
    MyEmotionWidget* m_normalEmotionWidget; 
    MyEmotionWidget* m_smallEmotionWidget;  

    static QMap<QString,QString> mMapExControl;  
	QMap<QString, QString> mMapTranslate;    

	int     m_row;			
	int     m_column;      
};

#endif // EXPRESSWIDGET_H
