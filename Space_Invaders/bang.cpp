#include "bang.h"

#include <QGraphicsScene>

Bang::Bang(int x, int y, const QString BangPath): QObject(),QGraphicsPixmapItem()
{
    this->setPos(x,y);
    setPixmap(QPixmap(BangPath));

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
