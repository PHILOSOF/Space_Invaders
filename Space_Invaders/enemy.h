#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include"trajectory.h"

class Trajectory;
class Enemy : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
   int health;
   int speed;
   Trajectory* trajct;

public:
    Enemy(int spd, int hlth);
    Enemy(int spd, int hlth, const QString skinPath, Trajectory* trjct);
    int GetHealth();
    void decreaseHealth();
public slots:
    void move();

};

#endif // ENEMY_H
