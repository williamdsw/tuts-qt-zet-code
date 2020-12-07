#include <QApplication>
#include "01_Linhas.h"

int main1(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Linhas janela;

    janela.resize(270, 280);

    janela.setWindowTitle("Utilizando QPainter");

    janela.show();

    return app.exec();
}
