#include "calcmini.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    calcmini w;
    w.show();

    return a.exec();
}
