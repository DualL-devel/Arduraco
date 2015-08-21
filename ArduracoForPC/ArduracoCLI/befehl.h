#ifndef BEFEHL_H
#define BEFEHL_H

#include <vector>
#include <string>
#include <algorithm>

typedef std::string (*befehl_func) (std::vector<std::string>);

class Befehl
{
private:
    befehl_func m_exec;
    std::vector<std::string> alias;
    std::vector<std::string> args;
    
public:
    Befehl(std::string ursprung, befehl_func iExec, std::vector<std::string> iArgs);
    void neuerAlias(std::string neu);
    bool richtig(std::string kandidat);
    std::string ausfuehren();
};

#endif // BEFEHL_H
