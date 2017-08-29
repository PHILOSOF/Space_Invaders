#ifndef SPACE_H
#define SPACE_H

#include <QObject>
#include <QGraphicsPixmapItem>

class Space: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Space(int x, int y, QString spacePath);
public slots:
    void move();
};

#endif // SPACE_H
