#include "05_LineEdit.h"
#include <QApplication>

int main5(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LineEdit janela;

    janela.resize(300, 150);

    janela.setWindowTitle("Utilizando QLineEdit");

    janela.show();

    return app.exec();
}

