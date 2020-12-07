#include <QMoveEvent>
#include <03_MoveEvent.h>

//Construtor
Mover::Mover(QWidget *parent) : QWidget(parent)
{}

//Sobreescrevendo método
void Mover::moveEvent(QMoveEvent *e)
{
    //pos() = Retorna a posição do objeto. x() e y() são pontos em x e y.
    int x = e -> pos().x();
    int y = e -> pos().y();

    //Concatenando
    QString posicao = QString::number(x) + "," + QString::number(y);

    //Setando título da janela
    setWindowTitle(posicao);
}

