// TRABALHANDO COM DIRETÓRIOS

#include <QTextStream>
#include <QDir>

int main7(void)
{
    //define output
    QTextStream out(stdout);

    //Criando uma instância de QDir
    QDir diretorio;

    //mkdir() = Cria um diretório, e retorna true se der certo.
    if(diretorio.mkdir("Teste"))
    {
        out << "Diretorio criado com sucesso" << endl;
    }

    //mkdir()...
    diretorio.mkdir("Teste2");

    //exists() = Verifica se existe tal diretório
    if(diretorio.exists("Teste2"))
    {
        //rename(nomeAntigo, novoNome) = Renomeia um diretório existente, e retorna true se der certo.
        out << "Diretorio Teste2 renomeado com sucesso" << endl;
    }

    //mkpath() = Cria todos diretórios 'pai' de uma vez só.
    diretorio.mkpath("abc/123");
}
