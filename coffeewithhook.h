#ifndef COFFEEWITHHOOK_H
#define COFFEEWITHHOOK_H

#include "caffeinebeverage.h"


class CoffeeWithHook: public CaffeineBeverage

public:
    CoffeeWithHook();
    void brew();
    void addCondiments();
    QString toString();
};

#endif // COFFEEWITHHOOK_H
