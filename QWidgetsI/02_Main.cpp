#include "02_Slider.h"
#include <QApplication>

int main2(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Slider janela;

    janela.setWindowTitle("QSlider");

    janela.show();

    return app.exec();
}
