/* ÉPOCA DO UNIX.
 *
 * Começou em 1 de Janeiro de 1970, as 00:00:00 UTC (ou 1970-01-01T00:00:00Z ISO 8601).
 *
 */

#include <QTextStream>
#include <QDateTime>
#include <ctime>

int main16(void)
{
    //output.
    QTextStream out(stdout);

    //time() = retorna o horário Unix
    time_t t = time(0);

    //printando
    out << t << endl;

    //Criando QDateTime
    QDateTime dt;

    //setTime_t() = É utilizado para converter o valor do horário Unix em QDateTime
    dt.setTime_t(t);

    //printando
    out << dt.toString() << endl;

    //Criando QDateTime
    QDateTime cd = QDateTime::currentDateTime();

    //toTime_t() = Outra forma de exibir o horário Unix
    out << cd.toTime_t() << endl;
}
