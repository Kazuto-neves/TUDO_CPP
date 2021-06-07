#ifndef _IALUGAVEL_H_
#define _IALUGAVEL_H_

#include<string>
using namespace std;

class IAlugavel{
    public:
        virtual void ler()                 = 0;
        virtual void remover(int i)        = 0; 
        virtual void alterar(int i)        = 0; 
        virtual bool Cotem()               = 0;
        virtual int getCodigo()            = 0;
        virtual string getTitulo()         = 0;
        virtual string getEstilo()         = 0;
        virtual string getProdutora()      = 0;
        virtual string getMidia()          = 0;
        virtual int getAno()               = 0;   
};