/* MOVE EVENT
 *
 * Essa classe contém parãmetros de evento para objetos que foram movidos.
 * */

#pragma once

#include <QMainWindow>

class Mover : public QWidget
{
    public:
        Mover(QWidget *parent = 0);

    protected:

        void moveEvent(QMoveEvent *e);
};
