#ifndef _IALUGAVEL_H_
#define _IALUGAVEL_H_

#include<string>
using namespace std;

class IAlugavel{
    public:
        virtual void ler()                 = 0;
        virtual int getCodigo()            = 0;
        virtual string getclass()          = 0;
        virtual string getEstilo()         = 0;
        virtual string getProdutora()      = 0;
        virtual string getMidia()          = 0;
        virtual int getAno()               = 0;   
};