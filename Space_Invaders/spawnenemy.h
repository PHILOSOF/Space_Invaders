#ifndef SPAWNENEMY_H
#define SPAWNENEMY_H

#include <QObject>
#include <QGraphicsRectItem>

class SpawnEnemy : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    SpawnEnemy();
public slots:
    void spawn();
};

#endif // SPAWNENEMY_H
