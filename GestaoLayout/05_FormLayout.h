/* FORMLAYOUT
 *
 * Essa classe é um gestor de layout simples que manipula formulários de widgets de entrada e seus labels associados.
 * Controla seus objetos filhos em forma de duas colunas. A primeira coluna consiste em Labels, e a segunda em Widgets.
 *
 * */

#pragma once

#include <QWidget>

class Formulario : public QWidget
{
    public:

        Formulario(QWidget *parent = 0);
};
