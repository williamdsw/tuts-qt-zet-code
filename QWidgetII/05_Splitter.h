/* QSPLITTER
 *
 * Esse componente habilita ao usuário controlar o tamanho de widgets filhos ao arrastar a fronteira
 * entre os widgets.
 *
 * */

#pragma once

#include <QWidget>

class Separador : public QWidget
{
    public:
        Separador(QWidget *parent = 0);
};
