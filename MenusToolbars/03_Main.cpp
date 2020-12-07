#include "03_MenuVerificavel.h"

int main3(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MenuVerificavel janela;

    janela.resize(300, 300);

    janela.setWindowTitle("Menu com QAction verificável");

    janela.show();

    return app.exec();
}
