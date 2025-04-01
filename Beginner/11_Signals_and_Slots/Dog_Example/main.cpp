#include <QCoreApplication>
#include "owner.h"
#include "dog.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Dog dog;
    Owner owner;

    QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats);

    for(size_t i=0; i<10; i++){
        QObject::connect(&owner, &Owner::treats, &dog, &Dog::treats,Qt::UniqueConnection);
    }

    owner.giveSnaks();

    return a.exec();
}
