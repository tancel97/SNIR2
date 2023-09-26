#ifndef MOTEUR_H
#define MOTEUR_H
#include "microdaqlite.h"
#include <string>

using namespace std;

class Moteur
{
private:
    string voieSortieAnalogique;
    float tensionCommandeMaxi;
    int canal;

public:
    Moteur(string _voieSortieAnalogique, MicroDaqLite _carteAcquisition, float _tensionCommandeMaxi);
    void FixerConsigne(int valeurVitesse);
};

#endif // MOTEUR_H
