#include "01_Label.h"
#include <QApplication>

int main1(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Label janela;

    janela.setWindowTitle("Queen - Pain is so close to Pleasure");

    janela.show();

    return app.exec();
}
