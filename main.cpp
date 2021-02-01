#include "networkcommu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetWorkCommu w;
    w.show();

    return a.exec();
}
