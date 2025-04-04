#include <QCoreApplication>
#include "dog.h"
#include "cat.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    dog.chase();

    Cat cat;

    QObject::connect(&dog, &Dog::bark, &cat, &Cat::scared);
    QObject::connect(&cat, &Cat::run, &dog, &Dog::chase);

    emit dog.bark();

    return a.exec();
}
