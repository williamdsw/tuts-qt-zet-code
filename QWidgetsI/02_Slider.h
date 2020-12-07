/* QSLIDER
 *
 * É um componente que contém uma alavanca simples. Ela pode ser puxada para trás ou frente.
 *
 * */

#pragma once

#include <QWidget>
#include <QSlider>
#include <QLabel>

class Slider : public QWidget
{
    Q_OBJECT

    public:

        Slider(QWidget *parent = 0);

    private:

        QSlider *sldSlider;
        QLabel *lblTexto;
};
