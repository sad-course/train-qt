#ifndef TRAIN_H
#define TRAIN_H

#include <QObject>
#include <thread>
#include <chrono>
using namespace std;

class Train : public QObject
{
    Q_OBJECT
public:
    Train(int,int,int,std::string);
    ~Train();
    void start();
    void run();
    void setVelocity(int);
    void setEnable(bool);

    int getId();

    void setLabel(std::string);
    std::string getLabel();

signals:
    void updateGUI(int,int,int);

private:
   std::thread threadTrem;
   int id;
   int x;
   int y;
   int velocity;
   bool enable;
   std::string label;
};

#endif // TRAIN_H
