#include"Filme.h"
#include <string>
#include <iostream>

using namespace std;

void Filme::ler(){
    Item::ler();
    cout << "Ator Principal: "; getline(cin, ator);
    cout << "Diretor: "; getline(cin, diretor);
}

string Filme::getClasse(){return "Filme";}
string Filme::getAtor(){return ator;}
string Filme::getDiretor(){return diretor;}
double Filme::aluguel(){return getAno() <2020?5:7;}