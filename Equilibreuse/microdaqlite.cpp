#include "microdaqlite.h"

MicroDaqLite::MicroDaqLite()
{
    numSerie = EDRE_Query(0,BRDSERIALNO,0);
    qDebug()<<"Numero série : "<<numSerie;
}

QString MicroDaqLite::RecupNumSerie()
{
    return QString::number(numSerie);
}

int MicroDaqLite::EcrireSortieAnalogique(const int _canal, const float _tension)
{
    int controler = EDRE_DAWrite(numSerie, _canal, _tension*1000000);
    return controler;
}

int MicroDaqLite::EcrireSortieDigitale(const int _port, const bool _valeur)
{
    int diode = EDRE_DioWrite(numSerie,_port,_valeur);
    return diode;
}

int MicroDaqLite::LireEntreeDigitale(const int _port)
{
    int valeurReturn;
    unsigned long valeur;
    int verifEntre = EDRE_DioRead(numSerie,_port,&valeur);
    if(verifEntre == 0)
    {
        valeurReturn = 0;
    }
    else
    {
        valeurReturn = -1;
        qDebug()<<"Erreur LireEntreeDigitale";
    }
    return valeurReturn;
}
