#include <QString>
#include <QtTest>

#include "calculator.h"

class CalculatorTest : public QObject
{
    Q_OBJECT

public:
    CalculatorTest();

private Q_SLOTS:
    void testSum();
    void testSub();
    void testMem();
};

CalculatorTest::CalculatorTest()
{
}

void CalculatorTest::testSum()
{
    Calculator c;

    QVERIFY2(c.sum(3,5)==8, "Failure");
}

void CalculatorTest::testSub()
{
    Calculator c;

    QVERIFY2(c.sub(3,5)==-2, "Failure");
}

void CalculatorTest::testMem()
{
    Calculator c;

    c.putmem(4);
    QVERIFY2(c.getmem()==4, "Failure");
}

QTEST_APPLESS_MAIN(CalculatorTest)

#include "tst_calculatortest.moc"
