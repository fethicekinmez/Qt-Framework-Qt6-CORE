#include <QCoreApplication>
#include "test.h"

void notification(){

    Test mom;
    Test child;
    mom.setObjectName("Mom");
    child.setObjectName("Child");

    QObject::connect(&mom, &Test::alarm, &child, &Test::wake);

    mom.testing();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    notification();

    return a.exec();
}
