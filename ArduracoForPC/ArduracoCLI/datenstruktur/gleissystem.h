#ifndef GLEISSYSTEM_H
#define GLEISSYSTEM_H

#include <unordered_map>
#include <vector>
#include <string>

#include "zug.h"
#include "gleis.h"
#include "licht.h"

class Gleissystem
{
public:
  Gleissystem();
  
  void neuesGleis(int idDavor, int idDanach, int iKontaktPin);
  void neuerZug(std::string iName, int iAdresse);
  void neuesLicht(std::string iName, int iPin);
  
  std::vector<Gleis> gleise;
  std::unordered_map<std::string, Zug> zuege;
  std::unordered_map<std::string, Licht> lichter;
  
};

#endif // GLEISSYSTEM_H
