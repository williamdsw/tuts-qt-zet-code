#include "01_Click.h"
#include <QApplication>

int main1(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Clique janela;

    janela.resize(250, 150);

    janela.setWindowTitle("Utilizando Click do Botão");

    janela.show();

    return app.exec();
}
