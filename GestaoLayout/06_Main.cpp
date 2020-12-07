#include "06_GridLayout.h"
#include <QApplication>

int main6(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Calculadora frm;

    frm.move(300, 300);

    frm.setWindowTitle("Calculadora");

    frm.show();

    return app.exec();
}
