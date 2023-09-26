#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QTimer>
#include "microdaqlite.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_checkBoxLed1_clicked(bool checked);

    void on_pushButtonMoteur_clicked();

    void on_dialPourcentage_valueChanged(int value);

    void on_pushButtonLancerMoteur_clicked();

    void on_pushButtonArreterMoteur_clicked();

    void qtPause(int millisecondes);

private:
    Ui::MainWindow *ui;
    MicroDaqLite laCarteDacquisition;
    int valeurDial;

};

#endif // MAINWINDOW_H
