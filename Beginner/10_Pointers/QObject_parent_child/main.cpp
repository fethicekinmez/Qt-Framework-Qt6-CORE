#include <QCoreApplication>
#include "animal.h"
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Person *parent = new Person(&a);
    parent->mamal = new Animal(parent);

    delete parent;


    return a.exec();
}
