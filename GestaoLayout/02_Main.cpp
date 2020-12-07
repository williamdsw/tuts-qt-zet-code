#include "02_VBoxLayout.h"
#include <QApplication>

int main2(int argc, char *argv[])
{
    QApplication app(argc, argv);

    CaixaVertical janela;

    janela.resize(240, 230);

    janela.setWindowTitle("Utilizando QVBoxLayout");

    janela.show();

    return app.exec();
}
