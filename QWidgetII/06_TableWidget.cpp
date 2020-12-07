#include <QHBoxLayout>
#include <QTableWidget>
#include "06_TableWidget.h"

Tabela::Tabela(QWidget *parent): QWidget(parent)
{
    //Instância de QHBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //Instância de QTableWidget
    QTableWidget *tblTabela = new QTableWidget(25, 25, this);

    //Adicionando tabela ao QHboxLayout
    hbxCaixa -> addWidget(tblTabela);
}
