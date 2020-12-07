/* LOOPANDO SOBRE STRINGS
 *
 * Uma QString é feita de QChars. Podemos utilizar loops para iterar sobre itens da QString ) */

#include <QTextStream>

int main7(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //declaração
    QString str = "Existem muitas estrelas";

    //mostrando conteúdo
    out << str << endl;

    out << "foreach : ";

    //foreach(variável, coleção) = Um for mais sofisticado
    foreach (QChar c, str)
    {
        //printa o item
        out << c << " " ;
    }

    out << endl;

    out << "for 1 : ";

    /* for tradicional, onde utiliza um ponteiro de QChar de iterador, que recebe 'str.begin()'
     * de inicialização, verifica se ele é diferente de 'str.end()' e incrementa. */
    for(QChar *it = str.begin(); it != str.end(); it++)
    {
        //printa o item
        out << *it << "  ";
    }

    out << endl;

    out << "for 2 : ";

    /* for tradicional, mais simples, onde declara-se o iterador e verifica se ele é menor que o
     * tamanho (size()) da string e incrementa */
    for(int i = 0; i < str.size(); i++)
    {
        //at(indice) = printa o item no indice especificado
        out << str.at(i) << "_";
    }

    out << endl;

    out << "while : ";

    int i = 0;

    //while = onde i é menor que size() e incrementa no escopo.
    while(i < str.size())
    {
        out << str.at(i) << ".";
        i++;
    }

    out << endl;

    out << "do-while : ";

    i = 0;

    //do-while = onde executa uma vez, incrementa e verifica se i é menor size()
    do
    {
        out << str.at(i) << "/";
        i++;
    } while(i < str.length());

    out << endl;

    return 0;
}
