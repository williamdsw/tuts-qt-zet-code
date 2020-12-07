/* QSTRINGLIST
 *
 * É um conteiner encarregado de conter apenas QStrings.
 *
 */

#include <QTextStream>
#include <QList>

int main3(void)
{
    //Definindo output
    QTextStream out(stdout);

    //Declarando QString
    QString bandas = "Pink Floyd, Queen, Led Zeppelin, Rush, Black Sabbath";

    //QString::split(QString) = Corta a String para Substrings de acordo com a string especificada
    QStringList listaBandas = bandas.split(",");

    //QStringListIterator = é um iterador para QStringList
    QStringListIterator it(listaBandas);

    //hasNext() = Se houver um próximo item
    while(it.hasNext())
    {
        //next() = próximo item. trimmed() = Corta o espaço em branco na string.
        out << it.next().trimmed() << endl;
    }
}
