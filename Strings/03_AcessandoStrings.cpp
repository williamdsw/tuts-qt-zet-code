// ACESSANDO CARACTERES DA STRING

#include <QTextStream>

int main3(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //Declarando string
    QString a = "Águia";

    //Printando string
    out << a << endl;

    //a[indice] = Acessa o caracter em determinado indice
    out << "Primeiro caracter - a[0] : " << a[0] << endl;
    out << "Quarto caracter - a[3] : " << a[3] << endl;

    //at(indice) = retorna o caracter em determinado indice
    out << "Caracter no indice 2 : " << a.at(2) << endl;

    //isNull() = verifica se tal indice é nulo
    if(a.at(5).isNull())
    {
        out << "Indice fora de alcance" << endl;
    }

    return 0;
}
