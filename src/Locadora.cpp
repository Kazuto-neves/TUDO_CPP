#include "Locadora.h"

#include <iostream>
#include <iomanip>
#include <string>
#include "Item.h"
#include "Jogo.h"
#include "Filme.h"

using namespace std;
 
Locadora::Locadora(){qtd = 0;}

Locadora::~Locadora(){
    for (int i = 0; i < qtd; i++)delete v[i];
}


void Locadora::inserir(IAlugavel* d){
    v[qtd] = d;
    qtd++;
}

int Locadora::obterIndice(int busca){
    bool achou = false;
    int i = 0;
    while (!achou && i < qtd){
        if (busca == v[i]->getCodigo())achou = true;
        else i++;
    }
    return achou ? i : -1;
}

bool Locadora::existe(int busca){return obterIndice(busca) > -1;}

void Locadora::remover(int busca){
    int pos = obterIndice(busca);
    delete v[pos];
    for (int i = pos + 1; i < qtd; i++)v[i-1] = v[i];
    qtd--;
}

void Locadora::alterar(IAlugavel* d, int busca){
    int pos = obterIndice(busca);
    delete v[pos];
    v[pos] = d;
}

void Locadora::mostrarp(string n){
    for ( int i = 0 ; i < qtd ; i++ ){
        if ( v[i]->getTitulo().find(n) != string::npos || v[i]->getProdutora().find(n) != string::npos ||
            v[i]->getMidia().find(n) != string::npos || v[i]->getEstilo().find(n) != string::npos)
                v[i]->mostrar();
        else if ( v[i]->getClasse() == "Filme" ){
            if (((Filme*)v[i])->getAtor().find(n) != string::npos || ((Filme*)v[i])->getDiretor().find(n) != string::npos )
                v[i]->mostrar();
        }
        else if ( v[i]->getClasse() == "Jogo" ){
            if ( ((Jogo*)v[i])->getPlataforma().find(n) != string::npos )
                v[i]->mostrar();
        }
    }
}

void Locadora::jogosplataforma(string n){
        for ( int i = 0 ; i < qtd ; i++ ){
        if ( v[i]->getClasse() == "Jogo" )
            if ( ((Jogo*)v[i])->getPlataforma() == n )v[i]->mostrar();
    }
}

void Locadora::MostrarAluguel(int busca){
    int pos = obterIndice(busca);
    pos>-1?cout<<"preco: "<<v[pos]->aluguel()<<endl:cout<<"Nao foi possivel encontrar"<<endl;
}