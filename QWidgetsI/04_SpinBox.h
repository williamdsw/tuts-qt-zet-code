/* QSPINBOX
 *
 * É um componente que é utilizado para lidar com números inteiros e valores discretos.
 *
 * */

#pragma once

//inclusão de headers
#include <QWidget>
#include <QSpinBox>

//declaração e definição da classe
class SpinBox : public QWidget
{
    Q_OBJECT

    public:

        //Construtor
        SpinBox(QWidget *parent = 0);

    private:

        //ponteiros
        QSpinBox *spbSpin;
};
