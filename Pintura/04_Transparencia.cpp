#include <QApplication>
#include <QPainter>
#include <QPainterPath>
#include "04_Transparencia.h"

Transparencia::Transparencia(QWidget *parent) : QWidget(parent)
{}

void Transparencia::paintEvent(QPaintEvent *evento)
{
    Q_UNUSED(evento)

    pintar();
}


void Transparencia::pintar()
{
    //instância de QPainter
    QPainter pintor(this);

    //for para criar e preencher os retângulos
    for(int i = 1; i <= 11; i++)
    {
        //setOpacity(qreal) = Seta a opacidade do pintor, com valores entre 0.0 e 1.0
        pintor.setOpacity(i * 0.1);

        /* fillRect(int x, int y, int w, int h, Qt::GlobalColor) = Preenche um retângulo, com base nos eixos x e y,
         * na largura (w), altura (h) e cor definida (blue) */
        pintor.fillRect(50 * i, 20, 40, 40, Qt::blue);
    }
}
