#pragma once

#include <QWidget>
#include <QPainter>
#include <QDateTime>
#include <QTimer>
#include <QMatrix>
#include <qclipboard.h>
#include <QMovie>
#include "messagebox.h"

namespace Ui { class StarFlashWidget; };

class StarFlashWidget : public QWidget
{
	Q_OBJECT

public:
	StarFlashWidget(QWidget *parent = Q_NULLPTR);
	~StarFlashWidget();

	void setAccount(QString);
	void setId(QString);
	void setAddress(QString);
	void setStar(QString);

	QString getId();

	void setBuddysNum(int);
	void setGroupsNum(int);

	void setInviteCount(QString);

	void stopRefreshGif();

protected:
	bool eventFilter(QObject *, QEvent *);
	void paintEvent(QPaintEvent * event);

signals:
	void sigRefreshWallet();

	private slots:
	void slotClickCopy();

private:
	Ui::StarFlashWidget *ui;

	QString starImagePath;
	QImage starImage;

	QMovie *refreshGif;
};
