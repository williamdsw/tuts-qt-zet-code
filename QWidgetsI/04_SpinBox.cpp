#include <QHBoxLayout>
#include <QLabel>
#include "04_SpinBox.h"

SpinBox::SpinBox(QWidget *parent) : QWidget(parent)
{
    //Instância de gestor de layout QHBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //Setando espaço
    hbxCaixa -> setSpacing(15);

    //Instância de QSpinBox
    spbSpin = new QSpinBox(this);

    //Instância de QLabel
    QLabel *lblValor =  new QLabel("0", this);

    //Adicionando itens ao Layout
    hbxCaixa -> addWidget(spbSpin);
    hbxCaixa -> addWidget(lblValor);

    //Conectando SIGNAL à SLOT, utilizando casting para métodos sobrecarregados
    connect(spbSpin, static_cast<void(QSpinBox::*)(int) > (&QSpinBox::valueChanged),
            lblValor, static_cast<void(QLabel::*)(int) > (&QLabel::setNum));
}
