#include "03_ComboBox.h"
#include <QApplication>

int main3(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ComboBox janela;

    janela.resize(300, 150);

    janela.setWindowTitle("Utilizando ComboBox");

    janela.show();

    return app.exec();
}

