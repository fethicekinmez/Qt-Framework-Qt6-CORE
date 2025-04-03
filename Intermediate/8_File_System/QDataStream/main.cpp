#include <QCoreApplication>
#include <QFile>
#include <QDebug>
#include <QDataStream>

bool write(QString filename){

    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly)){
        qInfo() << file.errorString();
        return false;
    }

    QDataStream stream(&file);
    stream.setVersion(QDataStream::Qt_6_8);

    int m_int = 9;
    double m_double = 9.9;
    QString m_string = "Nine";

    stream << m_int << m_double << m_string;

    if(!file.flush()){
        qInfo() << file.errorString();
        file.close();
        return false;
    }


    file.close();
    qInfo() << "File written";

    return true;

}

bool read(QString filename){

    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly)){
        qInfo() << file.errorString();
        return false;
    }

    QDataStream stream(&file);
    if(stream.version() != QDataStream::Qt_6_8){
        qInfo() << "Wrong file version";
        file.close();
        return false;
    }

    int m_int;
    double m_double;
    QString m_string;

    stream >> m_int;
    stream >> m_double;
    stream >> m_string;

\
    file.close();

    qInfo() << "File read";

    qInfo() << "Int: " << m_int << " Double: " << m_double << " String:" << m_string;

    return true;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "test.txt";


    if(write(filename))
        read(filename);



    return a.exec();
}
