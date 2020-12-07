/* FORMATOS DE DATAS CUSTOMIZADAS
 *
 * Podemos utilizar diversos tipos de máscaras dentro de .toString(). Exemplos de expressões :
 *
 * d = Dia como número, sem zero. 1 à 31
 * dd = Dia como número, com zero. 01 à 31
 * ddd = Dia como nome abreviado. Seg, Ter, Qua, etc. Usa QDate::shortDayName()
 * dddd = Dia como nome completo. Segunda-feira, Terça-feita, Quarta-feira, etc. Usa QDate::longDayName()
 * M = Mês como número, sem zero. 1 à 12
 * MM = Mês como número, com zero. 01 à 12
 * MMM = Mês como nome abreviado. Jan, Fev, Mar, etc. Usa QDate::shortMonthName()
 * MMMM = Mês como nome completo. Janeiro, Fevereiro, Março, etc. Usa QDate::longMonthName()
 * yy = Ano como dois digitos. 00 à 99
 * yyyy = Ano de forma completa com quatro digitos. 0000 à 9999
 */

#include <QTextStream>
#include <QDate>

int main6(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //Pegando data atual
    QDate data = QDate::currentDate();

    //Alguns formatos customizados como máscara de .toString()
    out << "Hoje = " << data.toString("dd-MM-yy") << endl;
    out << "Hoje = " << data.toString("yyyy-MMMM-ddd") << endl;
    out << "Hoje = " << data.toString("d/M/yyyy") << endl;
    out << "Hoje = " << data.toString("dddd, MMM, yyyy") << endl;
    out << "Hoje = " << data.toString("dd/MM/yyyy") << endl;
}
