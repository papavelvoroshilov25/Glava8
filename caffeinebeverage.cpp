#include "caffeinebeverage.h"

CaffeineBeverage::CaffeineBeverage()
{

}

void CaffeineBeverage::prepareRecipe() {
   boilWater();
   brew();
   pourInCup();
   if (customerWantsCondiments()) {
        addCondiments();
    }
}

void CaffeineBeverage::boilWater() {
   cout << "Boiling Water" << endl;
}


void CaffeineBeverage::pourInCup() {
   cout << "Adding Sugar and Milk" << endl;
}

bool CaffeineBeverage::customerWantsCondiments() {
   return true;
}






