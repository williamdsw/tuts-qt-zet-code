#ifndef TIPOCAIXAS_H
#define TIPOCAIXAS_H

#include <QDialog>

namespace Ui {
class TipoCaixas;
}

class TipoCaixas : public QDialog
{
    Q_OBJECT

public:
    explicit TipoCaixas(QWidget *parent = 0);
    ~TipoCaixas();

private:
    Ui::TipoCaixas *ui;
};

#endif // TIPOCAIXAS_H
