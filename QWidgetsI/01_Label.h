/* QLABEL
 *
 * É uma classe que é usada para exibir Texto e Imagens. Nenhuma iteração com usuário é disponível.
 * */

#pragma once

#include <QWidget>
#include <QLabel>

class Label : public QWidget
{
    public:

        Label(QWidget *parent = 0);

    private:

        QLabel *lblLabel;
};
