#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSet<QString> names;

    names << "John" << "Ahmet" << "Fethi";
    names.insert("Bryan");

    foreach (QString var, names) {
        qInfo() << var;
    }

    qInfo() << "is contains: " << names.contains("John"); // very fast to search

    return a.exec();
}
