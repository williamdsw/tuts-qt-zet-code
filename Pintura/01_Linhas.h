/*
 * */

#pragma once

#include <QWidget>

class Linhas : public QWidget
{
    public:

        Linhas(QWidget *parent = 0);

    protected:

        void paintEvent(QPaintEvent *evento);
        void desenhaLinhas(QPainter *pintor);
};
