/* UTILIZANDO BARRA DE FERRAMENTAS
 *
 * Para trabalhar com menus, devemos herdar propriedades da classe QMainWindow */

#pragma once

#include <QApplication>
#include <QMainWindow>

//declaração da classe
class BarraFerramenta : public QMainWindow
{
    Q_OBJECT

    public:

        //construtor
        BarraFerramenta(QWidget *parent = 0);
};
