#include <QCoreApplication>
#include <QDebug>
#include "test.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString *description = new QString("Hello, this is a test");
    qInfo() << description << " --> " << *description;

    std::unique_ptr<Test> t(new Test());
    t->func();


    return a.exec();
}
