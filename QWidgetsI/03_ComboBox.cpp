#include <QHBoxLayout>
#include "03_ComboBox.h"

ComboBox::ComboBox(QWidget *parent) : QWidget(parent)
{
    //Instância e declaração de lista de strings
    QStringList distribuicoes = {"Kali Linux", "Open Suse", "Ubuntu", "Debian", "Redhat"};

    //Instância de gestor de layout QHBoxLayout
    QHBoxLayout *hbxCaixa = new QHBoxLayout(this);

    //Instância de QComboBox
    cmbSistemas = new QComboBox();

    //Adicionando QStringList ao QComboBox
    cmbSistemas -> addItems(distribuicoes);

    //Adicionando QComboBox ao Layout
    hbxCaixa -> addWidget(cmbSistemas);

    //Setando espaço entre comboBox e label
    hbxCaixa -> setSpacing(15);

    //Instância de QLabel
    lblNome = new QLabel("Kali Linux", this);

    //Adicionando QLabel ao Layout
    hbxCaixa -> addWidget(lblNome);

    //Conectando SIGNAL à SLOT, utilizando casting
    connect(cmbSistemas, static_cast<void(QComboBox::*)(const QString &) > (&QComboBox::activated),
            lblNome, &QLabel::setText);
}
