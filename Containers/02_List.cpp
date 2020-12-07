/* QLIST
 *
 * É um conteiner parecido com QVector, porém feito para ser uma lista de elementos.
 *
 */

#include <QTextStream>
#include <QList>
#include <algorithm>

int main2(void)
{
    //Definindo output
    QTextStream out(stdout);

    //Criando QList de QStrings
    QList<QString> times = { "Sao Paulo", "Santos", "Corinthians", "Palmeiras" };

    out << "*********Itens**********" << endl;

    //Iterando...
    for(int i = 0; i < times.size(); i++)
    {
        out << times.at(i) << endl;
    }

    //Adicionando um item
    times << "Ponte Preta";

    //printando
    out << "*********Itens**********" << endl;

    //sort(começo, fim) = Coloca a lista em ordem crescente
    std::sort(times.begin(), times.end());

    //Iterando novamente
    for(QString time : times)
    {
        out << time << endl;
    }
}
