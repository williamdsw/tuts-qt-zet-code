#include <QPushButton>
#include <QApplication>
#include <QHBoxLayout>
#include "01_Click.h"

Clique::Clique(QWidget *parent) : QWidget(parent)
{
    //Instância da QHBoxLayout
    QHBoxLayout *hbxCaixaH = new QHBoxLayout(this);

    //Setando espaço antes do botão
    hbxCaixaH -> setSpacing(5);

    //Instância de QPushButton
    QPushButton *btnSair = new QPushButton("Sair", this);

    //Adicionando botão do QHBoxLayout
    hbxCaixaH -> addWidget(btnSair, 0, Qt::AlignLeft | Qt::AlignTop);

    /* connect(QObject, SIGNAL, QObject, SLOT) = Esse método conecta um signal à um slot.
     * Quando o botão é clicado, ele emite um signal.
     * Quando o signal é emitido, o slot é chamado.
     * */
    connect(btnSair, &QPushButton::clicked, qApp, &QApplication::quit);
}
