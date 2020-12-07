#include "06_GridLayout.h"
#include <QPushButton>
#include <QGridLayout>

#include <QDebug>

Calculadora::Calculadora(QWidget *parent) : QWidget(parent)
{
    //Criando objeto de QGridLayout
    QGridLayout *grdGrid = new QGridLayout(this);

    //Setando espaço de pixels entre objetos filhos
    grdGrid -> setSpacing(2);

    //Criando QStringList que será o "text" dos botoes
    QStringList valores({"7", "8", "9", "/",
                         "4", "5", "6", "*",
                         "1", "2", "3", "-",
                         "0", ".", "=", "+"});


    int posicao = 0;

    //Criando e colocando cada botão no QGridLayout
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            //Instância de QPushButton
            QPushButton *btn = new QPushButton(valores[posicao], this);

            //addWidget(QWidget, row, column)
            grdGrid -> addWidget(btn, i, j);

            //incrementando
            posicao++;
        }
    }

    //Setando Layout da janela
    setLayout(grdGrid);
}
