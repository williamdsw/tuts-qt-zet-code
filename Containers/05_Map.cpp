/* QMAP
 *
 * É um array associativo que guarda valores do tipo valor-chave.
 * São parecidos com dicionários de C#
 *
 */

#include <QTextStream>
#include <QMap>

int main5(void)
{
    //declarado output
    QTextStream out(stdout);

    //criando QMap,sendo QString o tipo da chave, e int o tipo do valor
    QMap<QString, int> itens = {{"Moedas", 5} , {"Livros", 3}};

    //insert() = insere uma chave e um valor no QMap
    itens.insert("Garrafas", 4);

    //values() = retorna os valores do QMap
    QList<int> valores = itens.values();

    //printando..
    out << "Valores do QMap : " << endl;

    //iterando
    for(int valor : valores)
    {
        out << valor << " ";
    }

    //keys() = retorna as chaves do QMap
    QList<QString> chaves = itens.keys();

    //printando
    out << "\nChaves do QMap : " << endl;

    //iterando
    for(QString chave : chaves)
    {
        out << chave << " ";
    }

    //QMapIterator = iterador para o QMap
    QMapIterator<QString, int> it(itens);

    //printando
    out << "\nChaves e Valores do QMap : " << endl;

    //hasNext() = enquanto tiver um próximo item
    while(it.hasNext())
    {
        //next() = chama o próximo item
        it.next();

        //printando chaves e valores. key() = retorna a chave, value() = retorna o valor
        out << it.key() << " : " << it.value() << endl;
    }
}

