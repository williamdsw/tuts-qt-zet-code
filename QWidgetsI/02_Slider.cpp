#include <QHBoxLayout>
#include "02_Slider.h"

Slider::Slider(QWidget *parent) : QWidget(parent)
{
    //Instância de QHBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //Nova instância de QSlider
    sldSlider = new QSlider(Qt::Horizontal, this);

    //Adicionando Slider ao Layout
    hbxCaixa -> addWidget(sldSlider);

    //Nova instância de QLabel
    lblTexto = new QLabel("0", this);

    //Adicionando Label ao Layout
    hbxCaixa -> addWidget(lblTexto);

    //Conectando o SIGNAL(valueChanged) ao SLOT(setNum) utilizando cast (static_cast)
    connect(sldSlider, &QSlider::valueChanged, lblTexto,
            static_cast<void (QLabel::*) (int) > (&QLabel::setNum));
}
