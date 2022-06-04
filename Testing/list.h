#define LIST_H

#include <QListWidget>


extern int firedWidget;

class List:public QListWidget{
    Q_OBJECT

public:
    explicit List(QWidget *parent=nullptr);


protected:
    void dropEvent(QDropEvent *)override;

};
