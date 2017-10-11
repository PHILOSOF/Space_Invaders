#include "bullet.h"
#include "globalvariables.h"
#include "enemy.h"
#include "game.h"
#include "bang.h"

#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>

extern Game* game;

Bullet::Bullet(int x, int y, QGraphicsItem* parent) : QObject(), QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/bullet1.png"));
    setPos(x, y);

    QTimer* timer = new QTimer();
    this->connect(timer, SIGNAL(timeout()), this, SLOT(move()));

    timer->start(30);
}

void Bullet::move()
{
    QList<QGraphicsItem*> collItems = collidingItems();
    for(size_t i = 0; i < collItems.size(); ++i)
    {
        if(typeid(*collItems[i]) == typeid(Enemy))
        {
             dynamic_cast<Enemy*>(collItems[i])->decreaseHealth();
             if(dynamic_cast<Enemy*>(collItems[i])->GetHealth() == 0)
            {
            Bang* bang = new Bang(collItems[i]->pos().x(),collItems[i]->pos().y(),BANG_PATH);
            scene()->addItem(bang);
            QTimer* timer = new QTimer();
            bang->connect(timer,SIGNAL(timeout()),bang,SLOT(del()));
            timer->start(100);

            game->score->increaseScore();
            scene()->removeItem(collItems[i]);
            scene()->removeItem(this);
            delete collItems[i];
            delete this;

            return;
            }
             Bang* bang = new Bang(this->pos().x(),this->pos().y(),SMALL_BANG_PATH);
             scene()->addItem(bang);
             QTimer* timer = new QTimer();
             bang->connect(timer,SIGNAL(timeout()),bang,SLOT(del()));
             timer->start(100);
             scene()->removeItem(this);
              delete this;
        }
    }

    this->setPos(this->x(), this->y() - BULLET_SPEED);

    if(pos().y() + BULLET_HEIGHT < 0)
    {
        scene()->removeItem(this);
        delete this;
    }
}
