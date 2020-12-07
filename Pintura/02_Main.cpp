#include <QApplication>
#include "02_Cores.h"

int main2(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Cores janela;

    janela.resize(360, 280);

    janela.setWindowTitle("Utilizando Diversas Cores");

    janela.show();

    return app.exec();
}
