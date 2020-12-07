//inclusão de headers
#include "07_Revisao.h"
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>

//Construtor
Revisao::Revisao(QWidget *parent) : QWidget(parent)
{
    //Nova instância de QGridLayout
    QGridLayout *grdGrid = new QGridLayout(this);

    //setVerticalSpacing(int) = Adiciona espaço vertical antes dos objetos
    grdGrid -> setVerticalSpacing(15);

    //setHorizontalSpacing(int) = Adiciona espaço horizontal antes dos objetos
    grdGrid -> setHorizontalSpacing(10);

    //Criando QLabels
    QLabel *lblTitulo = new QLabel("Titulo : ", this);
    QLabel *lblAutor = new QLabel("Autor : ", this);
    QLabel *lblRevisao = new QLabel("Revisão : ", this);

    /* Adicionando QLabel ao Grid. addWidget(QWidget, int row, int column, int rowspan, int columnspan)
     * rowspan e columnspan = São quantas linhas e colunas o objeto vai ocupar */
    grdGrid -> addWidget(lblTitulo, 0, 0, 1, 1);
    grdGrid -> addWidget(lblAutor, 1, 0, 1, 1);
    grdGrid -> addWidget(lblRevisao, 2, 0, 1, 1);

    //Setando alinhamento do label
    lblTitulo -> setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    lblAutor -> setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    lblRevisao -> setAlignment(Qt::AlignRight | Qt::AlignTop);

    //Criando QLineEdit's
    QLineEdit *lntTitulo = new QLineEdit(this);
    QLineEdit *lntAutor = new QLineEdit(this);

    //Adicionando QLineEdit ao Grid
    grdGrid -> addWidget(lntTitulo, 0, 1, 1, 1);
    grdGrid -> addWidget(lntAutor, 1, 1, 1, 1);

    //Criando QTextEdit
    QTextEdit *txtRevisao = new QTextEdit(this);

    //Setando QTextEdit ao Grid
    grdGrid -> addWidget(txtRevisao, 2, 1, 3, 1);

    //Setando Grid como Layout principal
    setLayout(grdGrid);
}
