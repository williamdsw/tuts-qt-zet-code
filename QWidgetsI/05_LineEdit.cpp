#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include "05_LineEdit.h"

LineEdit::LineEdit(QWidget *parent) : QWidget(parent)
{
    //Instâncias de Labels
    QLabel *lblNome = new QLabel("Nome:", this);
    QLabel *lblIdade = new QLabel("Idade:", this);
    QLabel *lblOcupacao = new QLabel("Ocupação:", this);

    //Setando alinhamento de labels
    lblNome -> setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    lblIdade -> setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    lblOcupacao -> setAlignment(Qt::AlignRight | Qt::AlignVCenter);

    //Instâncias de LineEdit
    QLineEdit *lntNome = new QLineEdit(this);
    QLineEdit *lntIdade = new QLineEdit(this);
    QLineEdit *lntOcupacao = new QLineEdit(this);

    //Instância de GridLayout
    QGridLayout *grdGrid = new QGridLayout();

    //Adicionando Itens ao GridLayout
    grdGrid -> addWidget(lblNome, 0, 0);
    grdGrid -> addWidget(lntNome, 0, 1);
    grdGrid -> addWidget(lblIdade, 1, 0);
    grdGrid -> addWidget(lntIdade, 1, 1);
    grdGrid -> addWidget(lblOcupacao, 2, 0);
    grdGrid -> addWidget(lntOcupacao, 2, 1);

    //Setando Grid como Layout
    setLayout(grdGrid);
}
