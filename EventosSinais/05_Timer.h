/* TIMER
 *
 * Um timer é implementado para dar um tiro único ou tarefas repetitivas.
 *
 * */

#pragma once

#include <QWidget>
#include <QLabel>

class Relogio : public QWidget
{
    public:
        Relogio(QWidget *parent = 0);

    protected :

        void timerEvent(QTimerEvent *e);

    private:

        QLabel *lblHora;
};
