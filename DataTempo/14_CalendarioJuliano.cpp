/* CALENDÁRIO JULIANO
 *
 * Refere-se ao calendário Juliano, que começou em 4713 AC. É utilizado por astrônomos.
 * No Qt5, temos o método toJulianDay() para retornar o número de dias de uma data para outra.
 *
 */

#include <QTextStream>
#include <QDate>

int main14(void)
{
    //output
    QTextStream out(stdout);

    //Criando objeto
    QDate data = QDate::currentDate();
    QDate nascimento(1994, 10, 2);

    //Printando data 'normal'
    out << "Data Gregoriana de hoje : " << data.toString(Qt::ISODate) << endl;

    //toJulianDay() retorna número de dias do começo até certa data
    out << "Data Juliana para hoje : " << data.toJulianDay() << endl;

    //Necessário substrair..
    out << "Minha idade em dias Julianos : " << data.toJulianDay() - nascimento.toJulianDay()  << endl;
}
