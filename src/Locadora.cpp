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
    int i, nom = 0, mid = 0,gen=0,jf=0,ano=0;
    string p;
    for(i = 0; i<qtd; i++){
        p=v[i]->getAno();
        if(p==n)ano=1;
        nom = v[i]->getTitulo().find(n);
        mid = v[i]->getMidia().find(n);
        gen = v[i]->getEstilo().find(n);
        jf  = v[i]->getClasse().find(n);
        if (nom > -1 || mid > -1 ||gen >-1 ||jf > -1 || ano > -1) listar();
    }
}

void Locadora::listar(){
    cout<<endl<<endl;
    for (int i = 0; i < qtd; i++){v[i]->mostrar();}
    cout<<endl<<endl;
}

void Locadora::jogosplataforma(string n){
    cout << "Cod. Titulo " << setfill(' ') << setw(20) << right << "Estilo" << setfill(' ') << setw(10) << "Produtora" << setfill(' ') << setw(10) << "Midia" << setfill(' ') << setw(10) << "Ano   Aluguel" << endl;
    for (int i = 0; i < qtd; i++)
	if (v[i]->getClasse()=="Jogo" && v[i]->getPlataforma() == n){
            cout << setprecision(2) << fixed;
            cout << setfill('0') << setw(4) << right << v[i]->getCodigo()    << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getTitulo()     << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getEstilo()     << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getProdutora()  << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getMidia()      << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getAno()        << " ";
        }
}

void Locadora::MostrarAluguel(int i, int x){
    cout << "Cod. Titulo " << setfill(' ') << setw(20) << right << "Estilo" << setfill(' ') << setw(10) << "Produtora" << setfill(' ') << setw(10) << "Midia" << setfill(' ') << setw(10) << "Ano   Aluguel" << endl;
    if (x == 1){
        if (v[i]->getClasse()=="Jogo"){
            cout << setprecision(2) << fixed;
            cout << setfill('0') << setw(4) << right << v[i]->getCodigo()    << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getTitulo()     << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getEstilo()     << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getProdutora()  << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getMidia()      << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getAno()        << " ";
            cout << setfill('0') << setw(4) << right << v[i]->aluguel()      << " ";
        }
    }else{
        if (v[i]->getClasse()=="Filme"){
            cout << setprecision(2) << fixed;
            cout << setfill('0') << setw(4) << right << v[i]->getCodigo()    << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getTitulo()     << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getEstilo()     << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getProdutora()  << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getMidia()      << " ";
            cout << setfill(' ') << setw(5) << left << v[i]->getAno()        << " ";
            cout << setfill('0') << setw(4) << right << v[i]->aluguel()      << " ";
        }
    }
}
