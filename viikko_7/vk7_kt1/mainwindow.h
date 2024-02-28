#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    short player1Time = 0;
    short player2Time = 0;
    short gameTime;
    short currentPlayer;
    QTimer *gameTimer;
    void updateProgressBar();
    void updateDisplayText(QString);
    void resetTime();

public slots:
    void timeout();

private slots:
    void on_btnsec120_clicked();
    void on_btnmin5_clicked();
    void on_btnstartti_clicked();
    void on_btnstoppi_clicked();
    void on_btnvaihto1_clicked();
    void on_btnvaihto2_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
