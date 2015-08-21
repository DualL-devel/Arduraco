#include "befehl.h"

using namespace std;

Befehl::Befehl(string ursprung, string* iExec, vector<string> iArgs)
{
    alias.push_back(ursprung);
    exec = iExec;
    args = iArgs;
}

void Befehl::neuerAlias(string neu)
{
    alias.push_back(neu);
}

bool Befehl::richtig(string kandidat)
{
    if(find(alias.begin(), alias.end(), kandidat) != alias.end()) {
        return true;
    }
    else {
        return false;
    }
}
string Befehl::ausfuehren()
{
    return "";//exec(args);
}



