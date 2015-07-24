#include "licht.h"


Licht::Licht(int iPin)
{
  pin = iPin;
}
bool Licht::getStatus()
{
  return status;
}
void Licht::setStatus(bool ziel)
{
  // fehlt noch
}


