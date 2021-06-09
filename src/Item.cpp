#include"Item.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

string Item::getClasse(){return "Item";}
int Item::getCodigo(){return codigo;}
string Item::getTitulo(){return Titulo;}
string Item::getEstilo(){return estilo;}
string Item::getProdutora(){return Produtora;}
string Item::getMidia(){return Midia;}
int Item::getAno(){return ano;}

void Item::ler(){
    cout << "Codigo: "; cin >> codigo;
    cout << "Titulo: "; cin.ignore();   getline(cin, Titulo);
    cout << "Estilo: ";   getline(cin, estilo);
    cout << "Produtora: ";   getline(cin, Produtora);
    cout << "Midia: ";   getline(cin, Midia);
    cout << "Ano de Lacamento: ";   cin >> ano;
}

void Item::mostrar(){
    cout << setfill('0') << setw(4) << right << getCodigo() << " ";
    cout << setfill(' ') << setw(20) << left << getTitulo();
    cout << setfill(' ') << setw(19) << left << getClasse();
    cout << setfill(' ') << setw(15) << left << getMidia();
    cout << setfill(' ') << setw(5) << left << getAno() << " ";
    cout << setfill('0') << setw(4) << aluguel() << endl;
}