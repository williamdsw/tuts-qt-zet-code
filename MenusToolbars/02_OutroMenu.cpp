#include "02_OutroMenu.h"
#include <QMenu>
#include <QMenuBar>

OutroMenu::OutroMenu(QWidget *parent) : QMainWindow(parent)
{
    //Declarando QPixmap(QString)'s, que são as imagens dos ícones
    QPixmap pixUsb("Icones/usb.png");
    QPixmap pixBluetooth("Icones/bluetooth.png");
    QPixmap pixFones("Icones/fones.png");

    //Declarando QAction(QIcon, &QString, QObject)'s que são os sub-menus
    QAction *actUsb = new QAction(pixUsb,"&USB", this);
    QAction *actBluetooth = new QAction(pixBluetooth,"&Bluetooth", this);
    QAction *actFones = new QAction(pixFones, "&Fones", this);

    //QAction::setShortcut(QKeySequence(QString)) = Seta o atalho para o QAction
    actUsb -> setShortcut(QKeySequence("CTRL+U"));
    actBluetooth -> setShortcut(QKeySequence("CTRL+B"));
    actFones -> setShortcut(QKeySequence("CTRL+F"));

    //Declarando QMenu e adicionando-o
    QMenu *menDispositivos;
    menDispositivos = menuBar() -> addMenu("&Dispositivos");

    //QMenu::addAction(QAction) = Adiciona o QAction (sub-menu) ao QMenu
    menDispositivos -> addAction(actUsb);
    menDispositivos -> addAction(actBluetooth);

    //QMenu::addSeparator() = Adiciona um separador entre os QAction's
    menDispositivos -> addSeparator();

    //...
    menDispositivos -> addAction(actFones);

    /* setAtribute() = Seta valor booleano para atributo do aplicativo.
     * Como em alguns desktops pode não aparecer o menu, setamos para false AA_DontShotIconsInMenus */
    qApp -> setAttribute(Qt::AA_DontShowIconsInMenus, false);

    //connect
}
