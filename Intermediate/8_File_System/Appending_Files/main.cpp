#include <QCoreApplication>
#include <QIODevice>
#include <QFile>
#include <QDateTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt";
    QFile file(filename);
    if(file.open(QIODevice::Append)){

        QString now = QDateTime::currentDateTime().toString();
        QByteArray data;
        data.append(now.toLocal8Bit());
        data.append("----");
        data.append("Hello Fethi");

        file.write(data);

        file.close();

        qInfo("Data is appended to the file");

    }
    else{
        qInfo() << file.errorString();
    }


    return a.exec();
}
