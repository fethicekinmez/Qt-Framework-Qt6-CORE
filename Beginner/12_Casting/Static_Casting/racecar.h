#ifndef RACECAR_H
#define RACECAR_H

#include <QObject>
#include "car.h"
#include <QDebug>

class RaceCar : public Car
{
    Q_OBJECT
public:
    explicit RaceCar(QObject *parent = nullptr);

    bool superCharger = true;

    void goFast();

signals:
};

#endif // RACECAR_H
