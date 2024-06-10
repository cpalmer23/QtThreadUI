#include <QtTest>

// add necessary includes here

class thetests : public QObject
{
    Q_OBJECT

public:
    thetests();
    ~thetests();

private slots:
    void test_case1();
};

thetests::thetests() {}

thetests::~thetests() {}

void thetests::test_case1() {}

QTEST_APPLESS_MAIN(thetests)

#include "tst_thetests.moc"
