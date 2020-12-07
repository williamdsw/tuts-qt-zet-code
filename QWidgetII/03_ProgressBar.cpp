#include <QProgressBar>
#include <QTimer>
#include <QGridLayout>
#include "03_ProgressBar.h"

BarraProgresso::BarraProgresso(QWidget *parent) : QWidget(parent)
{
    //setando valor
    progresso = 0;

    //instância do timer
    tmrTimer = new QTimer(this);

    //conectando signal à slot
    connect(tmrTimer, &QTimer::timeout, this, &BarraProgresso::atualizaBarra);

    //instância de grid layout
    QGridLayout *grdLayout = new QGridLayout(this);

    //setColumnStretch(int column, int stretch) = Seta se a coluna vai "esticar"
    grdLayout -> setColumnStretch(2, 1);

    //instância de progress bar
    pgbBarra  = new QProgressBar();

    //Adicionando progress bar ao grid
    grdLayout -> addWidget(pgbBarra, 0, 0, 1, 3);

    //instância de buttons
    btnComecar = new QPushButton("Começar", this);
    btnParar = new QPushButton("Parar", this);

    //conectando signals de buttons à slots
    connect(btnComecar, &QPushButton::clicked, this, &BarraProgresso::comecaTimer);
    connect(btnParar, &QPushButton::clicked, this, &BarraProgresso::paraTimer);

    //adicionando buttons ao grid
    grdLayout -> addWidget(btnComecar, 1, 0, 1 , 1);
    grdLayout -> addWidget(btnParar, 1, 1);
}

void BarraProgresso::comecaTimer()
{
    if (progresso >= VALOR_MAXIMO)
    {
        progresso = 0;

        //setValue(int) = seta o valor da progress bar
        pgbBarra -> setValue(0);
    }

    //isActive() = retorna se o timer está ativo ou não
    if (!tmrTimer -> isActive())
    {
        //setEnabled(bool) = Seta habilitado ou desabilitado
        btnComecar -> setEnabled(false);
        btnParar -> setEnabled(true);

        //start(int) = Começa o timer
        tmrTimer -> start(DELAY);
    }
}

void BarraProgresso::paraTimer()
{
    if(tmrTimer -> isActive())
    {
        btnComecar -> setEnabled(true);
        btnParar -> setEnabled(false);

        //stop() = para o timer
        tmrTimer -> stop();
    }
}

void BarraProgresso::atualizaBarra()
{
    //incrementando progresso
    progresso++;

    if(progresso <= VALOR_MAXIMO)
    {
        pgbBarra -> setValue(progresso);
    }
    else
    {
        tmrTimer -> stop();
        btnComecar -> setEnabled(true);
        btnParar -> setEnabled(false);
    }
}
