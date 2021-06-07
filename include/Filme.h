#ifndef _FILME_H_
#define _FILME_H_

#include"Item.h"
#include<string.h>

using namespace std;

class Filme : public Item {
    protected:
        string ator,diretor;
    public:
        void ler();
	virtual string getClasse();
        virtual double aluguel();
};

#endif