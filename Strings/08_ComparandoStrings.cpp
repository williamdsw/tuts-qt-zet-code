/* COMPARANDO STRINGS
 *
 * Utiliza-se o método static QString::compare, que retorna um valor inteiro */

#include <QTextStream>

//definindo uma constante = 'define' + 'nome da constante' + 'valor'
#define STR_EQUAL 0

int main8(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //Declaração de strings
    QString a = "Chuva";
    QString b = a;
    QString c = "chuva\n";

    //QString::compare(primeiro, segundo) = Compara duas strings
    if(QString::compare(a,b) == STR_EQUAL)
    {
        out << "a == b" << endl;
    }
    else
    {
        out << "a != b" << endl;
    }

    b = "chuva";

    out << "Comparacao em Case insensitive : ";

    //QString::compare(primeiro, segundo, Qt::CaseSensitivity) = Compara duas strings em case insensitive
    if(QString::compare(a,b, Qt::CaseInsensitive) == STR_EQUAL)
    {
        out << "a == b" << endl;
    }
    else
    {
        out << "a != b" << endl;
    }

    //QString::chop(indice) = remove o último caracter (?)
    c.chop(1);

    if(QString::compare(b,c) == STR_EQUAL)
    {
        out << "b == c" << endl;
    }
    else
    {
        out << "b != c" << endl;
    }

    return 0;
}
