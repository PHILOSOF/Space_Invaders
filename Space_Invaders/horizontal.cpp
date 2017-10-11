#include "horizontal.h"
#include"globalvariables.h"

Horizontal::Horizontal(Enemy *enm)
{
    this->enemy= enm;

   }
   int Horizontal::moveX(int speed,int x)
   {
        this->x=x;
       return x+speed;
   }

   int Horizontal::moveY(int speed, int y)
   {
       if(x<=5||(x>=(SCREEN_WIDTH-ENEMY_WIDTH-5)))
       {
           if(speed<0)
               speed=-speed;
           y+=speed*2;
       }
       return y;
   }
