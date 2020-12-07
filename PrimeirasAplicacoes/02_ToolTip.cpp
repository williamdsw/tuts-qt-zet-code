/* UTILIZANDO TOOLTIP */

//inclusão de headers necessários
#include <QApplication>
#include <QWidget>

//declaração do main
int main2(int argc, char *argv[])
{
    //objeto da aplicação (obriatório)
    QApplication app(argc, argv);

    //Objeto do Widget
    QWidget janela;

    //resize(int, int) = redimensiona a janela
    janela.resize(250, 150);

    //setWindowTitle(string) = Seta o título da janela
    janela.setWindowTitle("Tool Tip");

    //move(int, int) = coloca a QWidget na posição indicada da tela
    janela.move(300, 300);

    //setToolTip(string) = Seta o balão de ajuda da QWidget
    janela.setToolTip("Janela aqui!!");

    //show() = exibe a janela
    janela.show();

    //exec() = fica no loop principal da aplicação
    return app.exec();
}
