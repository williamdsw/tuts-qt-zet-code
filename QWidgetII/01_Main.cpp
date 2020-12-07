#include <QApplication>
#include "01_CheckBox.h"

int main1(int argc, char *argv[])
{
    QApplication app(argc, argv);

    CheckBox janela;

    janela.resize(250, 150);

    janela.setWindowTitle("QCheckBox");

    janela.show();

    return app.exec();
}
