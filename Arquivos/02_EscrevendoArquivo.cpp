// ESCREVENDO DADOS EM ARQUIVOS

#include <QTextStream>
#include <QFile>

int main2(void)
{
    //definindo output
    QTextStream out(stdout);

    //definindo nome do arquivo
    QString nomeArquivo = "distribuicoes.txt";

    //criando instância do arquivo
    QFile arquivo(nomeArquivo);

    //open() = verifica se abriu o arquivo. QIODEVICE::WriteOnly = Define que o modo é só de escrita.
    if (arquivo.open(QIODevice::WriteOnly))
    {
        //define output para o arquivo
        QTextStream output(&arquivo);

        //escrevendo dados no arquivo
        output << "Ubuntu" << endl;
        output << "Suse" << endl;
        output << "Debian" << endl;
        output << "Kali Linux" << endl;

        out << "Escrito com sucesso!" << endl;

    }
    else
    {
        //emite aviso
        qWarning("Não foi possível abrir arquivo");
    }

    //close() = fecha arquivo
    arquivo.close();
}
