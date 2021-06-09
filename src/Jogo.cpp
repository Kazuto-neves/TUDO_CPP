#include"Jogo.h"
#include"Item.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void Jogo::ler(){
    Item::ler();
    cout << "Numero de jogadores: "; cin >> jogadores;
    cout << "Plataforma: "; cin.ignore();   getline(cin, plataforma);
}

string Jogo::getClasse(){ return "Jogo";}
int Jogo::getJogadores(){return jogadores;}
string Jogo::getPlataforma(){return plataforma;}

double Jogo::aluguel(){
    if(plataforma=="xbox series" || plataforma=="ps5" || plataforma=="nintendo switch" ){
    if(getAno() <2020)return 1.0 * 7.00;
    else if (getAno()>=2020)return 1.0 * 12.00;
    }else{
        if ( getAno() < 2020 )return 0.6 * 7.00;
        else if ( getAno() >= 2020 )return 0.6 * 12.00;
    }
}