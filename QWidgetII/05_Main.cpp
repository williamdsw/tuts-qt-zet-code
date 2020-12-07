#include <QApplication>
#include "05_Splitter.h"

int main5(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Separador janela;

    janela.resize(350, 300);

    janela.setWindowTitle("Utilizando QSplitter");

    janela.show();

    return app.exec();
}
