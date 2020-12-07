//inclusão de headers necessários
#include "04_ListWidget.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QListWidget>

//Construtor
Layouts::Layouts(QWidget *parent) : QWidget(parent)
{
    //Declaração de Layout Vertical
    QVBoxLayout *vbxCaixaV = new QVBoxLayout();

    //Declaração de Layout Horizontal
    QHBoxLayout *hbxCaixaH = new QHBoxLayout(this);

    //QListWidget = Fornece uma lista de widgets
    QListWidget *lswLista = new QListWidget(this);

    //addItem(QString) = Adiciona item ao QListWidget
    lswLista -> addItem("A Profecia");
    lswLista -> addItem("O Exorcista");
    lswLista -> addItem("Sexta Feira 13");
    lswLista -> addItem("A Noite do Pesadelo");
    lswLista -> addItem("O Iluminado");

    //Declarando buttons
    QPushButton *btnAdicionar = new QPushButton("Adicionar", this);
    QPushButton *btnRenomear = new QPushButton("Renomear", this);
    QPushButton *btnRemover = new  QPushButton("Remover", this);
    QPushButton *btnRemoverTodos = new QPushButton("Remover Todos", this);

    //setSpacing(int) = Adiciona espaços entre os botões
    vbxCaixaV -> setSpacing(3);

    //addStretch(int num) = Coloca um espaço vazio e expansável.
    vbxCaixaV -> addStretch(1);

    //Adicionando botões ao QVBoxLayout
    vbxCaixaV -> addWidget(btnAdicionar);
    vbxCaixaV -> addWidget(btnRenomear);
    vbxCaixaV -> addWidget(btnRemover);
    vbxCaixaV -> addWidget(btnRemoverTodos);

    //addStretch(int num) = Coloca um espaço vazio e expansável.
    vbxCaixaV -> addStretch(1);

    //Adiciondo o QListWidget ao QHBoxLayout
    hbxCaixaH -> addWidget(lswLista);

    //Setando espaço entre o QListWidget e o QVBoxLayout
    hbxCaixaH -> addSpacing(15);

    //Adicionando o QVBoxLayout ao QHBoxLayout
    hbxCaixaH -> addLayout(vbxCaixaV);

    //Setando QHBoxLayout como layout do QWidget
    setLayout(hbxCaixaH);
}

