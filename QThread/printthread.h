#ifndef PRINTTHREAD_H
#define PRINTTHREAD_H

#include <QObject>
#include <QThread>

class PrintThread : public QThread
{
    QString m_prefix;
    int     m_timeout;

public:
    PrintThread(QString prefix, int timeout);

protected:
    void run()    override;
};

#endif // PRINTTHREAD_H
