#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include "list.h"
#include "openglwidget.h"
#include "openglwidgetOne.h"
#include "openglwidgetTwo.h"
#include "openglwidgetThree.h"
#include "openglwidgetFour.h"
#include "openglwidgetFive.h"
#include "openglwidgetSix.h"
#include "openglwidgetSeven.h"
#include "openglwidgetEight.h"
#include "openglwidgetNine.h"
#include "openglwidgetTen.h"
#include "openglwidgetEleven.h"
#include <QPushButton>
#include <QGridLayout>
#include <QtWidgets>
#include <QMessageBox>
#include <QLabel>
int firedWidget=0;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

   auto *_mainWindow = new QWidget(this);
   auto *BoxLay=new  QHBoxLayout(_mainWindow);
   auto *gridLay=new QGridLayout(this);

   auto *list=new List(this);

   auto *Cella0 = new OpenGlWidget();
   auto *Cella1 = new OpenGlWidgetOne();
   auto *Cella2 = new OpenGlWidgetTwo(this);
   auto *Cella3 = new OpenGlWidgetThree(this);
   auto *Cella4 = new OpenGlWidgetFour(this);
   auto *Cella5 = new OpenGlWidgetFive(this);
   auto *Cella6 = new OpenGlWidgetSix(this);
   auto *Cella7 = new OpenGlWidgetSeven(this);
   auto *Cella8 = new OpenGlWidgetEight(this);
   auto *Cella9 = new OpenGlWidgetNine(this);
   auto *Cella10 = new OpenGlWidgetTen(this);
   auto *Cella11 = new OpenGlWidgetEleven(this);

   //bottoni del grid layout

   Cella0->setFixedSize(50,50);
   Cella1->setFixedSize(50,50);
   Cella2->setFixedSize(50,50);
   Cella3->setFixedSize(50,50);
   Cella4->setFixedSize(50,50);
   Cella5->setFixedSize(50,50);
   Cella6->setFixedSize(50,50);
   Cella7->setFixedSize(50,50);
   Cella8->setFixedSize(50,50);
   Cella9->setFixedSize(50,50);
   Cella10->setFixedSize(50,50);
   Cella11->setFixedSize(50,50);

   gridLay->addWidget(Cella0,0,0,1,1);
   gridLay->addWidget(Cella1,0,1,1,1);
   gridLay->addWidget(Cella2,1,0,1,1);
   gridLay->addWidget(Cella3,1,1,1,1);
   gridLay->addWidget(Cella4,2,0,1,1);
   gridLay->addWidget(Cella5,2,1,1,1);
   gridLay->addWidget(Cella6,3,0,1,1);
   gridLay->addWidget(Cella7,3,1,1,1);
   gridLay->addWidget(Cella8,4,0,1,1);
   gridLay->addWidget(Cella9,4,1,1,1);
   gridLay->addWidget(Cella10,5,0,1,1);
   gridLay->addWidget(Cella11,5,1,1,1);

   Cella0->acceptDrops();


   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_BARRA_GIU.png"),tr("item0")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_BARRA_SU.png"),tr("item1")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_LATO_DESTRO_GIU.png"),tr("item2")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_LATO_DESTRO_SU.png"),tr("item3")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_LEVA_GETTO_OFF.png"),tr("item4")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_LEVA_GETTO_ON.png"),tr("item5")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_PORTELLA_ENTRA.png"),tr("item6")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_PORTELLA_ESCE.png"),tr("item7")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_PORTELLA_RUOTA_A_DX.png"),tr("item8")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_PORTELLA_RUOTA_A_SX.png"),tr("item9")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_POSTERIORE_GIU.png"),tr("item10")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_POSTERIORE_SU.png"),tr("item11")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_RUOTA_DX_GIU.png"),tr("item12")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_RUOTA_DX_SU.png"),tr("item13")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_RUOTA_SX_GIU.png"),tr("item14")));
   list->addItem(new QListWidgetItem(QIcon(":/pix/images/key_RUOTA_SX_SU.png"),tr("item15")));

   list->setViewMode(QListWidget::IconMode);
   list->setIconSize(QSize(50, 50));
   list->setGridSize(QSize(70, 70));
   list->setMaximumWidth(500);

   BoxLay->addWidget(list);
   BoxLay->addLayout(gridLay);

   setCentralWidget(_mainWindow);

}

