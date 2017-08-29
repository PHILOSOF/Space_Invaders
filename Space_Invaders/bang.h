#ifndef BANG_H
#define BANG_H

#include <QGraphicsPixmapItem>
#include <QObject>

class Bang : public QObject ,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Bang(int x, int y);
//~Bang();
public slots:
    void del();

};

#endif // BANG_H
