/* KEYPRESS
 * */

#pragma once

#include <QWidget>

//declaração de classe
class KeyPress : public QWidget
{
    public:
        //Construtor
        KeyPress(QWidget *parent = 0);

    protected:
        //Sobreescrevendo o método keyPressEvent
        void keyPressEvent(QKeyEvent * e);
};
