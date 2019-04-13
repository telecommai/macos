#ifndef OESCREENSHOT_H
#define OESCREENSHOT_H

#include <memory>
#include <QRect>
#include <QWidget>
#include <QTextEdit>
#include "screencontrolwidget.h"
#include "screenpensettingwidget.h"

class OEScreen;
class OERect;
class OEAmplifier;
class QTimer;
class QMenu;


class OEScreenshot : public QWidget 
{
    Q_OBJECT

signals:

    void cursorPosChange(int, int);

    void doubleClick(void);

    void findChildWind(QRect);

    void sigScreenComplete();

    void sigScreenCanclePixMap();

public:
    explicit OEScreenshot(QWidget *parent = 0);
    ~OEScreenshot(void);

    static OEScreenshot *Instance(void);

    static void destroy(void);

	void SaveCutPicture();
	
	void DrawRectangEnable(bool bState);

	void DrawLineEnable(bool bState);

	void DrawArrowEnable(bool bState);

	void DrawRoundEnable(bool bState);

	void DrawTextEnable(bool bState);

	void DrawMasicEnable(bool bState);

    void CancleScreenCut();

	void RevertPaints();

	void SaveAsPic();

protected:

    virtual void hideEvent(QHideEvent *);

    virtual void closeEvent(QCloseEvent *);

    virtual void mouseDoubleClickEvent(QMouseEvent*);

    virtual void mousePressEvent(QMouseEvent *);

    virtual void mouseReleaseEvent(QMouseEvent *e);

    virtual void mouseMoveEvent(QMouseEvent *e);

    virtual void keyPressEvent(QKeyEvent *e);

    virtual void paintEvent(QPaintEvent *);

    void updateMouse(void);

private:

    void initAmplifier(std::shared_ptr<QPixmap> originPainting = nullptr);

    void initMeasureWidget(void);

    std::shared_ptr<QPixmap> initGlobalScreen(void);

    void initCursor(const QString& ico = "");

    std::shared_ptr<OEScreen> createScreen(const QPoint &pos);

    void destroyScreen(void);

    const QRect& getScreenRect(void);

    std::shared_ptr<QPixmap> getGlobalScreen(void);

private:

    bool                        isLeftPressed_;

    QPoint                      startPoint_;

    QRect desktopRect_;

    std::shared_ptr<QPixmap>    backgroundScreen_;

    std::shared_ptr<QPixmap>    originPainting_;

    std::shared_ptr<OEScreen>   screenTool_;

    std::shared_ptr<OERect>     rectTool_;

    std::shared_ptr<OEAmplifier> amplifierTool_;
    QRect                       windowRect_;

    static OEScreenshot         *self_;

    QTimer                      *egoisticTimer_;

    static bool                 isActivity_;

	ScreenControlWidget *m_pControlWidget;
	QWidget     *control;

	ScreenPenSettingWidget *m_pPenSettingWidget;

	public slots:
		void locationChange(int x,int y); 

private slots:
    void onEgoistic(void);
	void setPenColor(QColor);
	void setPenLine(int);
	void setTextSize(QString);
	void setMasicSize(int);

};

class OERect : public QWidget 
{
    Q_OBJECT

signals:
public:

    explicit OERect(QWidget *parent = 0);

	void onDrawLine();

protected:

    void paintEvent(QPaintEvent *);

public slots:

    void onPostionChange(int x, int y);

    void onSizeChange(int w, int h);

private:
    std::shared_ptr<QPixmap>    backgroundPixmap_;
    QString                     info_;
};



typedef struct myLine
{
	QPoint startPoint;
	QPoint endPoint;
}myLine;

typedef struct myRectangle
{
	QPoint startPoint;
	QPoint endPoint;
}myRectangle;

typedef struct myRound
{
	QPoint startPoint;
	QPoint endPoint;
}myRound;

typedef struct myArrow
{
	QPoint startPoint;
	QPoint endPoint;
}myArrow;

typedef struct myText
{
	QString mText;
	QRect mRect;
}myText;

