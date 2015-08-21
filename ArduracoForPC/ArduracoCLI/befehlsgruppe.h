#ifndef BEFEHLSGRUPPE_H
#define BEFEHLSGRUPPE_H

#include <string>
#include <unordered_map>

#include "befehl.h"

class Befehlsgruppe
{
private:
    std::unordered_map<std::string, Befehl> befehle;
    
public:
    void neuerBefehl(std::string name, std::string* exec, std::vector<std::string> args);
    std::string ausfuehren(std::string befehl);
};

#endif // BEFEHLSGRUPPE_H
