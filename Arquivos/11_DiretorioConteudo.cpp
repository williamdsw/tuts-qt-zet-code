// LISTANDO CONTEÚDO DE DIRETÓRIOS

#include <QTextStream>
#include <QFileInfo>
#include <QDir>

int main(void)
{
    //define output
    QTextStream out(stdout);

    //definindo nome do caminho do diretório
    QString nome("/run/media/william/SAMSUNG/Bandas/Games OST/Mega Man/X Series/X/");

    //Criando objeto de QDir
    QDir diretorio(nome);

    //Verificando se o diretório existe
    if(!diretorio.exists())
    {
        qWarning("Diretório não existe!");

        return 1;
    }

    //setFilter() = Especifica quais tipos de arquivos devem ser retornados pelo entryInfoList()
    diretorio.setFilter(QDir::Files | QDir::AllDirs);

    //setSorting() = Seta a ordenação dos arquivos do entryInfoList
    diretorio.setSorting(QDir::Name);

    //entryInfoList() = retorna uma lista de QFileInfo de todos arquivos e diretórios
    QFileInfoList lista = diretorio.entryInfoList();


    int tamMax = 0;

    //iterando para determinar o máximo de caracteres do nome do arquivo no output
    foreach(QFileInfo info, lista)
    {
        //fileName() = nome do arquivo
        QString nome = info.fileName();

        //size() = tamanho da string
        int tamanho = nome.size();

        if(tamanho > tamMax)
        {
            tamMax = tamanho;
        }
    }

    //variável que será o width do LeftJustified (Coluna)
    int len = tamMax + 2;

    //printando o nome da coluna, onde leftJustified() é tipo o "header"
    out << QString("Arquivo").leftJustified(len).append("Bytes") << endl;

    //Iterando novamente pela lista, agora exibindo os itens
    for(int i = 0; i < lista.size(); i++)
    {
        //pega o iten no índice especificado
        QFileInfo info = lista.at(i);

        //Pega o nome do arquivo, com o espaçamento justificado à esquerda
        QString str = info.fileName().leftJustified(len);

        //Adiciona o "tamanho" do arquivo (size) no segunda coluna (string)
        str.append(QString("%1").arg(info.size()));

        //printa
        out << str << endl;
    }
}

