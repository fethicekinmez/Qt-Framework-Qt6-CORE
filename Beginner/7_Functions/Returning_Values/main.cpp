#include <QCoreApplication>

QObject* get_Object(QString name){
    QObject* o = new QObject(); // On the HEAP
    o->setObjectName(name);
    return o; // Now will be deleted!!
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QObject* o1 = get_Object(QString("Object-1"));

    qInfo() << o1->objectName();
    qInfo() << o1;

    delete o1;

    return a.exec();
}
