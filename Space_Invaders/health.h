#ifndef HEALTH_H
#define HEALTH_H
#include<QGraphicsTextItem>

class Health :public QGraphicsTextItem
{
public:
    Health(QGraphicsItem* perent = NULL);
    int getHealth();
    void increaseHealth();
    void decreaseHealth();
private:
    int health;

};

#endif // HEALTH_H
