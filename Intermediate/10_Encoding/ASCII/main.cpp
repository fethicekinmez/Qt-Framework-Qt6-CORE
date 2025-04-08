#include <QCoreApplication>
#include <QDebug>
#include <QFile>

//https://www.asciitable.com/

QByteArray makedata(){
    QByteArray data;
    for(int i=0; i<10; i++){
        data.append(72);
        data.append(101);
        data.append(108);
        data.append(108);
        data.append(111);
        data.append(13); // \r
        data.append(10); // \n

    }
    return data;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray data = makedata();

    qInfo() << data;

    QFile file("data.txt");
    if(file.open(QIODevice::WriteOnly)){
        file.write(data);
        file.close();
    }

    return a.exec();
}
