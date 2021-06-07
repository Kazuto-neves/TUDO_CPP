#include"Filme.h"
#include <string>

using namespace std;

void Filme::ler(){
    Item::ler();
    cout << "Ator Principal: "; getline(cin, ator);
    cout << "Diretor: "; getline(cin, diretor);
}

string Filme::getClasse(){return "Filme"};
double Filme::aluguel(){return getAno() <2020?5:7};