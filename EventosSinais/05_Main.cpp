#include "05_Timer.h"
#include <QApplication>

int main5(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Relogio janela;

    janela.resize(250, 150);

    janela.setWindowTitle("Utilizando Timer");

    janela.show();

    return app.exec();
}
