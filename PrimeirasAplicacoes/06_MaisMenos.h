#pragma once

//inclusão de headers necessários
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

//definição da classe
class MaisMenos : public QWidget
{
    //Esse macro é necessário nas classes que definem seus próprios Signals e Slots
    Q_OBJECT

    public:

        //construtor
        MaisMenos(QWidget *parent = 0);

    private slots:

        //métodos
        void EmMais();
        void EmMenos();

    private:

        //variável
        QLabel *lbl;
};
