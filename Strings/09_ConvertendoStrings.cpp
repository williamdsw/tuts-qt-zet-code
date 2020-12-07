/* CONVERTENDO STRINGS
 *
 * Podemos utilizar métodos como toInt(), toFloat() para converter strings em valores numéricos */

#include <QTextStream>

int main9(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //definindo
    QString a = "12", b = "15", c, d;

    //toInt() = converte para inteiro a string, se for numérico
    out << QString("%1 + %2 = %3").arg(a).arg(b).arg(a.toInt() + b.toInt()) << endl;

    //definindo...
    int n1 = 40, n2 = 33;

    //setNum(numero) = Converte número (int, float, etc) para String
    out << QString("%1 + %2 != %3").arg(n1).arg(n2).arg(c.setNum(n1) + d.setNum(n2)) << endl;

    return 0;
}
