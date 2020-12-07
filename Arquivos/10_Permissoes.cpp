// PERMISSÕES

#include <QTextStream>
#include <QFile>

int main11(void)
{
    //define output
    QTextStream out(stdout);

    //Definindo nome do arquivo
    QString arquivo = "teste.txt";

    //pegando as permissões do arquivo. permissions() = retorna enumeração das flags de perimissões
    QFile::Permissions ps = QFile::permissions(arquivo);

    //Declarando uma string para armazenar essas permissões
    QString permissoes;

    //adicionando conteúdo
    permissoes.append("Dono : ");

    //ReadOwner, WriteOwner, ExeOwner = se refere à o dono do arquivo
    if(ps & QFile::ReadOwner)
    {
        permissoes.append("r");
    }
    else
    {
        permissoes.append("-");
    }

    if(ps & QFile::WriteOwner)
    {
        permissoes.append("w");
    }
    else
    {
        permissoes.append("-");
    }

    if(ps & QFile::ExeOwner)
    {
        permissoes.append("x");
    }
    else
    {
        permissoes.append("-");
    }

    //Adicionando conteúdo
    permissoes.append("\nGrupo : ");

    //ReadGroup, WriteGroup, ExeGroup = se refere ao grupo do dono
    if(ps & QFile::ReadGroup)
    {
        permissoes.append("r");
    }
    else
    {
        permissoes.append("-");
    }

    if(ps & QFile::WriteGroup)
    {
        permissoes.append("w");
    }
    else
    {
        permissoes.append("-");
    }

    if(ps & QFile::ExeGroup)
    {
        permissoes.append("x");
    }
    else
    {
        permissoes.append("-");
    }

    //Adiciona conteúdo
    permissoes.append("\nOutros : ");

    //ReadOther, WriteOther, ExeOther = se refere à outros usuários
    if(ps & QFile::ReadOther)
    {
        permissoes.append("r");
    }
    else
    {
        permissoes.append("-");
    }

    if(ps & QFile::WriteOther)
    {
        permissoes.append("w");
    }
    else
    {
        permissoes.append("-");
    }

    if(ps & QFile::ExeOther)
    {
        permissoes.append("x");
    }
    else
    {
        permissoes.append("-");
    }

    //printando
    out << "Arquivo : " << arquivo << endl;
    out << "Permissoes" << endl;
    out << permissoes << endl;
}

