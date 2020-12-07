#include "03_MoveEvent.h"
#include <QApplication>

int main3(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Mover janela;

    janela.resize(250, 150);

    janela.setWindowTitle("Utilizando Move Event");

    janela.show();

    return app.exec();
}
