/*
 * */

#pragma once

#include <QWidget>

class Cores : public QWidget
{
    public:
        Cores(QWidget *parent = 0);

    protected:
        void paintEvent(QPaintEvent *evento);

    private:
        void pintar();

};
