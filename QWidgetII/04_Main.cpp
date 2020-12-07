#include <QApplication>
#include "04_Pixmap.h"

int main4(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Pixmap janela;

    janela.setWindowTitle("Utilizando QPixmap");

    janela.show();

    return app.exec();
}
