//inclusão de headers
#include "05_FormLayout.h"
#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QRadioButton>
#include <QComboBox>

//Construtor
Formulario::Formulario(QWidget *parent) : QWidget(parent)
{
    //Declaração de objetos filhos do formulário (QLineEdit, QRadioButton, QComboBox)
    QLineEdit *lntNome = new QLineEdit(this);
    QLineEdit *lntEndereco = new QLineEdit(this);
    QLineEdit *lntOcupacao = new QLineEdit(this);
    QRadioButton *rbtEstuda = new QRadioButton(this);
    QComboBox *cmbEstadoCivil = new QComboBox(this);

    //Declaração de QStringList
    QStringList estadoCivil({"Solteiro", "Casado", "Divorciado", "Viúvo"});

    //Preenchendo QStringList
    //estadoCivil << "Solteiro" << "Casado" << "Divorciado" << "Viúvo";

    //Setando QStringList como itens do QComboBox
    cmbEstadoCivil -> addItems(estadoCivil);

    //Instância de QFormLayout - Gestor de Layout que age como formulário
    QFormLayout *frm = new QFormLayout;

    //setLabelAlignment(Qt::Alignment) = Seta o alinhamento dos labels com relação ao ínicio da tela
    frm -> setLabelAlignment(Qt::AlignRight | Qt::AlignVCenter);

    //addRow() = Adiciona uma linha no fundo do form, contendo o label e o widget.
    frm -> addRow("Nome : ", lntNome);
    frm -> addRow("Endereço : ", lntEndereco);
    frm -> addRow("Ocupação : ", lntOcupacao);
    frm -> addRow("Estudante ? ", rbtEstuda);
    frm -> addRow("Estado Civil : ", cmbEstadoCivil);

    //Setando o QFormLayout como Layout
    setLayout(frm);
}
