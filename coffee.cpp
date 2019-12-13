#include "coffee.h"

Coffee::Coffee()
{

}

void Coffee::brew()
{
    cout << "Dripping Coffee through filter" << endl;
}

void Coffee::addCondiments() {
     cout << "Adding Sugar and Milk" << endl;
}

bool Coffee::customerWantsCondiments() {
        QString answer = getUserInput();
        if (answer.toLower().startsWith("y")) {
            return true;
        } else {
            return false;
        }
    }

QString Coffee::getUserInput() {
    char answer = NULL;

    cout << "Would you like milk and sugar with your coffee (y/n)" << endl;
    cin >> answer;

    if (answer == NULL) {
        return "no";
    }
    return QString(answer);
}

