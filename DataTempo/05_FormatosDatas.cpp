/* FORMATOS PRÉ-DEFINIDOS DE DATAS
 *
 * O Qt5 tem alguns formatos pré-definidos de datas. O método .toString() pega um objeto de QDate como parâmetro.
 * O formato padrão utiizado pelo Qt5 é Qt::TextDate.
 *
 */

#include <QTextStream>
#include <QDate>

int main5(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //Pegando data atual
    QDate data = QDate::currentDate();

    //Alguns tipos pré-definidos de formatos... TextDate, IsoDate etc.
    out << "(TextDate) Hoje = " << data.toString(Qt::TextDate) << endl;
    out << "(IsODate) Hoje = " << data.toString(Qt::ISODate) << endl;
    out << "(ISODateWithMs) Hoje = " << data.toString(Qt::ISODateWithMs) << endl;
    out << "(SystemLocaleDate) Hoje = " << data.toString(Qt::SystemLocaleDate) << endl;
    out << "(SystemLocaleLongDate) Hoje = " << data.toString(Qt::SystemLocaleLongDate) << endl;
    out << "(SystemLocaleShortDate) Hoje = " << data.toString(Qt::SystemLocaleShortDate) << endl;
    out << "(DefaultLocaleLongDate) Hoje = " << data.toString(Qt::DefaultLocaleLongDate) << endl;
    out << "(DefaultLocaleShortDate) Hoje = " << data.toString(Qt::DefaultLocaleShortDate) << endl;
    out << "(LocalDate) Hoje = " << data.toString(Qt::LocalDate) << endl;
    out << "(LocaleDate) Hoje = " << data.toString(Qt::LocaleDate) << endl;
}
