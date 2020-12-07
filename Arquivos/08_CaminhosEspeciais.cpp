// CAMINHOS ESPECIAIS

#include <QTextStream>
#include <QDir>

int main8(void)
{
    //define output
    QTextStream out(stdout);

    //currentPath() = retorna o diretório atual da aplicação
    out << "Caminho atual : " << QDir::currentPath() << endl;

    //homePath() = retorna o diretório Home do usuário
    out << "Caminho da Home : " << QDir::homePath() << endl;

    //tempPath = retorna o diretório temporário
    out << "Caminho temporario : " << QDir::tempPath() << endl;

    //rootPath() = retorna o diretório do root
    out << "Caminho do Root : " << QDir::rootPath() << endl;;
}
