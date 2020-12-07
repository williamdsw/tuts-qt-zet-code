/* UTILIZANDO MENU VERIFICÁVEL
 *
 * Para trabalhar com menus, devemos herdar propriedades da classe QMainWindow */

#pragma once

#include <QApplication>
#include <QMainWindow>

//declaração da classe
class MenuVerificavel : public QMainWindow
{
    Q_OBJECT

    public:

        //construtor
        MenuVerificavel(QWidget *parent = 0);

    private slots:

        //métodos
        void alternaBarraStatus();

    private:

        //ponteiro/variável
        QAction *actVisualizar;
};
