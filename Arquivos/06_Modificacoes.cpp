// MODIFICACOES NO ARQUIVO

#include <QTextStream>
#include <QFileInfo>
#include <QDateTime>

int main6(void)
{
    //define output
    QTextStream out(stdout);

    //Declarando nome e endereço do arquivo
    QString arquivo = "distribuicoes.txt";

    //Declarando QFileInfo que conterá informações do arquivo
    QFileInfo informacoes(arquivo);

    //lastRead() = retorna a data da última leitura
    QDateTime ultimaLeitura = informacoes.lastRead();

    //lastModified() = retorna a data da última modificação
    QDateTime ultimaModificacao = informacoes.lastModified();

    //printando...
    out << "Arquivo : " << arquivo << endl;
    out << "Ultima vez lido : " << ultimaLeitura.toString() << endl;
    out << "Ultima vez modificado : " << ultimaModificacao.toString() << endl;
}
