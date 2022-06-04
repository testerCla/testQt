#define OPENGLWIDGETEIGHT_H
#include "mainwindow.h"
#include "qevent.h"
#include "qpixmap.h"
#include <QOpenGLWidget>
#include <QGridLayout>
#include <QtWidgets>

class OpenGlWidgetEight : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit OpenGlWidgetEight(QWidget *parent=nullptr);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dropEvent(QDropEvent *event)override;
    void paintGL() override;

private:
    QPixmap m_pixmap;
    struct Piece {
        QPixmap pixmap;
        QRect rect;
        QPoint location;
    };
};
