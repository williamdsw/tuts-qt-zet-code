/* FORMATOS PRÉ-DEFINIDOS DE TEMPO
 *
 * Como abordado no item 05, também existem formatos pré-definidos de Tempo (QTime)
 *
 */

#include <QTextStream>
#include <QTime>

int main7(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //Pegando tempo atual
    QTime tempo = QTime::currentTime();

    //Alguns tipos pré-definidos de formatos... TextDate, IsoDate etc.
    out << "(TextDate) Agora = " << tempo.toString(Qt::TextDate) << endl;
    out << "(IsODate) Agora = " << tempo.toString(Qt::ISODate) << endl;
    out << "(ISODateWithMs) Agora = " << tempo.toString(Qt::ISODateWithMs) << endl;
    out << "(SystemLocaleDate) Agora = " << tempo.toString(Qt::SystemLocaleDate) << endl;
    out << "(SystemLocaleLongDate) Agora = " << tempo.toString(Qt::SystemLocaleLongDate) << endl;
    out << "(SystemLocaleShortDate) Agora = " << tempo.toString(Qt::SystemLocaleShortDate) << endl;
    out << "(DefaultLocaleLongDate) Agora = " << tempo.toString(Qt::DefaultLocaleLongDate) << endl;
    out << "(DefaultLocaleShortDate) Agora = " << tempo.toString(Qt::DefaultLocaleShortDate) << endl;
    out << "(LocalDate) Agora = " << tempo.toString(Qt::LocalDate) << endl;
    out << "(LocaleDate) Agora = " << tempo.toString(Qt::LocaleDate) << endl;
}
