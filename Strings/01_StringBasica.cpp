/* TRABALHANDO COM STRINGS EM QT5
 *
 * O Qt contém uma classe chamada QString para mainuplar strings.
 * Ela providencia uma string de caracteres de Unicode, onde armazena uma de string de 16 bits QChars.
 * Cada Char corresponde à um caracter Unicode 4.0. Nesse caso, QStrings podem ser modificadas
 */

#include <QTextStream>

int main1(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //Declarando string
    QString a = "manipulando";

    //append() = adiciona uma string "na frente"
    a.append(" Strings");

    //prepend() = adiciona uma string "atrás"
    a.prepend("Estou ");

    //printando string
    out << a << endl;

    //count() = retorna o número de caracteres da string. length() e size() são equivalentes.
    out << "Essa string contem " << a.count() << " caracteres" << endl;

    //toUpper() = coloca o conteúdo da string em maiúsculo
    out << "Maiusculo : " << a.toUpper() << endl;

    //toLower() = coloca o conteúdo da string em minúsculor
    out << "Minusculo : " << a.toLower() << endl;

    return 0;
}
