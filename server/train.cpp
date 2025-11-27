#include "headers/train.h"
#include "headers/mainwindow.h"

Train::Train(int id, int x, int y, std::string label)
{
    this->id = id;
    this->x = x;
    this->y = y;
    this->label = label;
    velocity = 250;
    enable = true;
}

Train::~Train()
{
    threadTrem.join();
}

void Train::setVelocity(int velocity)
{
    this->velocity = velocity;
}

void Train::setEnable(bool enable)
{
    this->enable = enable;
}

int Train::getId(){
    return this->id;
};


std::string Train::getLabel(){
    return this->label;
};


void Train::start()
{
    threadTrem = std::thread(&Train::run,this);
}

void Train::run()
{
    while(true){
        switch(id){
        case 1:
            if (enable)
            {
                emit updateGUI(id,x,y);
                if (y == 120 && x <290)
                {
                    if (x == 270){
                        MainWindow::CR["CR1"]->acquire();
                    }

                    x+=10;
                }
                else if (x == 290 && y < 220)
                {
                    if (y == 200){
                        MainWindow::CR["CR3"]->acquire();
                    }
                    y+=10;
                }
                else if (x > 119 && y == 220)
                {
                    x-=10;
                    if (x == 270){
                        MainWindow::CR["CR1"]->release();
                    }
                    if (x == 170){
                        MainWindow::CR["CR3"]->release();
                    }
                }
                else
                    y-=10;
            }
            break;
        case 2:
            if (enable)
            {
                emit updateGUI(id,x,y);
                if (y == 120 && x > 290)
                {
                    if (x == 320){
                        MainWindow::CR["CR1"]->acquire();
                    }

                    if (x == 440){
                        MainWindow::CR["CR2"]->release();
                    }
                    x-=10;
                }
                else if (x == 290 && y < 220){
                    
                    if (y == 200){
                        MainWindow::CR["CR4"]->acquire();
                    }
                    y+=10;

                }
                else if (x < 470 && y == 220)
                {
                    if (x == 310){
                        MainWindow::CR["CR1"]->release();
                    }

                    if (x == 440){
                        MainWindow::CR["CR2"]->acquire();
                    }
                    x+=10;

                }
                else{
                    if (y == 200){
                        MainWindow::CR["CR4"]->release();
                    }
                    y -=10;
                }
            }
            break;
        case 3:
            if (enable)
            {
                emit updateGUI(id,x,y);
                if (y == 120 && x < 651){
                    if (x == 501){
                        MainWindow::CR["CR2"]->release();
                    }
                    x+=10;
                }
                else if (x == 651 && y < 220)
                    y+=10;
                else if (x > 480 && y == 220){

                    if (x == 501){
                        MainWindow::CR["CR2"]->acquire();
                    }
                    if (x == 611){
                        MainWindow::CR["CR5"]->acquire();
                    }
                    x-=10;
                }
                else{

                    if (y == 200){
                        MainWindow::CR["CR5"]->release();
                    }
                    y-=10;
                }
            }
            break;
        case 4:
            if(enable)
            {
                emit updateGUI(id,x,y);
                if(y == 220 && x > 170){
                    if (x == 310){
                        MainWindow::CR["CR3"]->acquire();
                    }
                    if (x == 450){
                        MainWindow::CR["CR5"]->release();
                    }
                    if (x == 490){
                        MainWindow::CR["CR4"]->acquire();
                    }
                    if (x == 270){
                        MainWindow::CR["CR4"]->release();
                    }
                    if (x == 570){
                        MainWindow::CR["CR7"]->release();
                    }

                    if (x == 200){
                        MainWindow::CR["CR6"]->acquire();
                    }
                    x-=10;
                }
                else if (x == 170 && y < 320){
                    if (y == 250){
                        MainWindow::CR["CR3"]->release();
                    }
                    if (y == 290){
                        MainWindow::CR["CR8"]->acquire();
                    }
                    y+=10;
                }
                else if (x < 590 && y == 320){
                    if (x == 200){
                        MainWindow::CR["CR6"]->release();
                    }
                    if (x == 350){
                        MainWindow::CR["CR9"]->acquire();
                    }  
                    if (x == 420){
                        MainWindow::CR["CR8"]->release();
                    }  
                    
                    if(x == 570){
                        MainWindow::CR["CR7"]->acquire();
                    }
                    x+=10;
                }
                else{
                    if (y == 290){
                        MainWindow::CR["CR9"]->release();
                    }
                    if (y == 240){
                        MainWindow::CR["CR5"]->acquire();
                    }
                    y-=10;
                }
            }
            break;
        case 5:
             if(enable)
            {
                emit updateGUI(id,x,y);
                if(y == 220 && x > 170){
                    if (x == 310){
                        MainWindow::CR["CR3"]->acquire();
                    }
                    if (x == 450){
                        MainWindow::CR["CR5"]->release();
                    }
                    if (x == 490){
                        MainWindow::CR["CR4"]->acquire();
                    }
                    if (x == 270){
                        MainWindow::CR["CR4"]->release();
                    }
                    if (x == 570){
                        MainWindow::CR["CR7"]->release();
                    }

                    if (x == 200){
                        MainWindow::CR["CR6"]->acquire();
                    }
                    x-=10;
                }
                else if (x == 170 && y < 320){
                    if (y == 250){
                        MainWindow::CR["CR3"]->release();
                    }
                    if (y == 290){
                        MainWindow::CR["CR8"]->acquire();
                    }
                    y+=10;
                }
                else if (x < 590 && y == 320){
                    if (x == 200){
                        MainWindow::CR["CR6"]->release();
                    }
                    if (x == 350){
                        MainWindow::CR["CR9"]->acquire();
                    }  
                    if (x == 420){
                        MainWindow::CR["CR8"]->release();
                    }  
                    
                    if(x == 570){
                        MainWindow::CR["CR7"]->acquire();
                    }
                    x+=10;
                }
                else{
                    if (y == 290){
                        MainWindow::CR["CR9"]->release();
                    }
                    if (y == 240){
                        MainWindow::CR["CR5"]->acquire();
                    }
                    y-=10;
                }
            }
            break;
        case 6:
            if (enable)
            {
                emit updateGUI(id, x , y);
                if(y == 320 && x < 380){
                    if (x == 150){
                        MainWindow::CR["CR8"]->acquire();
                    }
                    if (x == 350){
                        MainWindow::CR["CR10"]->acquire();
                    }
                    x+=10;
                }
                else if (x == 380 && y < 420){

                    if (y == 350){
                        MainWindow::CR["CR8"]->release();
                    }

                    y+=10;
                }
                else if (x > 119 && y == 420 ){
                    if (x == 350){
                        MainWindow::CR["CR10"]->release();
                    }
                    x-=10;
                }
                else
                    y-=10;
            }
            break;
        case 7:
            if (enable)
            {
                emit updateGUI(id, x , y);
                if(y == 320 && x < 650){
                    if (x == 420){
                        MainWindow::CR["CR10"]->release();
                    }
                    if (x == 610){
                        MainWindow::CR["CR9"]->release();
                    }
                    x+=10;
                }
                else if (x == 650 && y < 420)
                    y+=10;
                else if (x > 380 && y == 420 ){
                    if (x == 420){
                        MainWindow::CR["CR10"]->acquire();
                    }
                    x-=10;
                }
                else{
                    if(y == 350){
                        MainWindow::CR["CR9"]->acquire();
                    }
                    y-=10;
                }
            }
            break;
        default:
            break;
        }
        this_thread::sleep_for(chrono::milliseconds(velocity));
    }
}

