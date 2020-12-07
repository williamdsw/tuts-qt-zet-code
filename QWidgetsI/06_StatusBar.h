/* STATUSBAR
 *
 * É um painel que é usado para exibir o status de informação de uma aplicação.
 *
 * */

#pragma once

//inclusão de headers
#include <QMainWindow>
#include <QPushButton>

class BarraStatus : public QMainWindow
{
  Q_OBJECT

  public:
    BarraStatus(QWidget *parent = 0);

  private slots:
    void okPressionado();
    void aplicarPressionado();

  private:
    QPushButton *btnOk;
    QPushButton *btnAplicar;
};
