/* O ÍCONE DA APLICAÇÃO */

//inclusão de headers necessários
#include <QApplication>
#include <QWidget>
#include <QIcon>

//declaração do main
int main3(int argc, char *argv[])
{
    //objeto da aplicação (obriatório)
    QApplication app(argc, argv);

    //Objeto do Widget
    QWidget janela;

    //resize(int, int) = redimensiona a janela
    janela.resize(250, 150);

    //setWindowTitle(string) = Seta o título da janela
    janela.setWindowTitle("Icone");

    //setWindowIcon(QIcon) = Seta o ícone da aplicação. (Tem que desmarcar shadow build)
    janela.setWindowIcon(QIcon("usb.png"));

    //show() = exibe a janela
    janela.show();

    //exec() = fica no loop principal da aplicação
    return app.exec();
}
