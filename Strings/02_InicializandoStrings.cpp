// FORMAS DE INICIALIZAR STRINGS

#include <QTextStream>

int main2(void)
{
    //Criando um objeto QTextStream, que é uma classe que serve para ler e escrever textos.
    QTextStream out(stdout);

    //1 - Atribuindo valor =
    QString str1 = "O trem da noite";
    out << str1 << endl;

    //2 - Utilizando construtor 1 ()
    QString str2("A rosa amarela");
    out << str2 << endl;

    //Utilizando c_str() apartir de outra string
    std::string s1 = "Um céu azul";
    QString str3 = s1.c_str();
    out << str3 << endl;

    //utilizando QString::fromLatin1() com data() e size() de parâmetros
    std::string s2 = "Um nevoeiro fino";
    QString str4 = QString::fromLatin1(s2.data(), s2.size());
    out << str4 << endl;

    //utilizando um array de char declarado anteriormente com construtor 2 ()
    char s3[] = "Uma floresta profunda";
    QString str5(s3);
    out << str5 << endl;

    return 0;
}
