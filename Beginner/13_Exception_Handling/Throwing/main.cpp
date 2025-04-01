#include <QCoreApplication>
#include <iostream>
#include <QDebug>

bool isDiv(int value){
    int div = 0;
    qInfo() << "Enter a number: ";
    std::cin >> div;

    if(div == 1)
        return false;
    if(div == 0){
        qInfo() << "ZERO is entered";
        throw "Cannot divide by zero";
    }
    int result = value / div;
    qInfo() << "Result: " << result;
    return true;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int value = 44;

    do{

    }while(isDiv(value));

    return a.exec();
}
