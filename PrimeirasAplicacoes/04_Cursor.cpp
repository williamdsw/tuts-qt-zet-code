/* CURSORES */

//inclusão de headers necessários
#include <QApplication>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>

//Declaração da classe e métodos (.header)
class Cursores : public QWidget
{
    public:
        Cursores(QWidget *parent = 0);

};

//Implementação da classe e métodos (.source)
Cursores::Cursores(QWidget *parent) : QWidget(parent)
{
    //Criando ponteiro para QFrame
    QFrame *frame1 = new QFrame(this);

    /* setFrameStyle() = Seta o "estilo" do QFrame, e assim podemos ver as bordas do QFrame
     * Alguns tipos : Box, NoFrame, Panel, WinPanel, HLine, VLine, StyledPanel */
    frame1 -> setFrameStyle(QFrame::Box);

    /* setCursor() = Seta o tipo de cursor. Exemplos : SizeAllCursor, WaitCursor, PointingHandCursor etc. */
    frame1 -> setCursor(Qt::SizeAllCursor);


    QFrame *frame2 = new QFrame(this);
    frame2 -> setFrameStyle(QFrame::Box);
    frame2 -> setCursor(Qt::WaitCursor);

    QFrame *frame3 = new QFrame(this);
    frame3 -> setFrameStyle(QFrame::Box);
    frame3 -> setCursor(Qt::PointingHandCursor);

    //Criando ponteiro para QGridLayout
    QGridLayout *grid = new QGridLayout(this);

    //addWidget(QWidget, row, column) = Adiciona um QFrame no QGridLayout, aqui seria como agrupar todos dentro de um.
    grid -> addWidget(frame1, 0, 0);
    grid -> addWidget(frame2, 0, 1);
    grid -> addWidget(frame3, 0, 2);

    //setLayout(QLayout *) = seta o layout do Qwidget
    setLayout(grid);
}

//declaração do main
int main4(int argc, char *argv[])
{
    //objeto da aplicação (obriatório)
    QApplication app(argc, argv);

    //Objeto do Widget
    Cursores janela;

    //resize(int, int) = redimensiona a janela
    janela.resize(350, 150);

    //setWindowTitle(string) = Seta o título da janela
    janela.setWindowTitle("Cursores");

    //show() = exibe a janela
    janela.show();

    //exec() = fica no loop principal da aplicação
    return app.exec();
}
