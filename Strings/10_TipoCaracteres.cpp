/* TRABALHANDO COM TIPOS DE CARACTERES
 *
 * Caracteres são dividos em várias categorias = digitos, letras, espaços, e pontuações. Cada QString é feita de QChars.
 * QChar possui métodos como isLetter(), isDigit(), isPunct(), isSpace() para lidar com isso */

#include <QTextStream>

int main10(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //declarando strings e integers
    QString str = "7 Brancas, 3 rosas vermelhas";
    int letra = 0, digito = 0, pontuacao = 0, espaco = 0;

    //iterando a string
    foreach(QChar c, str)
    {
        //se for letra
        if(c.isLetter())
            letra++;

        //se for digito
        if(c.isDigit())
            digito++;

        //se for pontuação
        if(c.isPunct())
            pontuacao++;

        //se for espaço em branco
        if(c.isSpace())
            espaco++;
    }

    //printando string
    out << str << endl;

    //printando integers
    out << QString("Essa frase contém %1 caracteres").arg(str.size()) << endl;
    out << QString("%1 são letras").arg(letra) << endl;
    out << QString("%1 são digitos").arg(digito) << endl;
    out << QString("%1 são pontuações").arg(pontuacao) << endl;
    out << QString("%1 são espaços").arg(espaco) << endl;

    return 0;
}
