//inclusão de headers
#include "01_MenuSimples.h"
#include <QMenu>
#include <QMenuBar>

//implementação do construtor
MenuSimples::MenuSimples(QWidget *parent) : QMainWindow(parent)
{
    //Criando um objeto QAction. Todo Menu tem um ou mais QActions.
    QAction *sair = new QAction("&Sair", this);

    //Criando um objeto de QMenu
    QMenu *arquivo;

    //addMenu() = Adiciona um QMenu
    arquivo = menuBar() -> addMenu("&Arquivo");

    //addAction() = Adiciona um QAction dentro de um QMenu
    arquivo -> addAction(sair);

    /* conectando um Signal à seu devido slot
     * triggered() = Quando clicar no QAction
     * quit() = fecha a aplicação
     * */
    connect(sair, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
}
