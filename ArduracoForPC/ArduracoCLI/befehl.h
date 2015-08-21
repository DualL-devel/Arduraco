#ifndef BEFEHL_H
#define BEFEHL_H

#include <vector>
#include <string>
#include <algorithm>

class Befehl
{
private:
    std::string* exec;
    std::vector<std::string> alias;
    std::vector<std::string> args;
    
public:
    Befehl(std::string ursprung, std::string* iExec, std::vector<std::string> iArgs);
    void neuerAlias(std::string neu);
    bool richtig(std::string kandidat);
    std::string ausfuehren();
};

#endif // BEFEHL_H
