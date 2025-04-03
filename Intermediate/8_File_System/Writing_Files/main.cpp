#include <QCoreApplication>
#include <QIODevice>
#include <QFile>
#include <QDateTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt"; //look at build directory
    QFile file(filename);

    if(file.open(QIODevice::WriteOnly)){

        QString now = QDateTime::currentDateTime().toString();
        QByteArray data;
        data.append(now.toLocal8Bit());
        data.append("---");
        data.append("Hello Fethi");

        file.write(data);

        file.close();

        qInfo() << "Wrote to the file";

    }
    else{
        qInfo() << file.errorString();
    }

    return a.exec();
}
