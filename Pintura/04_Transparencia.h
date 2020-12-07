/*
 * */

#pragma once

#include <QWidget>

class Transparencia : public QWidget
{
    public:
        Transparencia(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *evento);
        void pintar();
};
