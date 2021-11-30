#ifndef HEALTH_H
#define HEALTH_H
#include<QObject>
#include<QGraphicsPixmapItem>


class Health : public QObject, public QGraphicsPixmapItem
{
private:
    int numberOfLives;
public:
    Health(int x);
    ~Health();

};

#endif // HEALTH_H
