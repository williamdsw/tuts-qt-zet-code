// COPIANDO ARQUIVOS

#include <QTextStream>
#include <QFile>

int main4(void)
{
    //definindo output
    QTextStream out(stdout);

    //pegando nome do arquivo original
    QString original = "distribuicoes.txt";

    //Se ele não existir...
    if(!QFile(original).exists())
    {
        //emite um alerta
        qWarning("A origem do arquivo não existe");

        return 1;
    }

    //nome do arquivo de cópia
    QString copia = "teste.txt";

    //copy(nomeOriginal, nomeCopia) = Copia um arquivo "original" para o arquivo "cópia"
    if(QFile::copy(original, copia))
    {
        out << "Copia de arquivo bem sucedida!" << endl;
    }
    else
    {
        out << "Erro na copia" << endl;
    }

}
