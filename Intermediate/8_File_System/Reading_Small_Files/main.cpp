#include <QCoreApplication>
#include <QFile>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt";
    QFile file(filename);

    qInfo() << "Exists: " << file.exists();

    if(file.open(QIODevice::ReadOnly)){
        qInfo() << file.readAll(); // small files only

        file.close();

    }
    else{
        qInfo() << file.errorString();
    }


    return a.exec();
}
