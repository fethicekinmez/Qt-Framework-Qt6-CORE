#include "test.h"

Test::Test(QObject *parent) : QObject{parent}{
    qInfo() << this << " is constructed";
}

void Test::testing(){
    qWarning() << "This is a warning";

}
