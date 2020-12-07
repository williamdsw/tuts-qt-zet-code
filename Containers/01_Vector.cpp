/* QVECTOR
 *
 * É uma classe onde são guardados arrays dinâmicos, porém, não recomendado para arrays enormes.
 *
 * */

#include <QTextStream>
#include <QVector>

int main1(void)
{
    //Declaração do ouput
    QTextStream out(stdout);

    //Declaração de QVector de integers
    QVector<int> valores = {1 ,2 ,3 ,4 ,5};

    out << "Iteracao pelo vetor : " << endl;

    //Iterando com foreach
    foreach(int valor, valores)
    {
        out << valor << " ";
    }

    //size() = retorna o número de itens do QVector
    out << "\nTamanho do QVector de inteiros : " << valores.size() << endl;

    //first() = retorna o primeiro item do QVector
    out << "Primeiro item do QVector : " << valores.first() << endl;

    //last() = retorna o último item do QVector
    out << "Ultimo item do QVector : " << valores.last() << endl;

    //append() = Adiciona um item ao final da fila.
    valores.append(6);

    //prepend() = Adiciona um item no começo da fila
    valores.prepend(0);

    out << "Nova iteracao pelo vetor : " << endl;

    //outra forma de utilizar o for... (parece foreach)
    for(int valor : valores)
    {
        out << valor << " ";
    }

    out << endl;
}
