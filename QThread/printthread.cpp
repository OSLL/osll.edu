#include "printthread.h"
#include <QtTest/QTest>
#include <QDebug>

PrintThread::PrintThread(QString prefix, int timeout)
{
    m_prefix = prefix;
    m_timeout = timeout;

}

void PrintThread::run()
{
    int i = 0;

    forever {
        QTest::qSleep(m_timeout);
        qDebug() << m_prefix << i++;
    }


}
