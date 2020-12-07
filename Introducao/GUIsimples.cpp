#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[])
{
    //Instânciando um objeto da aplicação com argumentos
    QApplication app(argc, argv);

    //Instância de um Widget
    QWidget janela;

    //resize() = Seta o tamanho do Widget
    janela.resize(250, 150);

    //setWindowTitle() = Seta o título da janela
    janela.setWindowTitle("Título da Janela");

    //show() = Mostra a janela
    janela.show();

    //executa a aplicação
    return app.exec();
}
