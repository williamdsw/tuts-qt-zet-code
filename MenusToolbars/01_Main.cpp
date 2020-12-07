#include "01_MenuSimples.h"

int main1(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MenuSimples janela;

    janela.resize(300, 300);

    janela.setWindowTitle("Menu Simples");

    janela.show();

    return app.exec();
}
