/* QSET
 *
 * Esse conteiner traz um valor matemático singular com busca rápida. Os valores são guardados em ordem não específica.
 *
 */

#include <QTextStream>
#include <QSet>
#include <QList>
#include <algorithm>

int main4(void)
{
    QTextStream out(stdout);

    //Declaração dos QSet's , mesmo com valores repetidos
    QSet<QString> cores1 = {"Azul", "Amarelo", "Vermelho"};
    QSet<QString> cores2 = {"Verde", "Laranja", "Azul"};

    //size() = retorna o número de itens do QSet
    out << QString("Existem %1 cores no QSet 1").arg(cores1.size()) << endl;

    //insert() = Adiciona um novo valor ao QSet
    cores1.insert("Marrom");

    //printa o tamanho novamente...
    out << QString("Existem %1 cores no QSet 1").arg(cores1.size()) << endl;

    //unite() = unifica dois QSet, e remove possíveis duplicatas
    cores1.unite(cores2);

    //printa o tamanho novamente...
    out << QString("Existem %1 cores no QSet 1 unido com QSet 2").arg(cores1.size()) << endl;

    //iterando com for...
    for(QString cor : cores1)
    {
        out << cor <<  " ";
    }

    /* Não é possível ordernar um QSet, por isso temos de passar seus valores para um QList.
     * values() = retorna os valores do QSet em um QList*/
    QList<QString> cores3 = cores1.values();

    //utilizando sort() para ordernar...
    std::sort(cores3.begin(), cores3.end());

    //printando..
    out << "\n*********************" << endl;

    //printando...
    out << "Cores ordenadas descrecente:" << endl;

    //iterando pelo foreach
    foreach(QString cor, cores3)
    {
        out << cor << " ";
    }

    out << endl;
}

