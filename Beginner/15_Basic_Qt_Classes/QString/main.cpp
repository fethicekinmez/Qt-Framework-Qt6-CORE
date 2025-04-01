#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name = "Fethi Çekinmez";
    qInfo() << name;
    qInfo() << name.mid(1,4);
    qInfo() << name.insert(0, "Mr. ");
    qInfo() << name.split(" ");

    int index = name.indexOf(".");
    if(index > -1)
        qInfo() <<  name.remove(0, index+1).trimmed();

    QList list = name.split(" ");
    QString full_name = list[1] + "--" + list[2];
    qInfo() << full_name;


    return a.exec();
}
