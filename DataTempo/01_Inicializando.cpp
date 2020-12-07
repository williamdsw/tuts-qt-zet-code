/* INICIALIZANDO OBJETOS
 *
 * Existem duas formas : Pelo construtor (), ou criando objetos vazios e preenchendo-os depois.
 *
 */

#include <QTextStream>
#include <QDate>
#include <QTime>

int main1(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //1 - Instânciando pelo construtor QDate(ano, mes, dia)
    QDate data1(2015, 10, 2);

    //printando a data utilizando .toString()
    out << "Primeira data = " << data1.toString() << endl;


    //Criando objeto vazio da data
    QDate data2;

    //2 - setDate(ano, mes, dia) = Seta um valor de data para objeto
    data2.setDate(2016, 9, 3);

    //printando
    out << "Segunda data = " << data2.toString() << endl;


    //1 - Instânciando pelo construtor QTime(hora, minuto, segundo, milissegundo)
    QTime hora1(13, 33, 55, 42);

    //printando com .toString() + a máscara "hh:mm:ss:zzz"
    out << "Primeiro tempo = " << hora1.toString("hh:mm:ss:zzz") << endl;

    //Crinado objeto vazio do tempo
    QTime hora2;

    //2 - setHMS(hora, minuto, segundo, milissegundo) = Seta um valor de tempo para objeto
    hora2.setHMS(15, 43, 23, 24);

    //printado
    out << "Segundo tempo = " << hora2.toString("hh:mm:ss:zzz") << endl;
}
