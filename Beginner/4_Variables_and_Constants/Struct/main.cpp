#include <QCoreApplication>

enum Colors {red, green, blue};

struct Product{
    int weight;
    int value;
    Colors color;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Product laptop;
    laptop.color = Colors::blue;
    laptop.value = 540;
    laptop.weight = 3;

    qInfo() << "Size: " << sizeof(laptop);
    qInfo() << laptop.color << " " << laptop.value << " " << laptop.weight;

    return a.exec();
}
