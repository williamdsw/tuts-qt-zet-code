#include <QApplication>
#include "03_ProgressBar.h"

int main3(int argc, char *argv[])
{
    QApplication app(argc, argv);

    BarraProgresso janela;

    janela.resize(300, 100);

    janela.setWindowTitle("Utilizando QProgressBar");

    janela.show();

    return app.exec();
}
