#include <QCoreApplication>
#include "car.h"
#include "../QObject_Cast/racecar.h"
#include "../QObject_Cast/feline.h"

void testDrive(Car* obj){
    obj->drive();
    obj->stop();
}

void race(RaceCar* obj){
    obj->drive();
    obj->goFast();
    obj->stop();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    RaceCar* player1 = new RaceCar(&a);
    testDrive(player1); // implicit conversion

    Car* player2 = dynamic_cast<Car*>(player1);
    if(player2)
        testDrive(player2);

    Feline* cat = new Feline(&a);
    cat->meow();

    Car* catcar = dynamic_cast<Car*>(cat); // NO Conversion is made
    if(catcar)
        testDrive(catcar);

    return a.exec();
}
