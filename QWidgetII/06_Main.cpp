#include <QApplication>
#include "06_TableWidget.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Tabela janela;

    janela.resize(400, 250);

    janela.setWindowTitle("Utilizando QTableWidget");

    janela.show();

    return app.exec();
}
