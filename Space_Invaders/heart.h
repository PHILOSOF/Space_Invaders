#ifndef HEART_H
#define HEART_H

#include<QObject>
#include<QGraphicsPixmapItem>
#include<QMediaPlayer>

class Heart : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Heart();
public slots:
    void move();
private:
    QMediaPlayer* heartMedia;
};

#endif // HEART_H
