#ifndef _LOCADORA_H_
#define _LOCADORA_H_

#include"Item.h"

class Locadora {
    private:
        IAlugavel* v[100];
        int qtd;
        int obterIndice(int busca);
    public:
        Locadora();
        ~Locadora();
        bool existe(int busca);
        void inserir(IAlugavel* d);
        void remover(int busca);
        void alterar(IAlugavel* d, int busca);
        void mostrarp(string n);
        void listar();
        void jogosplataforma(string n);
        void MostrarAluguel(int busca);
};

#endif