#include "test.h"

Test::Test(QObject *parent, QString name) : QObject{parent}{
    setObjectName(name);
}

Test::~Test(){
    qInfo() << "Deconstructed";
}
