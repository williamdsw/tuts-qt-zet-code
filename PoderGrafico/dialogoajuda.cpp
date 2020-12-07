#include "dialogoajuda.h"
#include "ui_dialogoajuda.h"

DialogoAjuda::DialogoAjuda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogoAjuda)
{
    ui->setupUi(this);
}

DialogoAjuda::~DialogoAjuda()
{
    delete ui;
}
