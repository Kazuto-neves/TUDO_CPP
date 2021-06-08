#ifndef IALUGAVEL_H
#define IALUGAVEL_H

#include<string>
using namespace std;

class IAlugavel{
    public:
        virtual void ler()                 = 0;
        virtual int getCodigo()            = 0;
        virtual string getTitulo()         = 0;
        virtual string getClasse()         = 0;
        virtual string getEstilo()         = 0;
        virtual string getProdutora()      = 0;
        virtual string getMidia()          = 0;
        virtual int getAno()               = 0;
        //virtual int getJogadores()         = 0;
        virtual string getPlataforma()     = 0;
        virtual double aluguel()           = 0;
        virtual void mostrar()             = 0;
};

#endif