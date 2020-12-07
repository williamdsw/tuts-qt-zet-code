#include <QApplication>
#include "03_Padroes.h"

int main3(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Padroes janela;

    janela.resize(350, 450);

    janela.setWindowTitle("Utilizando Padrões");

    janela.show();

    return app.exec();
}
