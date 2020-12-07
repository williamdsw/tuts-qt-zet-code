// LENDO DADOS DE ARQUIVOS

#include <QTextStream>
#include <QFile>

int main3(void)
{
    //define output
    QTextStream out(stdout);

    //cria instância do arquivo
    QFile arquivo("distribuicoes.txt");

    //verifica se o arquivo não abriu. ReadOnly = leitura apenas
    if(!arquivo.open(QIODevice::ReadOnly))
    {
        qWarning("Não foi possível abrir o arquivo");

        return 1;
    }

    //declarando input
    QTextStream input(&arquivo);

    //atEnd() = no fim do arquivo, por isso ! no while.
    while(!input.atEnd())
    {
        //readLine() = lê a linha atual
        out << input.readLine() << endl;
    }

    //close() = fecha instância do arquivo.
    arquivo.close();
}
