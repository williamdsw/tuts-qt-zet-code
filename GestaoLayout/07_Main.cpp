#include "07_Revisao.h"
#include <QApplication>

int main7(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Revisao janela;

    janela.setWindowTitle("Revisão");

    janela.show();

    return app.exec();
}
