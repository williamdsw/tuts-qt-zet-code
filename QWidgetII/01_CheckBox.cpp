#include <QCheckBox>
#include <QHBoxLayout>
#include "01_CheckBox.h"

//definição construtor
CheckBox::CheckBox(QWidget *parent) : QWidget(parent)
{
    //declaração de HBox
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //declaração de CsheckBox
    QCheckBox *chkMostrar = new QCheckBox("Mostrar Título", this);

    //setando estado do CheckBox para "marcado"
    chkMostrar -> setCheckState(Qt::Checked);

    //Adicionando CheckBox ao HBox
    hbxCaixa -> addWidget(chkMostrar, 0, Qt::AlignLeft | Qt::AlignTop);

    //Conectando signal à slot
    connect(chkMostrar, &QCheckBox::stateChanged, this, &CheckBox::mostrarTitulo);
}

//definição de método
void CheckBox::mostrarTitulo(int estado)
{
    if(estado == Qt::Checked)
    {
        setWindowTitle("CheckBox checado");
    }
    else
    {
        setWindowTitle(" ");
    }
}
