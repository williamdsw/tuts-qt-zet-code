#include "05_FormLayout.h"
#include <QApplication>

int main5(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Formulario janela;

    janela.setWindowTitle("Exemplo de formulário");

    janela.show();

    return app.exec();
}
