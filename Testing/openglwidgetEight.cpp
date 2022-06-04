#include "openglwidgetEight.h"
#include "qwidget.h"
#include "list.h"

OpenGlWidgetEight::OpenGlWidgetEight(QWidget *parent)
   : QOpenGLWidget(parent)
{
    setAcceptDrops(true);

}

void OpenGlWidgetEight::dragEnterEvent(QDragEnterEvent *event)
{
    event->accept();
}

void OpenGlWidgetEight::dropEvent(QDropEvent *event ){ //HOW TO PASS THE GRID LAYOUT HERE (?)

    const QMimeData *mimeData = event->mimeData(); //contenitore dati settato a formato qabstract item model data list

    if (mimeData->hasFormat("application/x-qabstractitemmodeldatalist")) { // i dati di tipo mime che puoi droppare
        QByteArray arraydati = mimeData->data("application/x-qabstractitemmodeldatalist"); // array di byte di tipo mimeData
        QDataStream stream(&arraydati, QIODevice::ReadOnly);

        while (!stream.atEnd()) {
            int row;
            int col;
            Piece piece;
            piece.location = event->position().toPoint();
         //   dataStream >> piece.pixmap >> piece.location;
            QMap<int,  QVariant> DataMap;
            stream >> row >> col >> DataMap;
            QString name = DataMap.value(0).toString();
            QIcon icon = DataMap.value(1).value<QIcon>();
            m_pixmap = icon.pixmap(icon.availableSizes().first());
            update();
            firedWidget = 8;

            qDebug() <<"\n"<<"hai trascinato l'icona -----> "<<name<< "\n";
            qDebug() <<"\n"<<"widget -----> "<<firedWidget<< "\n";
////////


        }
    } else {
        event->ignore();
    }
}

void OpenGlWidgetEight::paintGL()
{
    QPainter painter(this);
    painter.drawPixmap(0, 0, m_pixmap);
    //painter.drawPixmap
}






