#ifndef LAPTOP_H
#define LAPTOP_H

#include <QObject>

class Laptop : public QObject
{
    Q_OBJECT
public:
    explicit Laptop(QObject *parent = nullptr, QString name = "", int weight = 0);

    ~Laptop();

    int weight;
    QString name;
    double asKilo();
    void print();

signals:
};

#endif // LAPTOP_H
