#include "03_HBoxLayout.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

//Definição do Construtor
CaixaHorizontal::CaixaHorizontal(QWidget *parent) : QWidget(parent)
{
    //Instância de QVBoxLayout, Layout Vertical
    QVBoxLayout *vbxCaixaV = new QVBoxLayout(this);

    //Instância de QHBoxLayout, Layout Horizontal
    QHBoxLayout *hbxCaixaH = new QHBoxLayout();

    //Definindo instâncias de QPushButton
    btnOk = new QPushButton("OK", this);
    btnAplicar = new QPushButton("Aplicar", this);
    btnCancelar = new QPushButton("Cancelar", this);
    btnLimpar = new QPushButton("Limpar", this);

    //Adicionando QPushButtons ao QHBoxLayout, com devidos alinhamentos (Align)
    hbxCaixaH -> addWidget(btnCancelar, 1, Qt::AlignLeft);
    hbxCaixaH -> addWidget(btnLimpar, 0, Qt::AlignCenter);
    hbxCaixaH -> addWidget(btnOk, 1, Qt::AlignRight);
    hbxCaixaH -> addWidget(btnAplicar, 0);

    //addStretch(int num) = Coloca um espaço vazio e expansável no QVBoxLayout.
    vbxCaixaV -> addStretch(1);

    //addLayout(QLayout) = Adicionando o QHBoxLayout dentro do QVBoxLayout
    vbxCaixaV -> addLayout(hbxCaixaH);
}
