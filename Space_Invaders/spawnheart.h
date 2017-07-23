#ifndef SPAWNHEART_H
#define SPAWNHEART_H


#include <QObject>
#include <QGraphicsRectItem>

class SpawnHeart:public QObject ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    SpawnHeart();
public slots:
    void spawnH();

};

#endif // SPAWNHEART_H
