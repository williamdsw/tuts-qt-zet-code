#include "06_StatusBar.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BarraStatus janela;

    janela.resize(300, 150);

    janela.setWindowTitle("Utilizando StatusBar");

    janela.show();

    return app.exec();
}

