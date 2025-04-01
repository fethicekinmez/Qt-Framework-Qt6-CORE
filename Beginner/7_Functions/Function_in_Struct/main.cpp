#include <QCoreApplication>

struct laptop{
    int weight;

    double asKilograms(){
        return weight * 0.45359237;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    laptop laptop1;
    laptop1.weight = 5; //Pounds

    qInfo() << "As Pounds: " << laptop1.weight;
    qInfo() << "As Kilograms: " << laptop1.asKilograms();


    return a.exec();
}
