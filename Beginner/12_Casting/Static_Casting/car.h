#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QDebug>

class Car : public QObject{
    Q_OBJECT
public:
    explicit Car(QObject *parent = nullptr);

    int tires = 4;
    QString color = "White";

    void drive();
    void stop();

signals:
};

#endif // CAR_H
