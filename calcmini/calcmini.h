#ifndef CALCMINI_H
#define CALCMINI_H

#include <QWidget>
#include <QApplication>

namespace Ui {
class calcmini;
}

class calcmini : public QWidget
{
    Q_OBJECT

public:
    explicit calcmini(QWidget *parent = 0);
    ~calcmini();

private slots:
    void on_btnAdicao_clicked();

    void on_btnSubtracao_clicked();

    void on_btnMultiplicacao_clicked();

    void on_btnDivisao_clicked();

    void on_btnLimpar_clicked();

private:
    Ui::calcmini *ui;
};

#endif // CALCMINI_H
