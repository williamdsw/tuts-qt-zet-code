#include "03_MenuVerificavel.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

//Construtor
MenuVerificavel::MenuVerificavel(QWidget *parent) : QMainWindow(parent)
{
    //Nova instância de QAction
    actVisualizar = new QAction("&Visualizar Barra de Status", this);

    //setCheckable(bool) = Define que o QAction pode ser checado
    actVisualizar -> setCheckable(true);

    //setChecked(bool) = Checa o QAction
    actVisualizar -> setChecked(true);

    //Criando QMenu e adicionando-o
    QMenu *arquivo;
    arquivo = menuBar() -> addMenu("&Arquivo");

    //Adiciona Action ao QMenu
    arquivo -> addAction(actVisualizar);

    //Ativa a barra de status
    statusBar();

    //Conecta um Signal ao slot
    connect(actVisualizar, SIGNAL(triggered(bool)), this, SLOT(alternaBarraStatus()));
}

//Métod
void MenuVerificavel::alternaBarraStatus()
{
    //isChecked() = se estiver checado
    if(actVisualizar -> isChecked())
    {
        //show() = mostra StatusBar
        statusBar() -> show();
    }
    else
    {
        //hide() = esconde StatusBar
        statusBar() -> hide();
    }
}
