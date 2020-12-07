#include "04_BarraFerramenta.h"

int main4(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BarraFerramenta janela;

    janela.resize(300, 300);

    janela.setWindowTitle("Utilizando Barra de Ferramentas");

    janela.show();

    return app.exec();
}
