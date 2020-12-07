#include "02_KeyPress.h"
#include <QApplication>

int main2(int argc, char *argv[])
{
    QApplication app(argc, argv);

    KeyPress janela;

    janela.resize(250, 150);

    janela.setWindowTitle("Utilizando KeyPress");

    janela.show();

    return app.exec();
}
