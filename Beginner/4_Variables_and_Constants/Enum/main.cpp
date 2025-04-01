#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    enum Color {red, green, blue = 86};

    Color myColor = Color::green;

    qInfo() << myColor;

    myColor = Color::blue;

    qInfo() << myColor;


    return a.exec();
}
