#include <QCoreApplication>
#include <QDebug>

void test(){
    qInfo() << "This is a test" ;
}

void test(QString str){
    qInfo() << "String: " << str;
}

void test(int a){
    qInfo() << "Integer: " << a;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();
    test(QString("Some string goes here"));
    test(234);

    return a.exec();
}
