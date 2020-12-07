/* PEGANDO DIA DA SEMANA
 *
 * O método QDate::dayOfWeek() pega o número do dia da semana, que vai de 1 à 7.
 *
 */

#include <QTextStream>
#include <QDate>

int main9(void)
{
    QTextStream out(stdout);

    //declarando QDate e pegando data atual
    QDate data = QDate::currentDate();

    //dayOfWeek() = Retorna o dia da semana em valor inteiro
    int dia = data.dayOfWeek();

    //shortDayName() e longDayName() retornam o nome do dia em String
    out << "Hoje = " << data.shortDayName(dia) << endl;
    out << "Hoje = " << data.longDayName(dia) << endl;
}
