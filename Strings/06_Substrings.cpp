/* SUBSTRINGS
 *
 * Quando manipulamos strings, as vezes é necessário achar substrings de strings normais.
 * Os métodos left(), right() e mid() estão à nossa disposição
 */

#include <QTextStream>

int main6(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    QString str = "O trem da noite";

    //right(numero) = retorna o numero de caracteres contando da direita (término)
    out << str.right(5) << endl;

    //left(numero) = retorna o numero de caracteres contando da esquerda (ínicio)
    out << str.left(9) << endl;

    //mid(indice, numero) = retorna o numero de caracteres começando o indice indicado
    out << str.mid(4, 5) << endl;

    /* QStringRef é uma classe versão read-only de QString. 'sub' é um objeto que utiliza
     * 'str' e define a posição de inicio, e a quantidade de caracteres.
     * construtor = (*string, position, length) */
    QStringRef sub(&str, 0, 5);

    //pega o texto da subtring
    out << sub.toString() << endl;

    return 0;
}
