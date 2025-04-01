#include <QCoreApplication>
#include <QDebug>
#include "laptop.h"

int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);

    Laptop laptop1;
    laptop1.weight = 3;
    laptop1.name = "MacBook Pro";

    qInfo() << "Weight in kilogram: " << laptop1.asKilo();

    laptop1.print();

    Laptop laptop2(nullptr, "Windows", 2);
    laptop2.print();


    return a.exec();
}
