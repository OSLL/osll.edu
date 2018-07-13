#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QObject>

class Calculator : public QObject
{
    Q_OBJECT

    int m_memory;

public:
    explicit Calculator(QObject *parent = 0);

    int sum(int a, int b);
    int sub(int a, int b);

    void putmem(int a);
    int getmem();

signals:

public slots:
};

#endif // CALCULATOR_H
