/* POSIÇÃO ABSOLUTA
 *
 * O programador especifica a posição e o tamanho de cada widget em pixels. Quandos utilizamos posição absoluta,
 * devemos entender algumas regras :
 *
 * - O tamanho e a localização do widget não devem mudar se a janela for redimensionada.
 * - Aplicações aparecem diferentes (e até piores) em outras plataformas.
 * - Mudar fontes na aplicação poderá desconfigurar o layout.
 * - Se decidirmos mudar o layout, nós deveremos refazer todo layout, o que consome tempo e é tedioso.
 *
 * Há situações que podemos utilizar posição absoluta, mas no mundo real, programadores usam Gestores de Layout.
 *
 * */

//inclusão de bibliotecas necessárias
#include <QApplication>
#include <QDesktopWidget>
#include <QTextEdit>

//Declaração da classe
class Absoluto : public QWidget
{
    public:

        //Construtor
        Absoluto(QWidget *parent = 0);
};

//Definição do construtor
Absoluto::Absoluto(QWidget *parent) : QWidget(parent)
{
    //Instância de QTextEdit
    QTextEdit *txtEdit = new QTextEdit(this);

    //setGeometry(int x, int y, int lar, int alt) = Seta posição e tamanho do objeto
    txtEdit -> setGeometry(5, 5, 200, 150);
}

//Método main para rodar aplicação
int main1(int argc, char *argv[])
{
    //Instância do objeto da aplicação
    QApplication app(argc, argv);

    //Instância da classe criada
    Absoluto janela;

    //setWindowTitle(QString) = Seta o título da janela
    janela.setWindowTitle("Utilizando Posição Absoluta");

    //show() = Exibe o widget
    janela.show();

    //exec() = executa a aplicação
    return app.exec();
}

