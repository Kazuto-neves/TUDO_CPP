#ifndef _ITEM_H_
#define _ITEM_H_

#include<string>
#include "IAlugavel.h"
using namespace std;

class Item : public IAlugavel{
    private:
       string Titulo,estilo,Produtora,Midia;
       int ano, codigo;
    public:
        virtual void ler();
        virtual double aluguel() = 0;
        virtual string getClasse();
        int getCodigo();
        string getTitulo();
        string getEstilo();
        string getProdutora();
        string getMidia();
        int getAno();
        virtual void mostrar()   =0;
};

#endif