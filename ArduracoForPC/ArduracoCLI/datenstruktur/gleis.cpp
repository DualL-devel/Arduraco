#include "gleis.h"

#include "reed.h"
#include "zug.h"

Gleis::Gleis(Gleis* iDavor, Gleis* iDanach, int iKontaktPin) :
    gleiskontakt(iKontaktPin)
{
    davor = iDavor;
    danach = iDanach;
}
bool Gleis::freigeben()
{
    if(belegenderZug != nullptr)
    {
        belegenderZug = nullptr;
        return true;
    }
    else
        return false;
}
bool Gleis::sperren(Zug* kandidat)
{
    if(belegenderZug == nullptr)
    {
        belegenderZug = kandidat;
        return true;
    }
    else
        return false;
}
Zug* Gleis::getBelegung()
{
    return belegenderZug;
}
