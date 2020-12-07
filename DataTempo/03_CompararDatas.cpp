// COMPARANDO DATAS

#include <QTextStream>
#include <QDate>

int main3(void)
{
    //Instânciando output de dados
    QTextStream out(stdout);

    //Declarando duas datas
    QDate dt1(2015, 9, 7);
    QDate dt2(2014, 9, 7);

    //Comparando...
    if(dt1 < dt2)
    {
        out << dt1.toString() << " vem antes de " << dt2.toString() << endl;
    }
    else
    {
        out << dt1.toString() << " vem depois de " << dt2.toString() << endl;
    }
}
