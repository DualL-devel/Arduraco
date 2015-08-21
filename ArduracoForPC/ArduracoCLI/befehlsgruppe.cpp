#include "befehlsgruppe.h"

using namespace std;

void Befehlsgruppe::neuerBefehl(string name, string* exec, vector<string> args)
{
    Befehl toAdd(name, exec, args);
    befehle.emplace(name, toAdd);
}

string Befehlsgruppe::ausfuehren(string befehl)
{
    return befehle.at(befehl).ausfuehren();
}
