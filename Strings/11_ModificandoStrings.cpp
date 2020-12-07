/* MODIFICANDO STRINGS
 *
 * Alguns métodos que modificando a String invés de uma cópia dela */

#include <QTextStream>

int main11(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //declarando
    QString str = "amável";

    //Adicionando conteúdo "atrás"
    str.prepend("Estação ");

    //printando
    out << str << endl;

    //remove(index, size) = remove uma substring de acordo com indice e tamanho especifícos
    str.remove(0, 7);

    //printando
    out << str << endl;

    //replace(index, size, QString) = substitui uma substring de acordo com indice, tamanho e conteúdo especifícos
    str.replace(0, 0, "Garota");

    //printando
    out << str << endl;

    //clear() = limpa a string
    str.clear();

    /* isEmpty() = verifica se a string está vazia
     * isNull() = verifica se está nula, exemplo = "" */
    if(str.isEmpty() || str.isNull())
    {
        out << "A String agora esta vazia ou nula" << endl;
    }

    return 0;
}
