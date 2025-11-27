#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "train.h"
#include <QMainWindow>
#include <semaphore>
using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void createTrains();
    void connectSignals();
    void startTrain();
    void startTrains();
    void stopTrain();
    void stopTrains();

    std::string getTrainLabelperId(int);

    static std::map<std::string, std::binary_semaphore*> CR;

public slots:
    void updateInterface(int,int,int);

private:
    Ui::MainWindow *ui;
    std::vector<Train*> trains;

    Train *trem1;
    Train *trem2;
    Train *trem3;
    Train *trem4;
    Train *trem5;
    Train *trem6;
    Train *trem7;
};

#endif // MAINWINDOW_H
