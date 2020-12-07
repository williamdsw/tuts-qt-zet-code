#include <QPainter>
#include "03_Padroes.h"

Padroes::Padroes(QWidget *parent) : QWidget(parent)
{}

void Padroes::paintEvent(QPaintEvent *evento)
{
    Q_UNUSED(evento);

    pintar();
}

void Padroes::pintar()
{
    //objeto de Qpainter
    QPainter pintor(this);

    //NoPen = Indica que não há um "lápis" para desenhar as bordas
    pintor.setPen(Qt::NoPen);

    //Qt::HorPattern = Linhas Horizontais
    pintor.setBrush(Qt::HorPattern);
    pintor.drawRect(10, 15, 90, 60);

    //Qt::VerPattern = Linhas Verticais
    pintor.setBrush(Qt::VerPattern);
    pintor.drawRect(130, 15, 90, 60);

    //Qt::CrossPattern = Linhas Horizontais e Verticais cruzadas
    pintor.setBrush(Qt::CrossPattern);
    pintor.drawRect(250, 15, 90, 60);

    //Qt::Dense1Pattern = Linhas densas tipo 1
    pintor.setBrush(Qt::Dense1Pattern);
    pintor.drawRect(10, 105, 90, 60);

    //Qt::Dense2Pattern = Linhas densas tipo 2
    pintor.setBrush(Qt::Dense2Pattern);
    pintor.drawRect(130, 105, 90, 60);

    //Qt::Dense3Pattern = Linhas densas tipo 3
    pintor.setBrush(Qt::Dense3Pattern);
    pintor.drawRect(250, 105, 90, 60);

    //Qt::Dense4Pattern = Linhas densas tipo 4
    pintor.setBrush(Qt::Dense4Pattern);
    pintor.drawRect(10, 195, 90, 60);

    //Qt::Dense5Pattern = Linhas densas tipo 5
    pintor.setBrush(Qt::Dense5Pattern);
    pintor.drawRect(130, 195, 90, 60);

    //Qt::Dense6Pattern = Linhas densas tipo 6
    pintor.setBrush(Qt::Dense6Pattern);
    pintor.drawRect(250, 195, 90, 60);

    //Qt::Dense7Pattern = Linhas densas tipo 7
    pintor.setBrush(Qt::Dense7Pattern);
    pintor.drawRect(10, 285, 90, 60);

    //Qt::BDiagPattern = Linhas rotacionadas à 45º
    pintor.setBrush(Qt::BDiagPattern);
    pintor.drawRect(130, 285, 90, 60);

    //Qt::FDiagPattern = Linhas rotacionadas à -45º
    pintor.setBrush(Qt::FDiagPattern);
    pintor.drawRect(250, 285, 90, 60);

    //Qt::DiagCrossPattern = Ambas linhas BDiag e FDiag cruzadas
    pintor.setBrush(Qt::DiagCrossPattern);
    pintor.drawRect(10, 375, 90, 60);
}
