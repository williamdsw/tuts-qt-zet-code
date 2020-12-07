// DATA E HORA ATUAL

#include <QTextStream>
#include <QDate>
#include <QTime>

int main2(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //currentDate() - currentTime() = Pegam data e horas atuais.
    QDate data = QDate::currentDate();
    QTime hora = QTime::currentTime();

    //printando
    out << "Data atual = " << data.toString() << endl;
    out << "Hora atual = " << hora.toString() << endl;
}
