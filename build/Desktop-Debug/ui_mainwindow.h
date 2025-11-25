/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *labelTrilho01;
    QLabel *labelTrem01;
    QLabel *labelTrilho02;
    QLabel *labelTrem02;
    QLabel *labelTrilho04;
    QLabel *labelTrem04_1;
    QLabel *labelTrem03;
    QLabel *labelTrilho03;
    QLabel *labelTrem04_2;
    QLabel *labelTrilho05;
    QLabel *labelTrem05;
    QLabel *labelTrem06;
    QLabel *labelTrilho06;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(804, 543);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        labelTrilho01 = new QLabel(centralWidget);
        labelTrilho01->setObjectName("labelTrilho01");
        labelTrilho01->setGeometry(QRect(119, 130, 181, 100));
        labelTrilho01->setAutoFillBackground(false);
        labelTrilho01->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 2px solid black;"));
        labelTrem01 = new QLabel(centralWidget);
        labelTrem01->setObjectName("labelTrem01");
        labelTrem01->setGeometry(QRect(180, 120, 20, 20));
        labelTrem01->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrilho02 = new QLabel(centralWidget);
        labelTrilho02->setObjectName("labelTrilho02");
        labelTrilho02->setGeometry(QRect(300, 130, 181, 100));
        labelTrilho02->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 2px solid black;"));
        labelTrem02 = new QLabel(centralWidget);
        labelTrem02->setObjectName("labelTrem02");
        labelTrem02->setGeometry(QRect(320, 120, 20, 20));
        labelTrem02->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrilho04 = new QLabel(centralWidget);
        labelTrilho04->setObjectName("labelTrilho04");
        labelTrilho04->setGeometry(QRect(180, 230, 421, 100));
        labelTrilho04->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 2px solid black;"));
        labelTrem04_1 = new QLabel(centralWidget);
        labelTrem04_1->setObjectName("labelTrem04_1");
        labelTrem04_1->setGeometry(QRect(170, 260, 20, 20));
        labelTrem04_1->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrem03 = new QLabel(centralWidget);
        labelTrem03->setObjectName("labelTrem03");
        labelTrem03->setGeometry(QRect(501, 120, 20, 20));
        labelTrem03->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrilho03 = new QLabel(centralWidget);
        labelTrilho03->setObjectName("labelTrilho03");
        labelTrilho03->setGeometry(QRect(481, 130, 181, 100));
        labelTrilho03->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 2px solid black;"));
        labelTrem04_2 = new QLabel(centralWidget);
        labelTrem04_2->setObjectName("labelTrem04_2");
        labelTrem04_2->setGeometry(QRect(590, 260, 20, 20));
        labelTrem04_2->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrilho05 = new QLabel(centralWidget);
        labelTrilho05->setObjectName("labelTrilho05");
        labelTrilho05->setGeometry(QRect(119, 330, 271, 100));
        labelTrilho05->setAutoFillBackground(false);
        labelTrilho05->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 2px solid black;"));
        labelTrem05 = new QLabel(centralWidget);
        labelTrem05->setObjectName("labelTrem05");
        labelTrem05->setGeometry(QRect(180, 420, 20, 20));
        labelTrem05->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrem06 = new QLabel(centralWidget);
        labelTrem06->setObjectName("labelTrem06");
        labelTrem06->setGeometry(QRect(550, 420, 20, 20));
        labelTrem06->setStyleSheet(QString::fromUtf8("background-color: red"));
        labelTrilho06 = new QLabel(centralWidget);
        labelTrilho06->setObjectName("labelTrilho06");
        labelTrilho06->setGeometry(QRect(390, 330, 271, 100));
        labelTrilho06->setAutoFillBackground(false);
        labelTrilho06->setStyleSheet(QString::fromUtf8("background-color: yellow;\n"
"border: 2px solid black;"));
        MainWindow->setCentralWidget(centralWidget);
        labelTrilho04->raise();
        labelTrilho05->raise();
        labelTrilho03->raise();
        labelTrilho02->raise();
        labelTrilho01->raise();
        labelTrem03->raise();
        labelTrem05->raise();
        labelTrilho06->raise();
        labelTrem06->raise();
        labelTrem02->raise();
        labelTrem04_1->raise();
        labelTrem01->raise();
        labelTrem04_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 804, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelTrilho01->setText(QString());
        labelTrem01->setText(QString());
        labelTrilho02->setText(QString());
        labelTrem02->setText(QString());
        labelTrilho04->setText(QString());
        labelTrem04_1->setText(QString());
        labelTrem03->setText(QString());
        labelTrilho03->setText(QString());
        labelTrem04_2->setText(QString());
        labelTrilho05->setText(QString());
        labelTrem05->setText(QString());
        labelTrem06->setText(QString());
        labelTrilho06->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
