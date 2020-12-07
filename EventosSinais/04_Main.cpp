#include "04_Disconectando.h"
#include <QApplication>

int main4(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Disconectar janela;

    janela.resize(250, 150);

    janela.setWindowTitle("Utilizando disconnect()");

    janela.show();

    return app.exec();
}
