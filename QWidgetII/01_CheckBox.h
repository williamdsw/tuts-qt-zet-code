/* QCHECKBOX
 *
 * É um componente que tem dois estados : On e Off. E é uma caixa com um Label. Se o checkbox estiver checado,
 * será representado por uma seta na caixa.
 *
 * */

#pragma once

#include <QWidget>

//declaração de classe
class CheckBox : public QWidget
{
    public:
        //construtor
        CheckBox(QWidget *parent = 0);

    private slots:

        //método privado
        void mostrarTitulo(int);
};
