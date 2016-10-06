#include "PruebaQThreads.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PruebaQThreads w;
    w.show();
    return a.exec();
}
