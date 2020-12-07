#include "calcmini.h"
#include "ui_calcmini.h"

//Declaro variáveis
float primeiroNumero, segundoNumero;

calcmini::calcmini(QWidget *parent) : QWidget(parent), ui(new Ui::calcmini)
{
    ui->setupUi(this);
}

calcmini::~calcmini()
{
    delete ui;
}

void calcmini::on_btnAdicao_clicked()
{
    //Utilizo ponteiros para pegar o valor do LineEdit ("TextBox")
    //text() = pega o texto, toFloat() = Converte o valor para float
    primeiroNumero = ui -> txtPrimeiroNumero -> text().toFloat(NULL);

    segundoNumero = ui -> txtSegundoNumero -> text().toFloat(NULL);

    //setText() = Seta o novo valor de text
    //arg() = converte número em String e vice-versa
    ui -> txtResultado -> setText(QString("%1").arg(primeiroNumero + segundoNumero));
}

void calcmini::on_btnSubtracao_clicked()
{
    primeiroNumero = ui -> txtPrimeiroNumero -> text().toFloat(NULL);

    segundoNumero = ui -> txtSegundoNumero -> text().toFloat(NULL);

    ui -> txtResultado -> setText(QString("%1").arg(primeiroNumero - segundoNumero));
}

void calcmini::on_btnMultiplicacao_clicked()
{
    primeiroNumero = ui -> txtPrimeiroNumero -> text().toFloat(NULL);

    segundoNumero = ui -> txtSegundoNumero -> text().toFloat(NULL);

    ui -> txtResultado -> setText(QString("%1").arg(primeiroNumero * segundoNumero));
}

void calcmini::on_btnDivisao_clicked()
{
    primeiroNumero = ui -> txtPrimeiroNumero -> text().toFloat(NULL);

    segundoNumero = ui -> txtSegundoNumero -> text().toFloat(NULL);

    ui -> txtResultado -> setText(QString("%1").arg(primeiroNumero / segundoNumero));
}

void calcmini::on_btnLimpar_clicked()
{
    //Método "clear()" limpa os dados do LineEdit
    ui -> txtPrimeiroNumero -> clear();

    ui -> txtSegundoNumero -> clear();

    ui -> txtResultado -> clear();
}
