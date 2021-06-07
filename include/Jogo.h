#ifndef _JOGO_H_
#define _JOGO_H_

#include "Item.h"
#include <string>

using namespace std;

class Jogo : public virtual Item{
    protected:
        int n_jogadores;
        string plataforma;
    public:
        void ler();
	virtual string getClasse();
        virtual double aluguel();
        int getN_Jogadores();
        string getPlataforma();
};

#endif