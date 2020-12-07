#include "04_SpinBox.h"
#include <QApplication>

int main4(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SpinBox janela;

    janela.resize(300, 150);

    janela.setWindowTitle("Utilizando QSpinBox");

    janela.show();

    return app.exec();
}

