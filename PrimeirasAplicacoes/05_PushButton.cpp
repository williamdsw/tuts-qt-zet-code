/* BOTÕES */

//inclusão de headers necessários
#include <QApplication>
#include <QWidget>
#include <QPushButton>

//Declaração da classe e métodos (.header)
class MeuBotao : public QWidget
{
    public:
        MeuBotao(QWidget *parent = 0);
};

//Implementação da classe e métodos (.source)
MeuBotao::MeuBotao(QWidget *parent) : QWidget(parent)
{
    //Ponteiro para QPushButton
    QPushButton *sair = new QPushButton("Sair", this);

    //setGeometry(int x, int y, int width, int height) = Seta posição e dimensão do QPushButton
    sair -> setGeometry(50, 40, 75, 30);

    /* connect(obj, signal, obj , slot) = Conecta um slot à um sinal.
     * Quando o botão é clicado (clicked), ele gera um sinal. Um slot é um método que reage à um sinal.
     * qApp = é um ponteiro global parao objeto da aplicação. */
    connect(sair, &QPushButton::clicked, qApp, &QApplication::quit);
}

//declaração do main
int main5(int argc, char *argv[])
{
    //objeto da aplicação (obriatório)
    QApplication app(argc, argv);

    //Objeto do Widget
    MeuBotao janela;

    //resize(int, int) = redimensiona a janela
    janela.resize(350, 150);

    //setWindowTitle(string) = Seta o título da janela
    janela.setWindowTitle("Botões");

    //show() = exibe a janela
    janela.show();

    //exec() = fica no loop principal da aplicação
    return app.exec();
}
