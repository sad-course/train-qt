#include "trem.h"

Trem::Trem(int id, int x, int y)
{
    this->id = id;
    this->x = x;
    this->y = y;
    velocidade = 250;
    enable = true;
}

Trem::~Trem()
{
    threadTrem.join();
}

void Trem::setVelocidade(int velocidade)
{
    this->velocidade = velocidade;
}

void Trem::setEnable(bool enable)
{
    this->enable = enable;
}

void Trem::start()
{
    threadTrem = std::thread(&Trem::run,this);
}

void Trem::run()
{
    while(true){
        switch(id){
        case 1:
            if (enable)
            {
                emit updateGUI(id,x,y);
                if (y == 120 && x <290)
                    x+=10;
                else if (x == 290 && y < 220)
                    y+=10;
                else if (x > 119 && y == 220)
                    x-=10;
                else
                    y-=10;
            }
            break;
        case 2:
            if (enable)
            {
                emit updateGUI(id,x,y);
                if (y == 120 && x > 290)
                    x-=10;
                else if (x == 290 && y < 220)
                    y+=10;
                else if (x < 470 && y == 220)
                    x+=10;
                else
                    y -=10;
            }
            break;
        case 3:
            if (enable)
            {
                emit updateGUI(id,x,y);
                if (y == 120 && x < 651)
                    x+=10;
                else if (x == 651 && y < 220)
                    y+=10;
                else if (x > 480 && y == 220)
                    x-=10;
                else
                    y-=10;
            }
            break;
        case 4:
            if(enable)
            {
                emit updateGUI(id,x,y);
                if(y == 220 && x > 170)
                    x-=10;
                else if (x == 170 && y < 320)
                    y+=10;
                else if (x < 590 && y == 320)
                    x+=10;
                else
                    y-=10;
            }
            break;
        case 5:
            if(enable)
            {
                emit updateGUI(id,x,y);
                if(y == 220 && x > 170)
                    x-=10;
                else if (x == 170 && y < 320)
                    y+=10;
                else if (x < 590 && y == 320)
                    x+=10;
                else
                    y-=10;
            }
            break;
        case 6:
            if (enable)
            {
                emit updateGUI(id, x , y);
                if(y == 320 && x < 380)
                    x+=10;
                else if (x == 380 && y < 420)
                    y+=10;
                else if (x > 119 && y == 420 )
                    x-=10;
                else 
                    y-=10;
            }
            break;
        case 7:
            if (enable)
            {
                emit updateGUI(id, x , y);
                if(y == 320 && x < 650)
                    x+=10;
                else if (x == 650 && y < 420)
                    y+=10;
                else if (x > 380 && y == 420 )
                    x-=10;
                else 
                    y-=10;
            }
            break;
        default:
            break;
        }
        this_thread::sleep_for(chrono::milliseconds(velocidade));
    }
}

