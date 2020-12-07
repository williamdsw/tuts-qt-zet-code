#include "dialog.h"
#include "ui_dialog.h"

//Incluindo o header da outra tela
#include "dialogoajuda.h"

//Incluindo a biblioteca de MessageBox
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnCancelar_clicked()
{
    //Outra forma de declarar String...
    QString texto("Saindo um cliente descontente!!");

    //Chamando a MessageBox
    QMessageBox::information(this, "Pedido finalizado", texto);

    //Fecha o form?
    this -> reject();


}

void Dialog::on_btnAjuda_clicked()
{
    //Instância de outra Dialog (Form)
    DialogoAjuda frm(this);

    //exec() = execução do dialog, equivalente à frm.Show() ?
    frm.exec();
}

//Quando o botão OK for clicado
void Dialog::on_btnOK_clicked()
{
    //Declarando uma string
    QString texto = "Saindo um ";

    //if-else... equivalente à ui.rbtSalada.Checked == true
    if(ui -> rbtSalada -> isChecked())
    {
        //incremento de texto, concatenação
        texto += "xSalada, ";
    }
    else
    {
        if(ui -> rbtFrango -> isChecked())
        {
            texto += "xFrango, ";
        }
        else
        {
            if(ui -> rbtTudo -> isChecked())
            {
                texto += "xTudo, ";
            }
            else
            {
                texto += "xNada, ";
            }
        }
    }

    texto += "com refresco ";

    if(ui -> chkLight -> isChecked())
    {
        texto += "Light ";
    }
    else
        if(ui -> chkDiet -> isChecked())
        {
            texto += "Diet ";
        }

    if(ui -> chkSemGelo -> isCheckable())
    {
        texto += "Sem gelo";
    }

    texto += "!!";

    //A famosa MessageBox... information =  equivalente ao show() ?
    QMessageBox::information(this, "Pedido finalizado", texto);

    //Abre a MessageBox?
    this -> accept();
}
