/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *sec120;
    QPushButton *min5;
    QPushButton *startti;
    QPushButton *stoppi;
    QLabel *lblinfoText;
    QPushButton *vaihto1;
    QPushButton *vaihto2;
    QProgressBar *barPlayer1;
    QProgressBar *barPlayer2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sec120 = new QPushButton(centralwidget);
        sec120->setObjectName("sec120");
        sec120->setGeometry(QRect(80, 100, 80, 18));
        min5 = new QPushButton(centralwidget);
        min5->setObjectName("min5");
        min5->setGeometry(QRect(320, 100, 80, 18));
        startti = new QPushButton(centralwidget);
        startti->setObjectName("startti");
        startti->setGeometry(QRect(70, 160, 80, 18));
        stoppi = new QPushButton(centralwidget);
        stoppi->setObjectName("stoppi");
        stoppi->setGeometry(QRect(330, 160, 80, 18));
        lblinfoText = new QLabel(centralwidget);
        lblinfoText->setObjectName("lblinfoText");
        lblinfoText->setGeometry(QRect(200, 70, 91, 16));
        vaihto1 = new QPushButton(centralwidget);
        vaihto1->setObjectName("vaihto1");
        vaihto1->setGeometry(QRect(90, 40, 80, 18));
        vaihto2 = new QPushButton(centralwidget);
        vaihto2->setObjectName("vaihto2");
        vaihto2->setGeometry(QRect(310, 40, 80, 18));
        barPlayer1 = new QProgressBar(centralwidget);
        barPlayer1->setObjectName("barPlayer1");
        barPlayer1->setGeometry(QRect(80, 10, 118, 23));
        barPlayer1->setValue(24);
        barPlayer2 = new QProgressBar(centralwidget);
        barPlayer2->setObjectName("barPlayer2");
        barPlayer2->setGeometry(QRect(310, 10, 118, 23));
        barPlayer2->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        sec120->raise();
        min5->raise();
        stoppi->raise();
        lblinfoText->raise();
        vaihto1->raise();
        vaihto2->raise();
        barPlayer1->raise();
        barPlayer2->raise();
        startti->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sec120->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        min5->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        startti->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        stoppi->setText(QCoreApplication::translate("MainWindow", "Stop Game", nullptr));
        lblinfoText->setText(QCoreApplication::translate("MainWindow", "Game ongoing", nullptr));
        vaihto1->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
        vaihto2->setText(QCoreApplication::translate("MainWindow", "Switch player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
