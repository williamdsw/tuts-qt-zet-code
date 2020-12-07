//Incluindo headers
#include "06_MaisMenos.h"
#include <QGridLayout>

MaisMenos::MaisMenos(QWidget *parent) : QWidget(parent)
{
    QPushButton *btnMais = new QPushButton("+", this);
    QPushButton *btnMenos = new QPushButton("-", this);

    lbl = new QLabel("0", this);

    QGridLayout *grid = new QGridLayout(this);

    grid -> addWidget(btnMais, 0, 0);
    grid -> addWidget(btnMenos, 0, 1);
    grid -> addWidget(lbl, 1, 1);

    setLayout(grid);

    //Conectando Signals aos Slots..
    connect(btnMais, &QPushButton::clicked, this, &MaisMenos::EmMais);
    connect(btnMenos, &QPushButton::clicked, this, &MaisMenos::EmMenos);
}

//método para incrementar texto
void MaisMenos::EmMais()
{
    //pegando conteúdo do texto para int
    int valor = lbl -> text().toInt();

    //incrementando
    valor++;

    //setando texto do label
    lbl -> setText(QString::number(valor));
}

//método para decrementar texto
void MaisMenos::EmMenos()
{
    //pegando conteúdo do texto para int
    int valor = lbl -> text().toInt();

    //decrementando
    valor--;

    //setando texto do label
    lbl -> setText(QString::number(valor));
}
