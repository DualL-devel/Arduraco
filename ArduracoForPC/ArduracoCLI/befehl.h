#ifndef BEFEHL_H
#define BEFEHL_H

#include <string>
#include <vector>
#include <algorithm>

class Befehl
{
public:

    void addAlias(std::string iAlias);

    bool isThisCommand(std::string kandidat);

private:
    std::vector<std::string> aliase;

};

#endif // BEFEHL_H
