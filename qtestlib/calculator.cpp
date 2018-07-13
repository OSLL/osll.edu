#include "calculator.h"

Calculator::Calculator(QObject *parent) : QObject(parent), m_memory(0)
{

}

int Calculator::sum(int a, int b)
{
    return a+b;
}

int Calculator::sub(int a, int b)
{
    return a-b;
}

void Calculator::putmem(int a)
{
    m_memory = a;
}

int Calculator::getmem()
{
    return m_memory;
}

