/* SIMPLES APLICAÇÃO */

//inclusão de headers necessários
#include <QApplication>
#include <QWidget>

//declaração do main
int main1(int argc, char *argv[])
{
    //objeto da aplicação (obriatório)
    QApplication app(argc, argv);

    //Objeto do Widget
    QWidget janela;

    //resize(int, int) = redimensiona a janela
    janela.resize(250, 150);

    //setWindowTitle(string) = Seta o título da janela
    janela.setWindowTitle("Janela Simples");

    //show() = exibe a janela
    janela.show();

    //exec() = fica no loop principal da aplicação
    return app.exec();
}
