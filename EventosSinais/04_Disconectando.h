/* DISCONNECT()
 *
 * Esse método disconecta um Signal de um Slot
 * */

#pragma once

#include <QWidget>
#include <QPushButton>

class Disconectar : public QWidget
{
    //necessário em todas classes que aplicam seus próprios slots..
    Q_OBJECT

    public:

    //construtor
        Disconectar(QWidget *parent = 0);

    private slots:

        //slots (métodos)
        void clicando();
        void checando(int);

   private:

        //objeto de QPushButton
        QPushButton *btnClick;
};
