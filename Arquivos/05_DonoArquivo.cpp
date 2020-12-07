// DONO DO ARQUIVO E GRUPOS

#include <QTextStream>
#include <QFileInfo>

int main5(void)
{
    //define output
    QTextStream out(stdout);

    //Definindo nome e caminho do arquivo
    QString arquivo("distribuicoes.txt");

    //definindo QFileInfo que conterá as informações do arquivo
    QFileInfo informacoes(arquivo);

    //owner() = retorna o dono do arquivo
    QString dono = informacoes.owner();

    //grupo() = retorna o grupo do arquivo
    QString grupo = informacoes.group();

    //Printando informações
    out << "Arquivo : " << arquivo << endl;
    out << "Dono : " << dono << endl;
    out << "Grupo : " << grupo << endl;
}
