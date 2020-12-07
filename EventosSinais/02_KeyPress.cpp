#include <QApplication>
#include <QKeyEvent>
#include "02_KeyPress.h"

//Construtor
KeyPress::KeyPress(QWidget *parent) : QWidget(parent)
{

}

//Definição do método
void KeyPress::keyPressEvent(QKeyEvent *e)
{
    //Se a tecla for "Esc"
    if(e -> key() == Qt::Key_Escape)
    {
        qApp -> quit();
    }

    //se a tecla for "F1"
    if(e -> key() == Qt::Key_F1)
    {
        qApp -> aboutQt();
    }
}
