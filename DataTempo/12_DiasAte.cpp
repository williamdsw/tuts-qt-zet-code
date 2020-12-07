/* DIAS ATÉ, DIAS DE
 *
 * Nós podemos facilmente calcular dias de uma data até outra particular data. Podemos usar o método addDays().
 * O método daysTo() retorna o número de dias de tal data.
 *
 */

#include <QTextStream>
#include <QDate>

int main12(void)
{
    //output
    QTextStream out(stdout);

    //Declarando QDate
    QDate data1(2017, 9, 7);

    //addDays() = Adiciona dias apartir de uma data
    QDate data2 = data1.addDays(30);

    //Declarando QDate
    QDate natal(2017, 12, 25);

    //printando
    out << "30 dias de " << data1.toString() << " eh " << data2.toString() << endl;

    //daysTo() = Calcula e retorna o número de dias de uma data para outra
    out << QString("Ainda restam %1 dias ate o natal!").arg(QDate::currentDate().daysTo(natal)) << endl;
}
