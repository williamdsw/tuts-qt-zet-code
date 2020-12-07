#include "05_Esqueleto.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>

Esqueleto::Esqueleto(QWidget *parent) : QMainWindow(parent)
{
    //Criando QPixmap's que são os ícones
    QPixmap pixUsb("Icones/usb.png");
    QPixmap pixBluetooth("Icones/bluetooth.png");
    QPixmap pixFones("Icones/fones.png");

    //Objeto de QAction
    QAction *actSair = new QAction("&Sair", this);

    //Objeto de QMenu
    QMenu *actArquivo = menuBar() -> addMenu("&Arquivo");

    //Adicionando QAction
    actArquivo -> addAction(actSair);

    //conectando slot
    connect(actSair, SIGNAL(triggered(bool)), qApp, SLOT(quit()));

    //Criando QToolBar
    QToolBar *tbrBarra = addToolBar("Barra de Ferramentas");

    //Adicionado QActions na QToolbar
    tbrBarra -> addAction(QIcon(pixUsb), "&USB");
    tbrBarra -> addAction(QIcon(pixBluetooth), "&Bluetooth");

    //Adicionado separador
    tbrBarra -> addSeparator();

    //Adicionando QAction
    tbrBarra -> addAction(QIcon(pixFones), "&Fones");

    //Criando QTextEdit
    QTextEdit *txtPronto = new QTextEdit(this);

    //setCentralWidget(QWidget) = Seta um objeto como parte central do QMainWindow, nesse caso QTextEdit
    setCentralWidget(txtPronto);

    //showMessage() = Seta label da StatusBar?
    statusBar() -> showMessage("Pronto");
}
