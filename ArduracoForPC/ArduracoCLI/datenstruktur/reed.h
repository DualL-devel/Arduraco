#ifndef REED_H
#define REED_H

class Reed
{
public:
  Reed(int iPin);
 
  bool getStatus();
  
private:
  int pin;
};

#endif // REED_H
