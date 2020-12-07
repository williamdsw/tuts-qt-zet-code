/* MENUS
 *
 * Para trabalhar com menus, devemos herdar propriedades da classe QMainWindow */

#pragma once

#include <QApplication>
#include <QMainWindow>

//declaração da classe
class MenuSimples : public QMainWindow
{
    public:

        //construtor
        MenuSimples(QWidget *parent = 0);
};
