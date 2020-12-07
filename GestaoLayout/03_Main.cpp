#include "03_HBoxLayout.h"
#include <QApplication>

int main3(int argc, char *argv[])
{
    QApplication app(argc, argv);

    CaixaHorizontal janela;

    janela.resize(240, 230);

    janela.setWindowTitle("Utilizando QHBoxLayout");

    janela.show();

    return app.exec();
}
