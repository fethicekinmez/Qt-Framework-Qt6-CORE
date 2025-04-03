#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>


void write(QFile &file){
    if(!file.isWritable()) return;



    QTextStream stream(&file);
    stream.setEncoding(QStringConverter::LastEncoding);

    stream.seek(file.size());
    for(int i=0; i<5; i++){
        stream << QString::number(i) << "-Item\r\n";
    }
    stream.flush();
    qInfo() << "File written";
}

void read(QFile &file){

    if(!file.isReadable()) return;

    QTextStream stream(&file);
    stream.seek(0);
    while(!stream.atEnd()){
        qInfo() << stream.readLine();
    }

    qInfo() << "File read";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt";
    QFile file(filename);

    if(file.open(QIODevice::ReadWrite)){

        QTextStream stream(&file);
        qInfo() << "Encoding: " << stream.encoding();

        write(file);

        read(file);

        file.close();

    }
    else{
        qInfo() << "ERROR: " << file.errorString();
    }

    return a.exec();
}
