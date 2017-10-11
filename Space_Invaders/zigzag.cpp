#include "zigzag.h"
#include<QDebug>

Zigzag::Zigzag(Enemy* enm)
{
 this->enemy= enm;
}
int Zigzag::moveX(int speed,int x)
{
    return x+speed;
}

int Zigzag::moveY(int speed, int y)
{
    if(speed<0)
        speed=-speed;
    return y+(speed/2);
}
