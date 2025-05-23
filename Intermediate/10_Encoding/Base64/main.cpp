#include <QCoreApplication>
#include <QDebug>

QString makedata(){

    QString data;

    for(int i=0; i<10; i++){
        data.append("Hello World\r\n");
    }

    return data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = makedata();
    QByteArray bytes(data.toUtf8());
    QByteArray encoded = bytes.toBase64();
    QByteArray decoded = QByteArray::fromBase64(encoded);

    qInfo() << "Encoded: " << encoded;
    qInfo() << "----------------------------";
    qInfo() << "Decoded: " << decoded;


    return a.exec();
}
