#include <QCoreApplication>
#include <QDebug>
#include <QLoggingCategory>

//Declare a logging category
Q_DECLARE_LOGGING_CATEGORY(network);
Q_LOGGING_CATEGORY(network, "Network");


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Without category";

    qInfo(network) << "With category";


    return a.exec();
}
