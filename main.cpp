#include <QCoreApplication>
#include <iostream>
#include "tea.h"
#include "coffee.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Tea *tea = new Tea();
    Coffee *coffee = new Coffee();

   cout << "\nMaking tea..." << endl;
   tea->prepareRecipe();

   cout << "\nMaking coffee..." << endl;
   coffee->prepareRecipe();

    return a.exec();
}
