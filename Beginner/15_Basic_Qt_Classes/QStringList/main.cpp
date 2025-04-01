#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString string = "Hello World!, The end is near.";
    QStringList qstrlst= string.split(" ");
    qInfo() << qstrlst;

    QString str;

    foreach (str, qstrlst){
        qInfo() << str;
    }

    qstrlst.sort(Qt::CaseInsensitive);
    qInfo() << qstrlst;

    QString myVar = "Hello";
    if(qstrlst.contains(myVar)){
        int index = qstrlst.indexOf(myVar);
        qInfo() << qstrlst.value(index) << " is at " << index;
    }


    return a.exec();
}
