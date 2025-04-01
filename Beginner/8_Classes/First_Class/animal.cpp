#include "animal.h"
#include <QDebug>

Animal::Animal(QObject *parent) : QObject{parent} {
    qDebug() << this << " is constructed";
}

void Animal::speak(QString message){
    qDebug() << this << message;

}
