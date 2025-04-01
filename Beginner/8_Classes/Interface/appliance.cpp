#include "appliance.h"
#include <QDebug>

Appliance::Appliance(QObject *parent) : QObject{parent}{
    qInfo() << this << " is constructed!";
}


bool Appliance::grill(){
    return true;
}

bool Appliance::cook(){
    return true;
}

bool Appliance::freeze(){
    return true;
}
