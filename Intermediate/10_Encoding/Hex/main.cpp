#include <QCoreApplication>
#include <QDebug>

QString makedata(){
    QString data;

    for(int i=0; i<10; i++){
        data.append("Hello World");
    }
    return data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = makedata();
    QByteArray bytes(data.toUtf8());
    QByteArray encoded = bytes.toHex();
    QByteArray decoded = QByteArray::fromHex(encoded);

    qInfo() << encoded;
    qInfo() << "-----------------";
    qInfo() << decoded;

    return a.exec();
}
