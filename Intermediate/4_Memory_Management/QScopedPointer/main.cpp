#include <QCoreApplication>
#include <QScopedPointer>
#include "test.h"
#include <QDebug>

void func(){

    QScopedPointer<Test> sp(new Test());
    sp.data()->setObjectName("Test");

    qInfo() << "data: " << sp.data();
    qInfo() << "address: "<< &sp;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    func();


    return a.exec();
}
