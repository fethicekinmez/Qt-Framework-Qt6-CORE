#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Please enter your age: ";
    std::cin >> age;

    (age < 18 && age > 12) ? qInfo("You are a teenager") : qFatal("You are NOT a teenager");

    return a.exec();
}
