//Inclusão do header
#include "banco.h"

//Inclusão de bibliotecas
#include <QtSql>
#include <QMessageBox>

//Construtor
Banco::Banco(QString bd)
{
    _banco = bd;
}

QSqlDatabase bd;

bool Banco::CriarConexao()
{
    bd = QSqlDatabase::addDatabase("QPSQL");

    bd.setHostName(_hostName);

    bd.setDatabaseName("teste");

    bd.setUserName(_usuario);

    bd.setPassword(_senha);

    bd.setPort(5432);

    bd.open();

    if(bd.isOpen())
    {
        QMessageBox::information(0, "Sucesso", "Conectado");

        return true;
    }
    else
    {
        QMessageBox::critical(0, "Erro", "A conexão falhou \n" + bd.lastError().text());

        return false;
    }
}

QStringList Banco::Consulta()
{
    QStringList listaTelefones;
    QSqlQuery consulta;

    QString sql = "Select id FROM pessoa";

    consulta.exec(sql);

    while(consulta.next())
    {
        QString telefone = consulta.value(0).toString();

        qDebug() << telefone;

        listaTelefones.append(telefone);
    }



    return listaTelefones;
}

void Banco::Inserir(int numero)
{
    if(bd.isOpen())
    {
        qDebug() << "Ainda está rodando";
    }

    QSqlQuery consulta(bd);



    //QString sql = "insert into qt (id) values (5)";

    QString sql = "INSERT INTO \"teste\".\"pessoa\" (ID) VALUES (1)";

    //consulta.prepare(sql);

    //consulta.bindValue(":id", numero);

    if(consulta.exec(sql))
    {
        qDebug() << "Deu certo";
    }
    else
    {
        qDebug() << "Ultimo erro : " << consulta.lastError();
    }

    if(!consulta.isNull("id"))
    {
        qDebug() << "OK";
    }
    else
    {
        qDebug() << "Erro antes : " << consulta.lastError();

    }


    qDebug() << consulta.executedQuery();


}
