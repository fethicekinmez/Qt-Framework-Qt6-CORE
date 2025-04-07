#include <QCoreApplication>
#include <QDebug>
#include "logger.h"
#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Logger::attach();

    qInfo() << "Logging into " << Logger::filename;

    Test test;
    test.testing();

    Logger::logging = false;
    qInfo() << "This will not be logged";
    Logger::logging = true;

    qInfo() << "This is a info";


    return a.exec();
}
