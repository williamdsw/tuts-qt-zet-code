// HORÁRIO UTC

#include <QTextStream>
#include <QDateTime>

int main15(void)
{
    //output
    QTextStream out(stdout);

    //Declarando e pegando data e hora atuais
    QDateTime cdt = QDateTime::currentDateTime();

    //toUTC() = retorna o horário e data em valores universais (UTC)
    out << "Horario Universal: " << cdt.toUTC().toString() << endl;

    //toLocalTime() = retorna o horário e data em valores locais
    out << "Horario Local: " << cdt.toLocalTime().toString() << endl;
}
