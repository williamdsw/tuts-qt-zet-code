#include "02_OutroMenu.h"

int main2(int argc, char *argv[])
{
    QApplication app(argc, argv);

    OutroMenu janela;

    janela.resize(300, 300);

    janela.setWindowTitle("Menu com icones e atalhos");

    janela.show();

    return app.exec();
}
