/* CONSTRUÇÃO DINÂMICA DE STRING
 *
 * A construção dinâmica de string nos permite substituir caracteres especificos com valores.
 * Utilizando o método arg() para fazer a interpolação.
 */

#include <QTextStream>

int main5(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //Utiliza-se % junto com o numero do argumento. Exemplo : %1 = primeiro argumento
    QString a = "Aquelas são %1 rosas brancas";
    int numero = 12;

    //arg() = substitui esse argumento especificado com o valor indicado
    out <<  a.arg(numero) << endl;

    QString b = "A árvore está à %1 KM de distância";
    double distancia = 2.57;

    out << b.arg(distancia) << endl;

    //%1, %2 ...
    QString c = "Nós temos %1 limões e %2 laranjas";
    int limoes = 4, laranjas = 3;

    //arg().arg()... etc
    out << c.arg(limoes).arg(laranjas) << endl;

    return 0;
}
