#ifndef ZUG_H
#define ZUG_H

#include "gleis.h"

class Gleis;

class Zug
{
public:
  Zug(unsigned int iAdresse);
  void setGeschwindigkeit(int ziel);
  int getGeschwindigkeit();
  
  
private:
  int adresse;
  Gleis* aktuell;
  int geschwindigkeit;
};

#endif // ZUG_H
