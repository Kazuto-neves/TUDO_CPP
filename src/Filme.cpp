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

void Filme::mostrar(){
    cout<<endl<<endl;
    cout << setprecision(2) << fixed;
    cout<<"_______FILMES__________"<<endl;
    cout<<"Nome:"<<getTitulo()<<"    cod. "<< setfill('0') << setw(4)<<getCodigo()<<endl;
    cout<<"produtora:"<<getProdutora() <<setfill(' ') << setw(30) << right<<"  Ano:   "<<getAno()<<endl;
    cout<<"Genero: "<<getEstilo()<<  setfill(' ') << setw(30) << right<<"  Ator principal: "<<getAtor()<<endl;
    cout<<"diretor: "<<getDiretor()<< setfill(' ') << setw(30)<<right <<" preco: "<<aluguel()<<endl;   
}