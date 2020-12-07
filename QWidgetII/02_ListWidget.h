/* LISTWIDGET
 *
 * Essa classe fornece uma lista de widgets (itens).
 *
 * */

#pragma once

//inclusão de headers
#include <QWidget>
#include <QPushButton>
#include <QListWidget>

//declaração da classe
class ListaFilmes : public QWidget
{
    Q_OBJECT

    public:

        //Construtor
        ListaFilmes(QWidget *parent = 0);

    private slots:

        void adicionarItem();
        void renomearItem();
        void removerItem();
        void limparLista();

   private:
        QListWidget *lstFilmes;
        QPushButton *btnAdicionar;
        QPushButton *btnRenomear;
        QPushButton *btnRemover;
        QPushButton *btnLimpar;
};
