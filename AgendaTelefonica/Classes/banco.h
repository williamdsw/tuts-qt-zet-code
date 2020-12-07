#ifndef BANCO_H
#define BANCO_H

#include <QString>


class Banco
{
    private:

        //Variáveis
        QString _banco = NULL;
        QString _usuario = "teste";
        QString _senha = "teste123";
        QString _hostName = "localhost";

    public:

        //Construtor
        Banco(QString bd);

        bool CriarConexao();

        QStringList Consulta();

        void Inserir(int numero);
};

#endif // BANCO_H
