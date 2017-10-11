#include "Player.h"
#include "bullet.h"
#include"globalvariables.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>

Player::Player()
{
    setPixmap(QPixmap(":/images/p1.png"));
    setPos(PLAYER_START_POSITION_X,
           PLAYER_START_POSITION_Y - PLAYER_HEIGHT );//PLAYER_INDENT_FROM_BUTTOM
    bulletSound = new QMediaPlayer();
    bulletSound-> setMedia(QUrl("qrc:/sounds/BoltGun.wav"));
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

        Bullet* bullet = new Bullet(this->pos().x() + PLAYER_WIDTH / 2, this->pos().y());

        bullet->setPos(this->x() + PLAYER_WIDTH / 2, this->y());
        scene()->addItem(bullet);


        if(bulletSound->state() == QMediaPlayer::StoppedState)
        {
            bulletSound->play();
        }
        else if(bulletSound->state() == QMediaPlayer::PlayingState)
        {
            bulletSound->setPosition(0);
        }

    }
}
