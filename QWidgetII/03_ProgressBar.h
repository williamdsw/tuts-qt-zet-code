/* QPROGRESSBAR
 *
 * É utilizado para indicar ao usuário o progresso da aplicação
 *
 * */

#pragma once

//inclusão de bibliotecas
#include <QWidget>
#include <QProgressBar>
#include <QPushButton>

class BarraProgresso : public QWidget
{

    Q_OBJECT

    public:
        //construtor
        BarraProgresso(QWidget *parent = 0);

    private:
        //variáveis
        int progresso;
        QTimer *tmrTimer;
        QProgressBar *pgbBarra;
        QPushButton *btnComecar;
        QPushButton *btnParar;

        //constantes
        static const int DELAY = 200;
        static const int VALOR_MAXIMO = 100;

        //métodos
        void atualizaBarra();
        void comecaTimer();
        void paraTimer();
};
