#ifndef MESSAGELISTVIEW_H
#define MESSAGELISTVIEW_H

#include <QQuickWidget>
class MessageListDispatcher;
class MessageListViewModel;
class MessageListStore;

class MessageListView : public QQuickWidget
{
public:
    MessageListView(QWidget *parent);

	MessageListDispatcher* dispatcher();
	MessageListViewModel* vm();
	MessageListStore* store();
protected:
	void mouseReleaseEvent(QMouseEvent *event);
	void keyPressEvent(QKeyEvent * event);
};

#endif // MESSAGELISTVIEW_H