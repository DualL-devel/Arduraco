#include "befehl.h"

using namespace std;


void Befehl::addAlias(string iAlias)
{
    aliase.push_back(iAlias);
}
bool Befehl::isThisCommand(string kandidat)
{
    if(find(aliase.begin(), aliase.end(), kandidat) != aliase.end()) {
        return true;
    }
    else {
        return false;
    }
}



