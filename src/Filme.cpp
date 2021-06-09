#include"Filme.h"
#include"Item.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Filme::ler(){
    Item::ler();
    cin.ignore();
    cout << "Ator Principal: "; getline(cin, ator);
    cout << "Diretor: "; getline(cin, diretor);
}

string Filme::getClasse(){return "Filme";}
string Filme::getAtor(){return ator;}
string Filme::getDiretor(){return diretor;}
double Filme::aluguel(){return getAno() <2020?5:7;}