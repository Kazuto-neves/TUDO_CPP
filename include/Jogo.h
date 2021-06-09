#ifndef JOGO_H
#define JOGO_H

#include "Item.h"
#include <string>

using namespace std;

class Jogo : public Item{
    private:
        int jogadores;
        string plataforma;
    public:
        void ler();
	    string getClasse();
        double aluguel();
        int getJogadores();
        string getPlataforma();
};

#endif