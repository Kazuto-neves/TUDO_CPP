#ifndef _JOGO_H_
#define _JOGO_H_

#include "item.h"
#include <string>

using namespace std;

class Jogo : public Item {
    protected:
        int n_jogadores;
        string plataforma;
    public:
        void ler();
	virtual string getClasse();
        virtual double aluguel();
};

#endif