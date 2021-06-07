#ifndef _IALUGAVEL_H_
#define _IALUGAVEL_H_

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
        virtual double aluguel()           = 0; 
};

#endif