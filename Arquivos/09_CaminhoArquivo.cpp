// CAMINHO DO ARQUIVO

#include <QTextStream>
#include <QFileInfo>

int main9(void)
{
    //define output
    QTextStream out(stdout);

    //Definindo nome do arquivo
    QString arquivo("teste.txt");

    //Definindo QFileInfo que terá informações do arquivos
    QFileInfo informacoes(arquivo);

    //fileName() = retorna o nome do arquivo
    out << "Nome do arquivo: " << informacoes.fileName() << endl;

    //absoluteFilePath() = retorna o caminho absoluto do arquivo. canonicalFilePath() também
    out << "Caminho canonico ou absoluto do arquivo: " << informacoes.absoluteFilePath() << endl;

    //baseName() = retorna o nome base do arquivo
    out << "Nome base: " << informacoes.baseName() << endl;

    //completeBaseName() = retorna o nome base completo do arquivo
    out << "Nome base completo: " << informacoes.completeBaseName() << endl;

    //suffix() = retorna o sufixo (extensão) do arquivo
    out << "Sufixo: " << informacoes.suffix() << endl;

    //completeSuffix() = retorna o sufixo completo do arquivo
    out << "Sufixo completo: " << informacoes.completeSuffix()  << endl;

    //canonicalPath() = retorna o caminho da pasta que detém o arquivo. absolutePath() também
    out << "Caminho canonico ou absoluto : " << informacoes.canonicalPath() << endl;
}
