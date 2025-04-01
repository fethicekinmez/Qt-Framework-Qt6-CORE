#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include <QDebug>
#include "../Dynamic_Casting/car.h"

class RaceCar : public Car{
    Q_OBJECT
public:
    explicit RaceCar(QObject *parent = nullptr);
    bool superCharger = true;

    void goFast();

signals:
};

#endif // RACECAR_H
