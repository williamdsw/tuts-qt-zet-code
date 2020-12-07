#include "telaprincipal.h"
#include "ui_telaprincipal.h"

#include <QMessageBox>

TelaPrincipal::TelaPrincipal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

void TelaPrincipal::on_btnMessageBoxes_clicked()
{
    //Caixa "sobre"
    QMessageBox::about(this, "Sobre", "Caixa sobre");

    //Caixa sobre o QT
    QMessageBox::aboutQt(this, "Sobre Qt");

    //Crítico
    QMessageBox::critical(this, "Crítico", "Mensagem crítica");

    //Informação
    QMessageBox::information(this, "Caixa de informação", "Informação");

    //Pergunta
    QMessageBox::question(this, "Questão", "Deseja?");

    //Alerta
    QMessageBox::warning(this, "Warning!", "Warning");
}

void TelaPrincipal::on_btnInteracoes_clicked()
{
    ui -> lblInformacao -> setText("Clicou no Botão");
}

void TelaPrincipal::on_btnInteracoes_pressed()
{
    ui -> lblInformacao -> setText("Pressionando o Botão");
}

void TelaPrincipal::on_btnInteracoes_released()
{
    ui -> lblInformacao -> setText("Soltou o Botão");
}
