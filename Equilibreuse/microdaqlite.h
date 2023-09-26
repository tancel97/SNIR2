#ifndef MICRODAQLITE_H
#define MICRODAQLITE_H

#include "edrapi.h"
#include "errors.h"
#include "query.h"
#include <QDebug>
#include <QString>

class MicroDaqLite
{
public:
    MicroDaqLite();
    QString RecupNumSerie();
    int EcrireSortieAnalogique(const int _canal, const float _tension);
    int EcrireSortieDigitale(const int _port, const bool _valeur);
    int LireEntreeDigitale(const int _port);


private:
    quint32 numSerie;
};


#endif // MICRODAQLITE_H
