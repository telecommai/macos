#ifndef SEARCHRESULTWIDGET_H
#define SEARCHRESULTWIDGET_H

#include <QWidget>
namespace Ui { class SearchResultWidget; };

class SearchResultWidget : public QWidget
{
	Q_OBJECT

public:
	SearchResultWidget(QWidget *parent = Q_NULLPTR);
	~SearchResultWidget();

	void InitType(int iType);
	void OnSetPicPathByHttp(QString strPath, QString strDefaultImage="");
	void OnSetNickNameText(QString strText, QString styleSheet="");
	void OnSetAddPersonButtonText(QString strText);
	void onSetNote(QString strText);
	void setIdInfo(QString);
	QString getIdInfo();
	void ResetBackStyle();
signals:
	void sigClickChange();
	void sigAddPerson(QString);
	void sigOpenProfile(QString);
private slots:
	void slotAddBtn();
	void slotProFile();
private:
	QString getElideString(const QString& src_str, const QWidget* child_widget, const QFont& str_font);
protected:
	void mousePressEvent(QMouseEvent *event);
private:
	Ui::SearchResultWidget *ui;
	int m_iType;
	QString m_strId;
	QString m_strStyle;
};
#endif