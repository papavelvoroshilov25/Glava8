#ifndef COFFEE_H
#define COFFEE_H

#include <QString>
#include "caffeinebeverage.h"

class Coffee: public CaffeineBeverage
{
private:
   QString getUserInput();
public:
    Coffee();
    void brew();
    void addCondiments();
    bool customerWantsCondiments();
};

#endif // COFFEE_H
