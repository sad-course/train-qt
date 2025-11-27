#include <iostream>
#include <semaphore>
#include "headers/mainwindow.h"
#include "ui_mainwindow.h"

std::map<std::string, std::binary_semaphore*> MainWindow::CR = {
    {"CR1",  new std::binary_semaphore(1)},
    {"CR2",  new std::binary_semaphore(1)},
    {"CR3",  new std::binary_semaphore(1)},
    {"CR4",  new std::binary_semaphore(1)},
    {"CR5",  new std::binary_semaphore(1)},
    {"CR6",  new std::binary_semaphore(1)},
    {"CR7",  new std::binary_semaphore(1)},
    {"CR8",  new std::binary_semaphore(1)},
    {"CR9",  new std::binary_semaphore(1)},
    {"CR10", new std::binary_semaphore(1)}
};

void MainWindow::createTrains(){
    this->trains.push_back(new Train(1,270,120, "labelTrem01"));
    this->trains.push_back(new Train(2,340,120, "labelTrem02"));
    this->trains.push_back(new Train(3,501,120, "labelTrem03"));
    this->trains.push_back(new Train(4,170,260, "labelTrem04"));
    this->trains.push_back(new Train(5,590,260, "labelTrem05"));
    this->trains.push_back(new Train(6,180,420, "labelTrem06"));
    this->trains.push_back(new Train(7,550,420, "labelTrem07"));
}

std::string MainWindow::getTrainLabelperId(int id){
    for (Train* train : this->trains){
        if (train->getId() == id){
            return train->getLabel();
        }
    }
    return "labelTrem01";
}
void MainWindow::connectSignals()
{
    for (Train* train : this->trains) {
        connect(train, SIGNAL(updateGUI(int,int,int)), SLOT(updateInterface(int,int,int)));
    }
}

void MainWindow::startTrains(){
    for (Train* train : this->trains) {
        train->start();
    }
}

void MainWindow::stopTrains(){
    for (Train* train : this->trains) {
        train->setEnable(false);
    }
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    createTrains();
    connectSignals();
   
    startTrains();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::updateInterface(int id, int x, int y)
{
    // Critic Regions: 
    //(x == 290 && 120 <= y < 220) - train 01 and 02 CR1
    //(x == 470 && 120 <= y < 220) - train 02 and 03 CR2
    //(y==220 && 170 <= x <  290) - train 01, train 04 CR3
    //(y==220 && 290 <= x < 470) - train 02, train 04 and train 04 CR4

    std::string labelName;
    labelName = MainWindow::getTrainLabelperId(id);

    /*
        Qt function to find child element in UI
    */
    QLabel* labelQt = findChild<QLabel*>(QString::fromStdString(labelName));
    if (!labelQt) {
        qDebug() << "Label not found:" << labelName;
        return;
    }

    labelQt->setGeometry(x,y,20,20);
}

