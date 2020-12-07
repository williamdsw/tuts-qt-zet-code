//Incluindo headers
#include "principal.h"
#include "ui_principal.h"
#include "Classes/banco.h"

//Construtor
Principal::Principal(QWidget *parent) : QMainWindow(parent), ui(new Ui::Principal)
{
    ui -> setupUi(this);
}

//Destrutor
Principal::~Principal()
{
    //Excluindo ponteiro
    delete ui;
}


/* Método para conectar Signals à Slots
 * SIGNALS = São como Eventos
 * SLOT = São como Métodos
 */
void Principal::ConectarSignals()
{
    connect(ui -> btnLimpar, SIGNAL(clicked(bool)), ui -> txtNome, SLOT(clear()));
    connect(ui -> btnLimpar, SIGNAL(clicked(bool)), ui -> cmbDepartamento, SLOT(clear()));
}

void Principal::AtualizarComboBox()
{
    Banco banco("BANCO");
    Banco *bd = &banco;

    bd -> CriarConexao();

    ui -> cmbDepartamento -> clear();

    ui -> cmbDepartamento -> addItems(bd -> Consulta());


}

void Principal::on_btnBuscar_clicked()
{
    AtualizarComboBox();

    Banco banco("BANCO");
    Banco *bd = &banco;

    //bd -> CriarConexao();

    //bd -> Inserir(ui -> txtNome -> text().toInt());
}
