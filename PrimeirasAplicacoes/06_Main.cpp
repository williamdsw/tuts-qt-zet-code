#include "06_MaisMenos.h"
#include <QApplication>

int main06(int argc, char *argv[])
{
    //objeto da aplicação
    QApplication app(argc, argv);

    //objeto da classe
    MaisMenos janela;

    //redimensionando a janela
    janela.resize(300, 200);

    //setando título da janela
    janela.setWindowTitle("Incrementar ou Decrementar?");

    //mostrando a janela
    janela.show();

    //executando a aplicação
    return app.exec();
}
