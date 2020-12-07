#include <QFrame>
#include <QSplitter>
#include <QHBoxLayout>
#include "05_Splitter.h"

Separador::Separador(QWidget *parent): QWidget(parent)
{
    //instância de QHBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //instância de frames
    QFrame *frmTopLeft = new QFrame(this);
    QFrame *frmTopRight = new QFrame(this);

    //setFrameShape(Shape) = Seta a forma do frame
    frmTopLeft -> setFrameShape(QFrame::StyledPanel);
    frmTopRight -> setFrameShape(QFrame::StyledPanel);

    //instância de splitter
    QSplitter *splSeparador1 = new QSplitter(Qt::Horizontal, this);

    //adicionando frames ao splitter
    splSeparador1 -> addWidget(frmTopLeft);
    splSeparador1 -> addWidget(frmTopRight);

    //instância de frame
    QFrame *frmBottom = new QFrame(this);

    //setando forma do frame
    frmBottom -> setFrameShape(QFrame::StyledPanel);

    //instância de splitter
    QSplitter *splSeparador2 = new QSplitter(Qt::Vertical, this);

    //Adicionando itens ao splitter secundário
    splSeparador2 -> addWidget(splSeparador1);
    splSeparador2 -> addWidget(frmBottom);

    //list de inteiros.
    QList<int> tamanhos({50, 100});

    //setSizes(QList<int>) = Seta o tamanho dos objetos filhos do splitter
    splSeparador2 -> setSizes(tamanhos);

    //Adicionando splitter ao HBoxLayout
    hbxCaixa -> addWidget(splSeparador2);
}
