/* PEGANDO NÚMERO DE DIAS
 *
 * Podemos computar o número de dias em um mês com o método QDate::daysInMonth() e o número de dias em um ano com
 * QDate::daysInYear()
 *
 */

#include <QTextStream>
#include <QDate>

int main10(void)
{
    QTextStream out(stdout);

    //Criando uma QList de QString
    QList<QString> meses;

    //Duas formas de adicionar itens...
    meses.append("Janeiro");
    meses << "Fevereiro" << "Março" << "Abril" << "Maio" << "Junho" << "Julho" << "Agosto" << "Setembro"
          << "Outubro" << "Novembro" << "Dezembro";

    //Instânciando objetos de QDate
    QDate dt1(2015, 9, 18), dt2(2015, 2, 11), dt3(2015, 5, 1), dt4(2015, 12, 1), dt5(2015, 1, 12);

    /* QDate::daysInMonth() retorna a quantidade de dias em especificado mês
     * QDate::month() retorna o mês atual */
    out << QString("Existem %1 dias em %2").arg(dt1.daysInMonth()).arg(meses.at(dt1.month()-1)) << endl;
    out << QString("Existem %1 dias em %2").arg(dt2.daysInMonth()).arg(meses.at(dt2.month()-1)) << endl;
    out << QString("Existem %1 dias em %2").arg(dt3.daysInMonth()).arg(meses.at(dt3.month()-1)) << endl;
    out << QString("Existem %1 dias em %2").arg(dt4.daysInMonth()).arg(meses.at(dt4.month()-1)) << endl;
    out << QString("Existem %1 dias em %2").arg(dt5.daysInMonth()).arg(meses.at(dt5.month()-1)) << endl;

    /* QDate::daysInYear() retorna a quantidades de dias em determinado ano
     * QDate::year() retorna o ano */
    out << QString("Existem %1 dias em %2").arg(dt1.daysInYear()).arg(dt1.year()) << endl;
}
