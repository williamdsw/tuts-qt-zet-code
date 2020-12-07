/* FORMATOS DE TEMPOS CUSTOMIZADOS
 *
 * Podemos utilizar diversos tipos de máscaras dentro de .toString(). Exemplos de expressões :
 *
 * h = valor da hora sem zero. (0-23, ou 1-12 AM/PM)
 * hh = valor da hora com zero. (00-23, ou 01-12 AM/PM)
 * H = valor da hora sem zero. (0-23 mesmo com AM/PM)
 * HH = valor da hora com zero. (00-23 mesmo com AM/PM)
 * m = valor do minuto sem zero. (0-59)
 * mm = valor do minuto com zero. (00-59)
 * s = valor do segundo sem zero. (0-59)
 * ss = valor do segundo com zero. (00-59)
 * z = valor do milissegundo sem zero. (0-999)
 * zzz = valor do milissegundo com zero. (000-999)
 * AP ou a = usa AM e PM.
 * ap ou a = usa am e pm.
 * t = a zona do fuso horário.
 */

#include <QTextStream>
#include <QTime>

int main8(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //pegando o horário atual
    QTime horario = QTime::currentTime();

    //Alguns formatos customizados como máscara de .toString()
    out << "Agora = " << horario.toString("hh:mm:ss.zzz") << endl;
    out << "Agora = " << horario.toString("h:m:s a") << endl;
    out << "Agora = " << horario.toString("h:m A") << endl;
    out << "Agora = " << horario.toString("h:m AP") << endl;
}
