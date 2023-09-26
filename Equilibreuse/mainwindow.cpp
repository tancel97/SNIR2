#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEditNumeroSerie->setText(laCarteDacquisition.RecupNumSerie());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBoxLed1_clicked(bool checked)
{
    laCarteDacquisition.EcrireSortieDigitale(0,checked);
}

void MainWindow::on_pushButtonMoteur_clicked()
{
    QString tension = ui->lineEditValeurTension->text();
    laCarteDacquisition.EcrireSortieAnalogique(1,tension.toFloat()*1000000);
}

void MainWindow::on_dialPourcentage_valueChanged(int value)
{
    ui->lcdNumber->display(QString::number(value));
    valeurDial = value;
    if(value < 60)
    {
        ui->dialPourcentage->setStyleSheet("background-color : white");
    }
    if(value >= 70 && value <= 90)
    {
        ui->dialPourcentage->setStyleSheet("background-color : green");
    }
    if(value >90)
    {
        ui->dialPourcentage->setStyleSheet("background-color : red");
    }
}

void MainWindow::on_pushButtonLancerMoteur_clicked()
{
    double tension;
    double valeurPourcentage;
    ui->pushButtonLancerMoteur->setText("Fixer consigne");
    double valeurPourcentageInit = ui->lcdNumber->value();
    if(valeurPourcentageInit < 60)
    {
        tension = (valeurPourcentageInit*0.0389);
        laCarteDacquisition.EcrireSortieAnalogique(1,tension);
    }
    if(valeurPourcentageInit >= 70 && valeurPourcentageInit <= 90)
    {
        valeurPourcentage = 30;
        tension = (valeurPourcentage*0.0389);
        laCarteDacquisition.EcrireSortieAnalogique(1,tension);
        qtPause(5000);
        valeurPourcentage = valeurPourcentageInit;
        tension = (valeurPourcentage*0.0389);
        laCarteDacquisition.EcrireSortieAnalogique(1,tension);
    }
    if(valeurPourcentageInit >90)
    {
        valeurPourcentage = 30;
        tension = (valeurPourcentage*0.0389);
        laCarteDacquisition.EcrireSortieAnalogique(1,tension);
        qtPause(5000);
        valeurPourcentage = 60;
        tension = (valeurPourcentage*0.0389);
        laCarteDacquisition.EcrireSortieAnalogique(1,tension);
        qtPause(5000);
        valeurPourcentage = valeurPourcentageInit;
        tension = (valeurPourcentage*0.0389);
        laCarteDacquisition.EcrireSortieAnalogique(1,tension);
    }
}

void MainWindow::on_pushButtonArreterMoteur_clicked()
{
    ui->pushButtonLancerMoteur->setText("Lancer Moteur");
    laCarteDacquisition.EcrireSortieAnalogique(1,0);
    ui->dialPourcentage->setValue(0);
}

void MainWindow::qtPause(int millisecondes)
{
    QTimer timer;
    timer.start(millisecondes);
    QEventLoop loop;
    QObject::connect(&timer, SIGNAL(timeout()), &loop, SLOT(quit()));
    loop.exec();
}
