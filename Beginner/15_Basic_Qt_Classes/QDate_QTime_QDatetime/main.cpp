#include <QCoreApplication>
#include <QDebug>
#include <QDate>
#include <QTime>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo("-----------DATE-------------");
    QDate today = QDate::currentDate();
    qInfo() << "Today: " << today;
    QDate tommorow = today.addDays(1);
    qInfo() << "Tommorow: " << tommorow;

    qInfo() << "ISODate: " << today.toString(Qt::DateFormat::ISODate);
    qInfo() << "TextDate: " << today.toString(Qt::DateFormat::TextDate);
    qInfo() << "RFC2822Date: " << today.toString(Qt::DateFormat::RFC2822Date);


    qInfo("-----------TIME-------------");
    QTime now = QTime::currentTime();
    qInfo() << "ISODate: " << now.toString(Qt::DateFormat::ISODate);
    qInfo() << "TextDate: " << now.toString(Qt::DateFormat::TextDate);
    qInfo() << "RFC2822Date: " << now.toString(Qt::DateFormat::RFC2822Date);

    qInfo("-----------DATETIME-------------");
    QDateTime current = QDateTime::currentDateTime();
    qInfo() << "Current date is " << current;
    QDateTime expire = current.addDays(30);
    qInfo() << "The program will expire on" << expire;

    return a.exec();
}
