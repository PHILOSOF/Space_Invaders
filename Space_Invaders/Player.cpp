#include "Player.h"
#include "bullet.h"
#include"globalvariables.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>

Player::Player()
{

}

void Player::keyPressEvent(QKeyEvent *key)
{
    if( (key->key() == Qt::Key_Left) && (x() > 0) )
    {
        this->setPos(this->x() - PLAYER_SPEED, this->y());
    }
    else if( (key->key() == Qt::Key_Right) && (x() + PLAYER_WIDTH) < SCREEN_WIDTH )
    {
        this->setPos(this->x() + PLAYER_SPEED,this->y());
    }
    else if(key->key() == Qt::Key_Space)
    {

        Bullet* bullet = new Bullet(this->x() + PLAYER_WIDTH / 2, this->rect().y());

        //bullet->setPos(this->x() + PLAYER_WIDTH / 2, this->y());
        scene()->addItem(bullet);
    }
}
