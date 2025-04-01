#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    qInfo() << "Enter your age";
    cin >> age;
    qInfo() << "You are " << age << " years old.";

    qInfo() << "Information";
    qDebug() << "Debug";
    qCritical() << "Critical";
    qFatal() << "Crash!!";

    return a.exec();
}
