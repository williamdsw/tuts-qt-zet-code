#include <QPainter>
#include "02_Cores.h"

Cores::Cores(QWidget *parent) : QWidget(parent)
{}

void Cores::paintEvent(QPaintEvent *evento)
{
    Q_UNUSED(evento);

    pintar();
}

void Cores::pintar()
{
    QPainter pintor(this);

    //#d4d4d4 = white em hex
    pintor.setPen(QColor("#d4d4d4"));

    //setBrush(QBrush) = Define o padrão de preenchimento da forma
    pintor.setBrush(QBrush("#c56c00"));

    //drawRect(int x1, int y1, int x2, int y2) = Desenha um retângulo
    pintor.drawRect(10, 15, 90, 60);

    pintor.setBrush(QBrush("#1ac500"));
    pintor.drawRect(130, 15, 90, 60);

    pintor.setBrush(QBrush("#539e47"));
    pintor.drawRect(250, 15, 90, 60);

    pintor.setBrush(QBrush("#004fc5"));
    pintor.drawRect(10, 105, 90, 60);

    pintor.setBrush(QBrush("#c50024"));
    pintor.drawRect(130, 105, 90, 60);

    pintor.setBrush(QBrush("#9e4757"));
    pintor.drawRect(250, 105, 90, 60);

    pintor.setBrush(QBrush("#5f3b00"));
    pintor.drawRect(10, 195, 90, 60);

    pintor.setBrush(QBrush("#4c4c4c"));
    pintor.drawRect(130, 195, 90, 60);

    pintor.setBrush(QBrush("#785f36"));
    pintor.drawRect(250, 195, 90, 60);
}
