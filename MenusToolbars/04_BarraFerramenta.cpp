#include "04_BarraFerramenta.h"
#include <QToolBar>
#include <QIcon>
#include <QAction>

BarraFerramenta::BarraFerramenta(QWidget *parent) : QMainWindow(parent)
{
    //Criando QPixmap's que são os ícones
    QPixmap pixUsb("Icones/usb.png");
    QPixmap pixBluetooth("Icones/bluetooth.png");
    QPixmap pixFones("Icones/fones.png");

    //Criando QAction's
    QAction *actUsb = new QAction(pixUsb, "&USB", this);
    QAction *actBluetooth = new QAction(pixBluetooth, "&Bluetooth", this);

    //Criando QToolBar e adicionando-a (necessário herda de QMainWindow)
    QToolBar *tbrBarra = addToolBar("Barra de Ferramentas");

    //Adicionando as Action's à barra
    tbrBarra -> addAction(actUsb);
    tbrBarra -> addAction(actBluetooth);

    //Adicionando Separador
    tbrBarra -> addSeparator();

    //Outra forma de criar QAction, com addAction(QIcon, QString)
    QAction *actFones = tbrBarra -> addAction(QIcon(pixFones), "&Fones");

    //connect()
}
