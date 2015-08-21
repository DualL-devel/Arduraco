#include "befehl.h"

using namespace std;

Befehl::Befehl(string ursprung, befehl_func iExec, vector<string> iArgs)
{
    alias.push_back(ursprung);
    m_exec = iExec;
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
    return m_exec(args);
}
