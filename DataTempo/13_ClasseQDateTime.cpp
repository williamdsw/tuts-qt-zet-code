/* CLASSE QDATETIME
 *
 * É a mistura de QDate e QTime, contendo métodos similiares às mesmas que manipulam a data do calendário e o relógio.
 *
 */

#include <QTextStream>
#include <QDateTime>

int main13(void)
{
    //output
    QTextStream out(stdout);

    //Declarando QDateTime, e pegando a data e hora atuais com QDateTime::currentDateTime()
    QDateTime cdt = QDateTime::currentDateTime();

    //printando valores, como a data e hora.
    out << "A data e hora atuais = : " << cdt.toString() << endl;
    out << "A data atual = : " << cdt.date().toString() << endl;
    out << "A hora atual = : " << cdt.time().toString() << endl;
}