enum paintType
{
	Type_Rect = 0,
	Type_Line,
	Type_Round,
	Type_Text,
	Type_Arrow,
	Type_Masic
};
class masicWidget;
class OEScreen : public QWidget
{

    Q_OBJECT

signals:
    void sizeChange(int,int);

    void postionChange(int,int);

    void doubleClick(void);

protected:
    const int PADDING_ = 6;

    enum DIRECTION {
        UPPER=0,
        LOWER=1,
        LEFT,
        RIGHT,
        LEFTUPPER,
        LEFTLOWER,
        RIGHTLOWER,
        RIGHTUPPER,
        NONE
    };

public:

    explicit OEScreen(std::shared_ptr<QPixmap> originPainting, QPoint pos, QWidget *parent = 0);

    ~OEScreen();

    static bool state(void) { return isInit_; }

	void setDrawRectangState(bool bState);

	void setDrawLineState(bool bState);

	void setDrawArrowState(bool bState);

	void setDrawRoundState(bool bState);

	void setDrawTextState(bool bState);

	void setDrawMasicState(bool bState);

	void changeTextEdit();

	void changeMasicSize();

	void generalMasicImg();

	QColor m_PenColor;
	int m_PenLine;
	int m_TextSize;
	int m_MasicSize;
	masicWidget * m_pMasic;

protected:

    DIRECTION getRegion(const QPoint &cursor);

    virtual void contextMenuEvent(QContextMenuEvent *);

    virtual void mouseDoubleClickEvent(QMouseEvent *e);

    virtual void mousePressEvent(QMouseEvent *e);

    virtual void mouseReleaseEvent(QMouseEvent *e);
  
    virtual void mouseMoveEvent(QMouseEvent *e);

    virtual void moveEvent(QMoveEvent *);

    virtual void resizeEvent(QResizeEvent *);

    virtual void showEvent(QShowEvent *);

    virtual void hideEvent(QHideEvent *);

    virtual void enterEvent(QEvent *e);

    virtual void leaveEvent(QEvent *e);

    virtual void closeEvent(QCloseEvent *);

    virtual void paintEvent(QPaintEvent *);

private:

    virtual const QString getFileName(void);

	void drawarrow(QPoint startpoint, QPoint endpoint, QPainter &p);

	void setTextEditToVector();
public slots:

    void onMouseChange(int x,int y);

    void onSaveScreen(void);

	void onSaveAsScreen();

	void RevertPaints();

protected slots:

    void onSaveScreenOther(void);

    void quitScreenshot(void);

	void slotTextChanged();

signals:
    void sigSaveScreenPicture();

private:
    static bool     isInit_;
    DIRECTION       direction_;
    QPoint          originPoint_;
    bool            isPressed_;
    QPoint          movePos_;
    QPolygon        listMarker_;
    std::shared_ptr<QPixmap> originPainting_;
    QRect           currentRect_;
	QImage			m_originImg;
	QImage			m_masicImg;
	bool			m_bNeedReMasic;

	bool isdrawline;
	bool isdrawrectangle;
	bool isdrawround;
	bool istextedit;
	bool isdrawarrow;
	bool ismasic;

	QPoint startPoint;
	QPoint endPoint;

	QTextEdit *m_plaintextedit;
	QVector<myLine*> mLines;
	QVector<QColor>mLinesColor;
	QVector<int>mLinesL;
	QVector<myRectangle*> mRectangles;
	QVector<QColor>mRectanglesColor;
	QVector<int>mRectanglesL;
	QVector<myRound*> mRounds;
	QVector<QColor>mRoundsColor;
	QVector<int>mRoundsL;
	QVector<myText*> mTexts;
	QVector<int> mTextsSize;
	QVector<QColor> mTextsColor;
	QVector<myArrow*> mArrows;
	QVector<QColor>mArrowsColor;
	QVector<int>mArrowsL;
	QVector<int>m_vecPaintsNum;
	QVector<int>m_vecLineGroup;
	int m_iLineGroup;
	QVector<int>m_vecMasicGroup;
	int m_iMasicGroup;
};



#endif /// OESCREENSHOT_H
