#include <QCoreApplication>
#include <QString>
#include <QStringView>

void display(QStringView &view){

    qInfo() << view;
    qInfo() << "Size" << view.size();
    qInfo() << "Data" << view.constData();
    qInfo() << "Slice" << view.sliced(3,6);
    qInfo() << "Contains" << view.contains(QString("ello"));
    qInfo() << "Count" << view.count('l');
    qInfo() << "At" << view.at(1);
    qInfo() << "Index" << view[0];
    qInfo() << "Indexof" << view.indexOf('e');

}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString data = "Hello world how are you today?";

    QStringView view(data);
    display(view);

    return a.exec();
}
