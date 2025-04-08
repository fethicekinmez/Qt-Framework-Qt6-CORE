#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QRandomGenerator>

QString makedata(){
    QString data;
    data.append("Unicode test\r\n");

    for(int i=0; i<10; i++){
        int number = QRandomGenerator::global()->bounded(1000);
        data.append(QChar(number));
    }
    data.append("\r\n");

    return data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = makedata();
    qInfo() << data;

    QFile file("data.txt");
    if(file.open(QIODevice::WriteOnly)){
        QTextStream stream(&file);
        stream.setEncoding(QStringConverter::Encoding::Utf16);
        stream << data;
        stream.flush();

        file.close();
    }


    return a.exec();
}
