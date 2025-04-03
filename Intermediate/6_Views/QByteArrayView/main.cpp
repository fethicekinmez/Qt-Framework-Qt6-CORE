#include <QCoreApplication>
#include <QDebug>

void display(QByteArrayView &view){

    qInfo() << view;
    qInfo() << "Size" << view.size();
    qInfo() << "Data" << view.constData();
    qInfo() << "Slice" << view.sliced(3,6);
    qInfo() << "Contains" << view.contains("ello");
    qInfo() << "At" << view.at(1);
    qInfo() << "Index" << view[0];
    qInfo() << "Indexof" << view.indexOf('e');
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QByteArray bytes = "Hello World";

    QByteArrayView view(bytes);

    display(view);


    return a.exec();
}
