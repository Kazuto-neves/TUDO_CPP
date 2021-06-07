#include "Locadora.h"

#include <iostream>
#include <iomanip>
#include <string>
#include "Item.h"
//#include "ItemTipo3.h"

using namespace std;
 
Locadora::Locadora(){qtd = 0;}

Locadora::~Locadora(){
    for (int i = 0; i < qtd; i++)delete v[i];
}


void Locadora::inserir(Item* d){
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

void Locadora::alterar(Item* d, int busca){
    int pos = obterIndice(busca);
    delete v[pos];
    v[pos] = d;
}

void Locadora::listar(){
    cout << "Cod. Nome " << setfill(' ') << setw(63) << right << "Cred  Ano/S Media" << endl;
    for (int i = 0; i < qtd; i++){
        cout << setprecision(2) << fixed;
        cout << setfill('0') << setw(4) << right << v[i]->getCodigo() << " ";
        cout << setfill(' ') << setw(54) << left << v[i]->getNome();
        cout << right << v[i]->getCreditos() << " " << right << v[i]->getAno() << "/" << v[i]->getSemestre() << " ";
        cout << setfill('0') << setw(5) << v[i]->media() << endl;
    }
}

void Locadora::listartp2(){
    cout << "Cod. Nome " << setfill(' ') << setw(63) << right << "Cred  Ano/S Media" << endl;
    for (int i = 0; i < qtd; i++)
	if (v[i]->getClasse()=="Tipo2")
        {
           cout << setprecision(2) << fixed;
           cout << setfill('0') << setw(4) << right << v[i]->getCodigo() << " ";
           cout << setfill(' ') << setw(54) << left << v[i]->getNome();
           cout << right << v[i]->getCreditos() << " " << right << v[i]->getAno() << "/" << v[i]->getSemestre() << " ";
           cout << setfill('0') << setw(5) << v[i]->media() << endl;
        }
}

void Locadora::listartp3nota(){
    cout << "Cod. Nome " << setfill(' ') << setw(63) << right << "Cred  Ano/S Media" << endl;
    for (int i = 0; i < qtd; i++)
	if (v[i]->getClasse()=="Tipo3" && ((Tipo3*)v[i])->getNotaApresentacao()>7 )
        {
           cout << setprecision(2) << fixed;
           cout << setfill('0') << setw(4) << right << v[i]->getCodigo() << " ";
           cout << setfill(' ') << setw(54) << left << v[i]->getNome();
           cout << right << v[i]->getCreditos() << " " << right << v[i]->getAno() << "/" << v[i]->getSemestre() << " ";
           cout << setfill('0') << setw(5) << v[i]->media() << endl;
        }
}
