#include "space.h"

#include<QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include <stdlib.h>

Space::Space(int x,int y,QString spacePath)
{
    this->setPos(x,y);
    setPixmap(QPixmap(spacePath));

}

void Space::move()
{

    if(this->y()==499)
    {
        this->setPos(this->x(),this->y()-3000);

    }
    this->setPos(this->x(), this->y() +1);

}
