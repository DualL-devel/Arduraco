#ifndef GLEIS_H
#define GLEIS_H

class Zug;

#include "reed.h"

class Gleis
{
public:
    Gleis(Gleis* iDavor, Gleis* iDanach, int iKontaktPin);
    bool sperren(Zug* kandidat);
    bool freigeben();
    Zug* getBelegung();

private:
    Zug* belegenderZug;

    Gleis* davor;
    Gleis* danach;

    Reed gleiskontakt;

};

#endif // GLEIS_H
