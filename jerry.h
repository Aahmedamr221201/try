#ifndef JERRY_H
#define JERRY_H
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QGraphicsItem>
#include <QList>
#include <QTimer>
#include "pellet.h"
#include "cheese.h"
#include "defend.h"
#include "home.h"
#include "health.h"
class Jerry : public QObject, public QGraphicsPixmapItem
{

    Q_OBJECT

    QGraphicsPixmapItem land1;
    QGraphicsPixmapItem land2;
    QGraphicsPixmapItem land3;
    QGraphicsPixmapItem land4;



    int data[10][10];
    int row;
    int column;
    bool cheesey=false;
    bool ghosted=false;
    QString x = "sources/JerryRight.png";
    int lives;
    int cheeseNumber;
    bool keyPressEnable;
    QList<QGraphicsItem*> removed;
public:
    Jerry(int** board);
    void setImage(bool cheesey, int UDRL);
    friend class defend;
    //void constructHealth(int x);
public slots:
    void keyPressEvent(QKeyEvent* event);
    void disableGhosted();
};

#endif // JERRY_H
