#include"Jogo.h"
//#include"Item.h"
#include <iostream>
#include <string>

using namespace std;

void Jogo::ler(){
    Item::ler();
    cout << "Numero de jogadores: "; cin >> jogadores;
    cout << "Plataforma: "; cin.ignore();   getline(cin, plataforma);
}
string Jogo::getClasse(){ return "Jogo";}
int Jogo::getJogadores(){return "jogadores";}
string Jogo::getPlataforma(){return "plataforma";}
double Jogo::aluguel(){
    if(plataforma=="xbox series" || plataforma=="ps5" || plataforma=="nintendo switch" )return getAno() <2020?1*7:1*12;
    else return getAno() <2020?0.6*7:0.6*12;
}