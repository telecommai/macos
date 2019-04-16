#ifndef MYEMOTIONWIDGET_H
#define MYEMOTIONWIDGET_H

#include <QWidget>
#include <QTableWidget>
#include <QScrollBar>


class MyEmotionWidget : public QTableWidget
{
	Q_OBJECT

public:
	MyEmotionWidget(QWidget *parent = 0);
	~MyEmotionWidget();

	void setRowAndColumn(int row , int column);
	void setEmotionSize(QSize emotionSize);
	void setEmotionMovieSize(QSize emotionMovieSize);
	void setMaxRow(int maxRow);
	void addEmotionItem(QString fileName, QString toolTip = "");

	void initTableWidget();

	void showDynamicEmotion(QPoint cursorPos);
private:
	void loadStyleSheet();

private slots:
	
private:
	int m_preRow;
	int m_preColumn;
	int m_tableRow;
	int m_tableColumn;
	int m_maxRow;
	QSize m_emotionSize;
	QSize m_emotionMovieSize;
	QList<QString> m_emotionList;
};

#endif // MYEMOTIONWIDGET_H
