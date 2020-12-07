/* ESQUELETO DA APLICAÇÃO
 *
 * Para trabalhar com menus, devemos herdar propriedades da classe QMainWindow */

#pragma once

#include <QMainWindow>
#include <QApplication>

class Esqueleto : public QMainWindow
{
    Q_OBJECT

    public:

        Esqueleto(QWidget *parent = 0);
};
