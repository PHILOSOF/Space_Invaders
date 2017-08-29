#include "bang.h"

#include <QGraphicsScene>

Bang::Bang(int x,int y): QObject(),QGraphicsPixmapItem()
{
    this->setPos(x,y);
    setPixmap(QPixmap(":/images/bang.png"));

}

/*Bang::~Bang()
{
    scene()->removeItem(this);
    delete this;
}*/

void Bang::del()
{
    scene()->removeItem(this);
    delete this;
}
