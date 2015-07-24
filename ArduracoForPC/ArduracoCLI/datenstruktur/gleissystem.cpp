#include "gleissystem.h"

using namespace std;

Gleissystem::Gleissystem()
{

}
void Gleissystem::neuerZug(string iName, int iAdresse)
{
    zuege.emplace(iName, Zug(iAdresse));
}
void Gleissystem::neuesGleis(int idDavor, int idDanach, int iKontaktPin)
{
    Gleis* davor = &gleise.at(idDavor);
    Gleis* danach = &gleise.at(idDanach);
    Gleis toAdd(davor, danach, iKontaktPin);
    gleise.push_back(toAdd);
}
void Gleissystem::neuesLicht(string iName, int iPin)
{
    lichter.emplace(iName, Licht(iPin));
}

