#include <QTextStream>
#include <QCheckBox>
#include <QHBoxLayout>
#include "04_Disconectando.h"

Disconectar::Disconectar(QWidget *parent) : QWidget(parent)
{
    //instância de QHBoxLayout
    QHBoxLayout *hbxLayout = new QHBoxLayout(this);

    //Setando espaço entre janela e objeto
    hbxLayout -> setSpacing(5);

    //Instância de QPushButton
    btnClick = new QPushButton("Clique aqui", this);

    //Adicionando botão ao QHBoxLayout
    hbxLayout -> addWidget(btnClick, 0, Qt::AlignLeft | Qt::AlignTop);

    //Instância de QCheckbox
    QCheckBox *chkConectar = new QCheckBox("Conectar", this);

    //Setando CheckBox para checado
    chkConectar -> setCheckState(Qt::Checked);

    //Adicionando checkBox ao Layout
    hbxLayout -> addWidget(chkConectar, 0, Qt::AlignLeft | Qt::AlignTop);

    //Conectando Signals dos objetos aos slots da classe
    connect(btnClick, &QPushButton::clicked, this, &Disconectar::clicando);
    connect(chkConectar, &QCheckBox::stateChanged, this, &Disconectar::checando);
}

//Definição do método
void Disconectar::clicando()
{
    QTextStream out(stdout);

    out << "Botao clicado" << endl;
}

//Definição do método
void Disconectar::checando(int estado)
{
    if(estado == Qt::Checked)
    {
        //conectando SIGNAL à SLOT
        connect(btnClick, &QPushButton::clicked, this, &Disconectar::clicando);
    }
    else
    {
        //desconectando SIGNAL à SLOT
        disconnect(btnClick, &QPushButton::clicked, this, &Disconectar::clicando);
    }
}
