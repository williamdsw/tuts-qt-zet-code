#include "tipocaixas.h"
#include "ui_tipocaixas.h"

TipoCaixas::TipoCaixas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TipoCaixas)
{
    ui->setupUi(this);
}

TipoCaixas::~TipoCaixas()
{
    delete ui;
}
