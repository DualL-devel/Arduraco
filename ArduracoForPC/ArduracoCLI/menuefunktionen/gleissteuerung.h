#ifndef GLEISSTEUERUNG_H
#define GLEISSTEUERUNG_H
#include <string>
#include <vector>
#include <iostream>
#include "../datenstruktur/gleissystem.h"

std::string gleissteuerung(std::vector<std::string> args, Gleissystem* system);

#endif // GLEISSTEUERUNG_H