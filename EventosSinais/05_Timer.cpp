#include <QHBoxLayout>
#include <QTime>
#include "05_Timer.h"

Relogio::Relogio(QWidget *parent) : QWidget(parent)
{
    //Instância de QHBoxLayout
    QHBoxLayout *hbxLayout = new QHBoxLayout(this);

    //Setando espaço entre ínicio e objeto filho
    hbxLayout -> setSpacing(5);

    //Instância de QLabel que mostrará a hora
    lblHora = new QLabel("", this);

    //Colocando Label no QHBoxLayout
    hbxLayout -> addWidget(lblHora, 1, Qt::AlignLeft | Qt::AlignTop);

    //Pegando hora atual
    QTime horario = QTime::currentTime();

    //Passando a hora atual para string
    QString horaAtual = horario.toString();

    //Setando text do Label
    lblHora -> setText(horaAtual);

    //Iniciando o timer 1000 ms = 1 s
    startTimer(1000);
}

//Reimplementando o método timerEvent(QTimerEvent *e)
void Relogio::timerEvent(QTimerEvent *e)
{
    //Q_UNUSED = equivalente à (void) ?
    Q_UNUSED(e);

    //Pegando a hora atual
    QTime horario = QTime::currentTime();

    //Passando a hora atual para string
    QString horaAtual = horario.toString();

    //Setando text do Label
    lblHora -> setText(horaAtual);
}
