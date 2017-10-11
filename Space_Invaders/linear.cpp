#include "linear.h"

Linear::Linear(Enemy* enm)
{
 this->enemy= enm;

}
int Linear::moveX(int speed,int x)
{

    return x;
}

int Linear::moveY(int speed, int y)
{
    return y+speed;
}


