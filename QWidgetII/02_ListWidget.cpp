//inclusão de headers necessários
#include "02_ListWidget.h"
#include <QVBoxLayout>
#include <QInputDialog>

//Construtor
ListaFilmes::ListaFilmes(QWidget *parent) : QWidget(parent)
{
    //Declaração de Layout Vertical
    QVBoxLayout *vbxCaixaV = new QVBoxLayout();

    vbxCaixaV -> setSpacing(10);

    //Declaração de Layout Horizontal
    QHBoxLayout *hbxCaixaH = new QHBoxLayout(this);

    //QListWidget = Fornece uma lista de widgets
    lstFilmes = new QListWidget(this);

    //addItem(QString) = Adiciona item ao QListWidget
    lstFilmes -> addItem("A Profecia");
    lstFilmes -> addItem("O Exorcista");
    lstFilmes -> addItem("Sexta Feira 13");
    lstFilmes -> addItem("A Noite do Pesadelo");
    lstFilmes -> addItem("O Iluminado");

    //Declarando buttons
    btnAdicionar = new QPushButton("Adicionar", this);
    btnRenomear = new QPushButton("Renomear", this);
    btnRemover = new  QPushButton("Remover", this);
    btnLimpar = new QPushButton("Limpar Lista", this);

    //setSpacing(int) = Adiciona espaços entre os botões
    vbxCaixaV -> setSpacing(3);

    //addStretch(int num) = Coloca um espaço vazio e expansável.
    vbxCaixaV -> addStretch(1);

    //Adicionando botões ao QVBoxLayout
    vbxCaixaV -> addWidget(btnAdicionar);
    vbxCaixaV -> addWidget(btnRenomear);
    vbxCaixaV -> addWidget(btnRemover);
    vbxCaixaV -> addWidget(btnLimpar);

    //addStretch(int num) = Coloca um espaço vazio e expansável.
    vbxCaixaV -> addStretch(1);

    //Adiciondo o QListWidget ao QHBoxLayout
    hbxCaixaH -> addWidget(lstFilmes);

    //Setando espaço entre o QListWidget e o QVBoxLayout
    hbxCaixaH -> addSpacing(15);

    //Adicionando o QVBoxLayout ao QHBoxLayout
    hbxCaixaH -> addLayout(vbxCaixaV);

    //Conectando Signal à slots
    connect(btnAdicionar, &QPushButton::clicked, this, &ListaFilmes::adicionarItem);
    connect(btnRenomear, &QPushButton::clicked, this, &ListaFilmes::renomearItem);
    connect(btnRemover, &QPushButton::clicked, this, &ListaFilmes::removerItem);
    connect(btnLimpar, &QPushButton::clicked, this, &ListaFilmes::limparLista);

    //Setando QHBoxLayout como layout do QWidget
    setLayout(hbxCaixaH);
}

void ListaFilmes::adicionarItem()
{
    //QInputDialog::getText(parent, QString, QString) = Exibe uma janela de Input para pegar texto digitado.
    QString nome = QInputDialog::getText(this, "Adicionar Filme", "Nome do filme");

    //simplified() = retorna o texto da QString sem espaços
    QString nomeSimplificado = nome.simplified();

    //Senão for vazia..
    if(!nomeSimplificado.isEmpty())
    {
        //Adiciona item
        lstFilmes -> addItem(nomeSimplificado);

        //count() = número de itens
        int linha = lstFilmes -> count() - 1;

        //setCurrentRow(int row) = Seta marcado a linha (item)
        lstFilmes -> setCurrentRow(linha);
    }
}

void ListaFilmes::renomearItem()
{
    if(lstFilmes -> count() != 0)
    {
        //currentItem() = Pega o item selecionado da Lista
        QListWidgetItem *lwiAtual = lstFilmes -> currentItem();

        //row(QListWidgetItem) = Pega o índice do item selecionado
        int linha = lstFilmes -> row(lwiAtual);

        //text() = Pega o texto do item selecionado
        QString nome = lwiAtual -> text();

        //Mostra Input..
        QString novoNome = QInputDialog::getText(this, "Renomear Filme", "Nome do Filme", QLineEdit::Normal, nome);

        //Remove espaços
        QString nomeSimplificado = novoNome.simplified();

        if(!nomeSimplificado.isEmpty())
        {
            //takeItem(int row) = Remove item de tal indice
            QListWidgetItem *lwiItem = lstFilmes -> takeItem(linha);

            //deleta ponteiro/item
            delete lwiItem;

            //Insere novo item, no indice indicado
            lstFilmes -> insertItem(linha, nomeSimplificado);

            //Seta linha marcada
            lstFilmes -> setCurrentRow(linha);
        }
    }
}

void ListaFilmes::removerItem()
{
    //currentRow() = Pega indice selecionado
    int linha = lstFilmes -> currentRow();

    if(linha != -1)
    {
        //takeItem(int row) = Remove item de tal indice
        QListWidgetItem *lwiItem = lstFilmes -> takeItem(linha);

        //deleta ponteiro/item
        delete lwiItem;
    }
}

void ListaFilmes::limparLista()
{
    //clear() = remove todos itens da Lista
    if(lstFilmes -> count() != 0)
        lstFilmes -> clear();
}
