#include <QDesktopWidget>
#include <QApplication>
#include "04_Transparencia.h"

int main4(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Transparencia janela;

    janela.resize(630, 90);

    janela.setWindowTitle("Utilizando Níveis de Transparência");

    janela.show();

    return app.exec();
}
