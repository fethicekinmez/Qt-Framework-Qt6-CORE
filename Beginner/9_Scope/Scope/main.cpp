#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

void test(){
    int number = 4;
    qInfo() << "Scope 3: " << &number << " -> " << number;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int number = 90;
    qInfo() << "Scope 1: " << &number << " -> " << number;

    bool ok = true;
    if(ok){
        number = 1; // usesis parent scope decleration
        // int number = 1; //creates different variable
        qInfo() << "Scope 2: " << &number << " -> " << number;
    }

    test();
    qInfo() << "Scope4: " << &number << " -> " << number;

    Animal cat(&a, "Kitty");
    qInfo() << "Animal: " << &cat.name << " -> " << cat.name;


    return a.exec();
}
