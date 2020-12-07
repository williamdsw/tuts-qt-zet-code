/* VERIFICANDO SE A DATA É VÁLIDA
 *
 * Podemos utilizar o método QDate::isValid() para fazer isso.
 *
 */

#include <QTextStream>
#include <QDate>

int main11(void)
{
    //output
    QTextStream out(stdout);

    //Declarando QList de QDate's
    QList<QDate> datas({QDate(2015, 1, 2), QDate(2015, 9, 15), QDate(2015, 2, 30)});

    //Iterando e mostrando os itens
    for(int i = 0; i < datas.size(); i++)
    {
        out << datas.at(i).toString() << endl;
    }

    //Iterando novamente
    for(int i = 0; i < datas.size(); i++)
    {
        //isValid() retorna qual data é válida ou não
        if(datas.at(i).isValid())
        {
            out << QString("Data %1 eh valida").arg(i+1) << endl;
        }
        else
        {
            out << QString("Data %1 eh invalida").arg(i+1) << endl;
        }
    }

    return 0;
}
