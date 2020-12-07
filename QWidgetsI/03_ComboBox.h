/* QCOMBOBOX
 *
 * É um componente que oferece uma lista de opções para o usuário, ocupando o mínimo de espaço possível na tela.
 *
 * */

#pragma once

//inclusão de headers
#include <QWidget>
#include <QComboBox>
#include <QLabel>

//declaração e definição da classe
class ComboBox : public QWidget
{
    public:

        //Construtor
        ComboBox(QWidget *parent = 0);

    private:

        //ponteiros
        QComboBox *cmbSistemas;
        QLabel *lblNome;
};
