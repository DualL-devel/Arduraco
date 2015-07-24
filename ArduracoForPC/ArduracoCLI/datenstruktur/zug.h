#ifndef ZUG_H
#define ZUG_H

#include "gleis.h"

class Gleis;

class Zug
{
public:
  Zug(unsigned int iAdresse);
  void setGeschwindigkeit(unsigned int ziel);
  unsigned int getGeschwindigkeit();
  
  
private:
  unsigned int adresse;
  Gleis* aktuell;
  int geschwindigkeit;
};

#endif // ZUG_H
