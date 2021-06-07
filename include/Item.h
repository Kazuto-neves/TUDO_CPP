#ifndef _ITEM_H_
#define _ITEM_H_

#include<string>
#include "IAlugavel.h"
using namespace std;

class Item : public IAlugavel{
    private:
       string Titulo,estilo,Produtora,midia;
       int ano, codigo;
    public:
        virtual void ler();
        virtual double aluguel() = 0;
        virtual string getClasse();
        virtual void remover(int i);
        virtual void alterar(int i);
        string getTitulo();
        string getEstilo();
        string getProdutora();
        string getMidia();
        int getCodigo();
        int getAno();
};

#endif