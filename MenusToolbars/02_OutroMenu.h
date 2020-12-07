/* ÍCONES, ATALHOS E SEPARADOS EM MENUS
 *
 * Para trabalhar com menus, devemos herdar propriedades da classe QMainWindow */

#pragma once

#include <QApplication>
#include <QMainWindow>

//declaração da classe
class OutroMenu : public QMainWindow
{
    public:

        //construtor
        OutroMenu(QWidget *parent = 0);
};
