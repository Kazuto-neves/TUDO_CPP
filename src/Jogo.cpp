#include"DisciplinaTipo1.h"
#include <iostream>
#include <string>

using namespace std;


void Jogo::ler(){
    Item::ler();
    cout << "Numero de jogadores: "; cin >> n_jogadores;
    cout << "Plataforma: "; cin.ignore();   getline(cin, plataforma);
}
string Jogo::getClasse()	    { return "Jogo";         }
double Jogo::aluguel(){
    if()
}
