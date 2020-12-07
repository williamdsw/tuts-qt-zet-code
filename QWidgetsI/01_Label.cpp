#include <QVBoxLayout>
#include <QFont>
#include <QFile>
#include <QTextStream>
#include "01_Label.h"

Label::Label(QWidget *parent) : QWidget(parent)
{
    //Variável para conter a letra
    QString letra;

    //Instancia de arquivo
    QFile arquivo("01_Pain.txt");

    //Abrindo arquivo apenas para leitura
    arquivo.open(QIODevice::ReadOnly);

    //Abrindo o "leitor" do arquivo
    QTextStream leitor(&arquivo);

    //Preenchendo a string
    while(!leitor.atEnd())
    {
        letra += leitor.readLine() + "\n";
    }

    //Fechando arquivo
    arquivo.close();

    //Instância de label que vai receber a letra
    lblLabel = new QLabel(letra, this);

    //Setando a fonte
    lblLabel -> setFont(QFont("Oxygen Mono", 14));

    //Instância de QVBoxLayout
    QVBoxLayout *vbxCaixa = new QVBoxLayout();

    //Adicionando Label ao Layout
    vbxCaixa -> addWidget(lblLabel);

    //Definindo Layout
    setLayout(vbxCaixa);
}
