#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString, int> ages;
    ages.insert("Fethi", 25);
    ages.insert("Bryan", 44);
    ages.insert("Mehmet", 34);

    qInfo() << "Keys: " << ages.keys();
    qInfo() << "Values: " << ages.values();

    qInfo() << ages["Fethi"];

    ages.remove("Bryan");
    qInfo() << "Keys: " << ages.keys();
    qInfo() << "Values: " << ages.values();

    return a.exec();
}
