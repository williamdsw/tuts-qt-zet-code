/* HBOXLAYOUT
 *
 * Essa classe alinha os widgets horizontalmente.
 *
 * */

#pragma once

//inclusão de headers
#include <QWidget>
#include <QPushButton>

//declaração da classe
class CaixaHorizontal : public QWidget
{
    public:

        //Construtor
        CaixaHorizontal(QWidget *parent = 0);

    private:

        QPushButton *btnOk, *btnAplicar, *btnCancelar, *btnLimpar;
};
