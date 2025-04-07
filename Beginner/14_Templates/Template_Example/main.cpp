#include <QCoreApplication>

template<typename T>
void print(T value){
    qInfo() << "Value: " << value;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int val1=4;
    double val2=2.4;
    char val3='a';

    print(val1);
    print(val2);
    print(val3);

    print<int>(val1);
    print<QString>(QString("Hello World"));

    return a.exec();
}
