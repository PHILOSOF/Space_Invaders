#include "health.h"

#include <QFont>

Health::Health(QGraphicsItem* parent):QGraphicsTextItem (parent)
{
    health=10;
    setPlainText(QString("Health = ")+QString::number(health));
    setDefaultTextColor(Qt::black);
    setFont(QFont("OldEnglish", 12));
}

int Health::getHealth()
{
    return health;
}

void Health::increaseHealth()
{
    ++health;
    setPlainText(QString("Health = ")+QString::number(health));
}

void Health::decreaseHealth()
{
    --health;
    setPlainText(QString("Health = ")+QString::number(health));
}
