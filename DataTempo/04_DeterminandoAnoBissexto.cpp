/* DETERMINANDO ANOS BISSEXTOS
 *
 * Um ano bissexto é aquele que contém 366 dias, e ocorre a cada 4 anos. Para isso, podemos utilizar o método
 * QDate::isLeapYear(ano) para pegar esse ano.
 *
 */

#include <QTextStream>
#include <QDate>

int main4(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //Declarando QList de inteiros
    QList<int> anos;

    //Declarando QList de inteiros com valores definindos
    //QList<int> anos({2000,2001,2002,2003,2004});

    //Preenchendo a lista
    for(int i = 1980; i <= 2017; i++)
    {
        //append() = adiciona um valor à lista
        anos.append(i);
    }

    //iterando
    foreach(int ano, anos)
    {
        //QDate::isLeapYear(ano) = verifica se é ano bissexto
        if(QDate::isLeapYear(ano))
        {
            out << QString("%1 e um ano bissexto").arg(ano) << endl;
        }
        else
        {
            out << QString("%1 nao e um ano bissexto").arg(ano) << endl;
        }

    }
}
