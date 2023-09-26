#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QScriptEngine>
#include <QGridLayout>
#include <QPushButton>
#include <QLineEdit>
#include <QProgressBar>
#include <QLabel>
#include <QSpinBox>
#define NBLIGNES 10
#define NBCOLONNES 6
#define NBTOUCHES 60

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    void InitialiserGrilleIhm();
    void PerduIhm();
    void InitialiserGrille(int nbBombes);
    void MajCaseVoisine(int ligne,int colonne);
    bool VerifierVictoire();
    void GagnerIhm();

private slots:
    void on_pushButtonJouer_clicked();
    void onQPushButton_clicked();
private:
    Ui::Widget *ui;
    int grille[NBLIGNES][NBCOLONNES];
    QGridLayout *plateau;
    QHBoxLayout *alignementBoutton;
    QPushButton *tab[NBTOUCHES];
    int nbMines;
    QProgressBar *progressBar;
    QPushButton *pushButtonJouer;
    QPushButton *pushButtonQuitter;
    QLabel *labelNbMine;
    QSpinBox *spinBoxNbMine;
    int nombreMinesAlentour;

};

#endif // WIDGET_H
