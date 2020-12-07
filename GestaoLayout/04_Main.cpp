#include "04_ListWidget.h"
#include <QApplication>

int main4(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Layouts janela;

    janela.setWindowTitle("Utilizando Diversos Layouts");

    janela.show();

    return app.exec();
}
