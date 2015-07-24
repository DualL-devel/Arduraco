#ifndef LICHT_H
#define LICHT_H

class Licht
{
public:
    Licht(int iPin);
    bool getStatus();
    void setStatus(bool ziel);
private:
    bool status;
    int pin;
};

#endif // LICHT_H
