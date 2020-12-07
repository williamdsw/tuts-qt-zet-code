/* ALINHANDO STRINGS
 *
 * Temos os métodos leftJustified() e rightJustified()*/

#include <QTextStream>

int main11(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //declarando strings
    QString a = "Nome : ", b = "Ocupação : ", c = "Residência : ", d = "Estado civil : ";

    //Pegando tamanho da string
    int largura = d.size();

    //rightJustified(width, fill) = Coloca alinhado à direita
    out << a.rightJustified(largura, ' ') << "William\n";
    out << b.rightJustified(largura, ' ') << "Programador\n";
    out << c.rightJustified(largura, ' ') << "Itu\n";
    out << d.rightJustified(largura, ' ') << "Solteiro\n";

    //leftJustified(width, fill) = Coloca alinhado à esquerda
    out << QString("Teste : ").leftJustified(largura, ' ') << "Teste\n";

    return 0;
}
