#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList names{"Bryan"};
    names << "Tammy" << "Rango";
    names.append("Heater");

    qInfo() << names;
    names.replaceInStrings("a", "@");
    qInfo() << names;

    names.sort();
    qInfo() << names;

    QString people = names.join(",");
    qInfo() << people;


    return a.exec();
}
