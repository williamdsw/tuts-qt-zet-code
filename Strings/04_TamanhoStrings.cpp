// ACESSANDO O TAMANHO DA STRING

#include <QTextStream>

int main4(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //Declarando string
    QString a = "Águia";
    QString b = "Águia\n";
    QString c = "Águia ";
    QString d = "Águia dourada";

    //length(), count(), size() , todos retornam o tamanho total de caracteres da string
    out << a.length() << endl;
    out << b.count() << endl;
    out << c.size() << endl;
    out << d.length() << endl;

    return 0;
}
