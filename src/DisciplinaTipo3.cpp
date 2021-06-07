#include"DisciplinaTipo3.h"
#include <iostream>
#include <string>

using namespace std;

string Tipo3::getClasse()	    { return "Tipo3";         }
double Tipo3::media()		    { return (2 * notaMonografia + 3 * notaApresentacao + notaPratica) / 6; }
double Tipo3::getNotaApresentacao() { return notaApresentacao;  }

void Tipo3::ler(){
    Disciplina::ler();
    cout << "Nota Monografia: ";
    cin >> notaMonografia;
    cout << "Nota Apresentacao: ";
    cin >> notaApresentacao;
    cout << "Nota Pratica: ";
    cin >> notaPratica;
}