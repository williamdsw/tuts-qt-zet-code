// TAMANHO DE ARQUIVOS

#include <QTextStream>
#include <QFileInfo>

int main1(int argc, char *argv[])
{
    //definindo output
    QTextStream out(stdout);

    //verificando argc
    if(argc != 1)
    {
        //emite um alerta
        qWarning("Uso : arquivo file_size");

        return 1;
    }

    //pega o nome do arquivo pelo argv
    QString nomeArquivo = argv[0];

    //exists() = verifica se o arquivo existe
    if(!QFile(nomeArquivo).exists())
    {
        qWarning("Arquivo não existe!");

        return 1;
    }

    //Objeto QFileInfo com nomeArquivo de parâmetro
    QFileInfo informacao(nomeArquivo);

    //size() = retorna o tamanho do arquivo (qint64)
    qint64 tamanho = informacao.size();

    //define string
    QString str = "O Arquivo tem %1 bytes";

    //printa string
    out << str.arg(tamanho) << endl;
}
