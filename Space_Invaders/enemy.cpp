#include "enemy.h"
#include "globalvariables.h"
#include "game.h"

#include<QDebug>
#include <stdlib.h>
#include <QTimer>
#include <QGraphicsScene>

extern Game* game;



Enemy::Enemy(int spd, int hlth) : QObject(), QGraphicsPixmapItem()
{
    const int randPosX = rand() % (SCREEN_WIDTH - ENEMY_WIDTH);
    this->setPos(randPosX, 0);
    setPixmap(QPixmap(":/images/enemy1.png"));
    health= hlth;
    QTimer* timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

Enemy::Enemy(int spd, int hlth, const QString skinPath,Trajectory* trjct): QObject(), QGraphicsPixmapItem()
{
    const int randPosX = rand() % (SCREEN_WIDTH - ENEMY_WIDTH);
    this->setPos(randPosX, 0);
    setPixmap(QPixmap(skinPath));
    health= hlth;
    speed = spd;
    trajct= trjct;
    QTimer  * timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

int Enemy::GetHealth()
{
    return health;
}

void Enemy::decreaseHealth()
{
    --health;
}

/*void Enemy::move()
{
    setPos(x(), y() + speed);

    if(y() > SCREEN_HEIGHT)
    {

        game->health->decreaseHealth();
        scene()->removeItem(this);
        delete this;
    }
}*/

void Enemy::move()
{

   if((this->pos().x()<=0)||(this->pos().x()>=(SCREEN_WIDTH-ENEMY_WIDTH)))
       speed=-speed;

    // trajct->Update(x(), y());
   // setPos(traject->x(), traject->y());
    setPos(trajct->moveX(speed,x()),trajct->moveY(speed,y()));

    if(y() > SCREEN_HEIGHT)
    {

        game->health->decreaseHealth();
        scene()->removeItem(this);
        delete this;
    }
}
