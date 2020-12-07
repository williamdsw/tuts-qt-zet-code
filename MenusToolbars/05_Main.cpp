#include "05_Esqueleto.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Esqueleto janela;

    janela.resize(500, 500);

    janela.setWindowTitle("Esqueleto da aplicação");

    janela.show();

    return app.exec();
}
