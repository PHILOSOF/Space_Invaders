#include "heart.h"
#include "globalvariables.h"
#include"game.h"

//#include<QDebug>
#include<stdlib.h>
#include <QTimer>
#include<QGraphicsScene>

extern Game* game;

Heart::Heart(): QObject (),QGraphicsPixmapItem()
{
    const int randPosX = rand() % (SCREEN_WIDTH - HEART_WIDTH);
    this->setPos(randPosX,0);
    setPixmap(QPixmap(":/images/heart.png"));
   // this->setRect(0,0,HEART_WIDTH,HEART_HEIGHT);
    heartMedia = new QMediaPlayer();
    heartMedia->setMedia(QUrl("qrc:/sounds/heart.mp3"));
    QTimer* timer = new QTimer();
    this->connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(10);


}

void Heart::move()
{

    QList<QGraphicsItem*> collItem = collidingItems();
    for(size_t i=0;i<collItem.size();++i)
    {
        if (typeid(*collItem[i])== typeid(Player))
        {
            heartMedia->play();
            game->health->increaseHealth();
            scene()->removeItem(this);
            delete heartMedia;

            delete this;
            return;

        }
    }
    setPos(x(),y() + HEART_SPEED);
   if(y()>SCREEN_HEIGHT)
    {
        scene()->removeItem(this);
        delete heartMedia;
        delete this;
    }

}
