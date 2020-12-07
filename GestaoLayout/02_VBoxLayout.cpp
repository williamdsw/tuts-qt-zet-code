#include "02_VBoxLayout.h"
#include <QVBoxLayout>
#include <QPushButton>

//Definição do Construtor
CaixaVertical::CaixaVertical(QWidget *parent) : QWidget(parent)
{
    //Instância de QVBoxLayout, que é um Gestor de Layout Vertical
    QVBoxLayout *vbxCaixa = new QVBoxLayout(this);

    //setSpacing(int px) = Seta o espaço entre os objetos filhos baseado em número de pixels.
    vbxCaixa -> setSpacing(1);

    //Instâncias de QPushButtons
    QPushButton *btnConf = new QPushButton("Configurações", this);
    QPushButton *btnContas = new QPushButton("Contas", this);
    QPushButton *btnEmprestimos = new QPushButton("Empréstimos", this);
    QPushButton *btnDinheiro = new QPushButton("Dinheiro", this);
    QPushButton *btnDebitos = new QPushButton("Débitos", this);

    /* setSizePolicy(QSizePolicy hor, QSizePolicy ver) = Seta para o botão expandir de tamanho para ambos lados
     * QSizePolicy::Expanding = O componente irá expandir */
    btnConf -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    btnContas -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    btnEmprestimos -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    btnDinheiro -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    btnDebitos -> setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //addWidget(QWidget) = Adiciona o widget ao QVBoxLayout.
    vbxCaixa -> addWidget(btnConf);
    vbxCaixa -> addWidget(btnContas);
    vbxCaixa -> addWidget(btnEmprestimos);
    vbxCaixa -> addWidget(btnDinheiro);
    vbxCaixa -> addWidget(btnDebitos);

    //setLayout(QLayout) = Seta o Gestor de Layout para o QWidget principal
    setLayout(vbxCaixa);
}
