/*
 * Dies ist das Programm, dass am RaspPi (oder PC) läuft und von dem man die Abläufe auf der Anlage steuert.
 */

// ===== includes =====
#include <iostream>     // Ein- und Ausgabe
#include <string>
#include <sstream>      // wird benötigt, um die Eingaben in Tokens zu zerlegen

#include "datenstruktur/gleissystem.h"          // die Datenstruktur, die das Programm verwendet

#include "befehl.h"
// ===== includes: Ende =====

using namespace std;

// registrieren der Befehle

Gleissystem anlage; // neues Objekt der Klasse 'Gleissystem' wird erstellt
unordered_map<string, Befehl> befehle;

void neuerEintrag(string name, string ursprung) {
    Befehl toAdd;
    toAdd.addAlias(ursprung);
    befehle.emplace(name, toAdd);

}

string gleissteuerung(vector<string>* args) {

}
string lichtsteuerung(vector<string>* args) {

}
string zugsteuerung(vector<string>* args) {

}

vector<string> &split(const string &s, char delim, vector<string> &elems) {     // Funktion zum Aufteilen eines Strings in Tokens (in einen vorhandenen vector)
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

vector<string> split(const string &s, char delim) {     // Funktion zum Aufteilen eines String in Tokens
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}

int main() {    // Hauptprogramm
    cout << "========================" << endl;         // Header
    cout << " Arduraco for PC (CLI) " << endl;
    cout << "========================" << endl << endl;


    neuerEintrag("beenden", "Beenden");
    neuerEintrag("zug", "Zug");
    neuerEintrag("gleis", "Gleis");
    neuerEintrag("licht", "Licht");
    neuerEintrag("hilfe", "Hilfe");


    {   // registrieren der Aliase
        befehle["beenden"].addAlias("beenden");
        befehle["beenden"].addAlias("exit");
        befehle["beenden"].addAlias("quit");
        befehle["beenden"].addAlias("Exit");
        befehle["beenden"].addAlias("q");
        befehle["beenden"].addAlias("Q");

        befehle["zug"].addAlias("train");
        //befehle["zug"].addAlias("zug");
        befehle["zug"].addAlias("Z");
        befehle["zug"].addAlias("z");

        befehle["hilfe"].addAlias("?");
        befehle["hilfe"].addAlias("help");
        
        befehle["gleis"].addAlias("gleis");
        befehle["gleis"].addAlias("track");
        befehle["gleis"].addAlias("g");
        befehle["gleis"].addAlias("G");
    }

    while(true)
    {
        string kompletteEingabe;

        cout << " >>> ";
        getline(cin, kompletteEingabe);

        if(befehle["beenden"].isThisCommand(kompletteEingabe))
        {
            cout << " --> Programm wird beendet." << endl;
            break;
        }
        vector<string> eingabe = split(kompletteEingabe, ' ');
        if(befehle["zug"].isThisCommand(eingabe[0]))
        {
            cout << "Zug!!!" << endl;
            zugsteuerung(&eingabe);
            continue;
        }
        if(befehle["licht"].isThisCommand(eingabe[0]))
        {
            lichtsteuerung(&eingabe);
            continue;
        }
        if(befehle["gleis"].isThisCommand(eingabe[0]))
        {
            gleissteuerung(&eingabe);
            continue;
        }
        if(befehle["hilfe"].isThisCommand(eingabe[0]))
        {
            cout << "Dies ist die Hilfe!" << endl;
            continue;
        }
        cout << "Ungueltige Eingabe!" << endl;
    }
    return 0;
}


