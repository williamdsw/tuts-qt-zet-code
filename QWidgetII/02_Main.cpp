#include <QApplication>
#include "02_ListWidget.h"

int main2(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ListaFilmes janela;

    janela.setWindowTitle("Lista de Filmes");

    janela.show();

    return app.exec();
}
