#include <QPainter>
#include <01_Linhas.h>

Linhas::Linhas(QWidget *parent) : QWidget(parent)
{}

//Esse evento é chamado quando a widget é atualizada.
void Linhas::paintEvent(QPaintEvent *evento)
{
    //Indicando que não será usado o ponteiro
    Q_UNUSED(evento)

    //objeto de QPainter
    QPainter pintor(this);

    //Jogando o objeto como referência ao argumento do método
    desenhaLinhas(&pintor);
}

void Linhas::desenhaLinhas(QPainter *pintor)
{
    //QPen(QColor, int px, QPenStyle) = Cria um objeto de QPen
    QPen lapis(Qt::white, 2, Qt::SolidLine);

    //setPen(QPen) = Seta o "lápis" do QPainter
    pintor -> setPen(lapis);

    //drawLine(int x1, int y1, int x2, int y2) = Cria uma linha baseada em 4 coordenadas
    pintor -> drawLine(20, 40, 250, 20);

    //setStyle(Qt::PenStyle) = Seta o estilo do "lápis"
    lapis.setStyle(Qt::DashLine);
    pintor -> setPen(lapis);
    pintor -> drawLine(20, 80, 250, 80);

    lapis.setStyle(Qt::DashDotLine);
    pintor -> setPen(lapis);
    pintor -> drawLine(20, 120, 250, 120);

    lapis.setStyle(Qt::DotLine);
    pintor -> setPen(lapis);
    pintor -> drawLine(20, 160, 250, 160);

    lapis.setStyle(Qt::DashDotDotLine);
    pintor -> setPen(lapis);
    pintor -> drawLine(20, 200, 250, 200);

    //Vetor de números reais que será o "padrão"
    QVector<qreal> tracos;

    //Real que será o espaçamento
    qreal espaco = 4;

    //Preenchendo o vetor
    tracos << 1 << espaco << 5 << espaco;

    lapis.setStyle(Qt::CustomDashLine);

    //setDashPattern(QVector<real>) = Seta o padrão dos traços
    lapis.setDashPattern(tracos);

    pintor->setPen(lapis);

    pintor->drawLine(20, 240, 250, 240);
}
