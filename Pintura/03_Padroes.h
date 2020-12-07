/*
 * */

#pragma once

#include <QWidget>

class Padroes : public QWidget
{
    public:
        Padroes(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *evento);

    private:
        void pintar();
};
