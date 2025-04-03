#include <QCoreApplication>
#include <QIODevice>
#include <QBuffer>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QBuffer buffer;
    if(buffer.open(QIODevice::OpenModeFlag::ReadWrite)){

        QByteArray data("Hello, this is buffer data");

        for(int i=0; i<5; i++){
            buffer.write(data);
            buffer.write("\r\n");
        }

        //buffer.flush();
        buffer.seek(0);
        qInfo() << buffer.readAll();
    }
    else{
        qInfo() << "Cannot be opened";
    }

    return a.exec();
}
