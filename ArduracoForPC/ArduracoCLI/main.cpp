/*
 * Dies ist das Programm, dass am RaspPi (oder PC) läuft und von dem man die Abläufe auf der Anlage steuert.
 */

// ===== includes =====
#include <iostream>     // Ein- und Ausgabe
#include <string>
#include <sstream>      // wird benötigt, um die Eingaben in Tokens zu zerlegen

#include "datenstruktur/gleissystem.h"          // die Datenstruktur, die das Programm verwendet
// ===== includes: Ende =====

using namespace std;


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
    
    Gleissystem anlage; // neues Objekt der Klasse 'Gleissystem' wird erstellt
    vector<string> eingabe;
    
    cout << "========================" << endl;         // Header
    cout << " Arduraco for PC (CLI) " << endl;
    cout << "========================" << endl << endl;

    while(true)
    {
        string kompletteEingabe;

        cout << " >>> ";
        getline(cin, kompletteEingabe);

       
        cout << "Ungueltige Eingabe!" << endl;
    }
    return 0;
}


