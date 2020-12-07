#include <QPixmap>
#include <QLabel>
#include <QHBoxLayout>
#include "04_Pixmap.h"

Pixmap::Pixmap(QWidget *parent): QWidget(parent)
{
    //instancia de HBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //instância de Pixmap
    QPixmap pixImagem("Dino Crisis 2 Front.jpg");

    //instância de label
    QLabel *lblImagem = new QLabel(this);

    //setPixmap(QPixmap) = Seta a imagem do label
    lblImagem -> setPixmap(pixImagem);

    //Adiciona label ao HBoxLayout
    hbxCaixa -> addWidget(lblImagem, 0, Qt::AlignTop);
}
