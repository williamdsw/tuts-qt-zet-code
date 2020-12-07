#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>
#include "06_StatusBar.h"

BarraStatus::BarraStatus(QWidget *parent): QMainWindow(parent)
{
    //instância de QFrame
    QFrame *frmFrame = new QFrame(this);

    //Setando QFrame como widget central
    setCentralWidget(frmFrame);

    //instância de QHBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(frmFrame);

    //instâncias de buttons
    btnOk = new QPushButton("OK", frmFrame);
    btnAplicar = new QPushButton("Aplicar", frmFrame);

    //Adicionando botões aos layouts
    hbxCaixa -> addWidget(btnOk, 0, Qt::AlignLeft | Qt::AlignTop);
    hbxCaixa -> addWidget(btnAplicar, 1, Qt::AlignLeft | Qt::AlignTop);

    //Mostrando a barra de status
    statusBar();

    //Conectando Signals aos slots
    connect(btnOk, &QPushButton::clicked, this, &BarraStatus::okPressionado);
    connect(btnAplicar, &QPushButton::clicked, this, &BarraStatus::aplicarPressionado);
}

void BarraStatus::okPressionado()
{
    //mostrando mensagem na barra de status
    statusBar() -> showMessage("Botão OK foi pressionado");
}

void BarraStatus::aplicarPressionado()
{
    //mostrando mensagem na barra de status
    statusBar() -> showMessage("Botão Aplicar foi pressionado");
}
