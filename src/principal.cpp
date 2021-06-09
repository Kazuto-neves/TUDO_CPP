#include <iostream>
#include <iomanip>
#include <string>
#include "IAlugavel.h"
#include "Locadora.h"
#include "Item.h"
#include "Jogo.h"
#include "Filme.h"

using namespace std;

IAlugavel* criarAluguel(){
    int opc;
    do{
        cout << "1 - Jogo" << endl;
        cout << "2 - Filme" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opc;
    } while (opc < 1 || opc > 2);
    switch (opc){
        case 1: return new Jogo();
        case 2: return new Filme();
        default:
            cout << endl << "Opcao invalida!" << endl;
            exit(0);
    }
}

int menu(){
    int opc=0;
    do{
        cout<<"_____locadora ________"<<endl;
        cout << "1. inserir" << endl
             << "2. remover por codigo" << endl
             << "3. alterar por codigo"<<endl
             << "4. busca"<<endl
             << "5. mostrar pelo valor"<<endl
             << "6. listar jogos pela plataforma"<<endl
             << "7. Sair" << endl
             <<"_______________"<<endl
             << "Escolha uma opcao: ";
        cin >> opc;
    }while (opc < 1 || opc > 7);

    return opc;

}

int main(){
    IAlugavel* d;
    Locadora h;
    bool fim = false;
    string n;
    int buscar,x;
    while (!fim){
        switch (menu()){
        case 1:
            d = criarAluguel();
            d->ler();
            h.inserir(d);
            cout << "Inserida com sucesso!" << endl; break;
        case 2:
            cout << "Digite o codigo da Item a ser removida: ";
            cin >> buscar;
            if(h.existe(buscar)){
                h.remover(buscar);
                cout << "Removida com sucesso!" << endl;              
            }else
                cout << "Nao encontrada!" << endl; break;
        case 3:
            cout << "Digite o codigo da Item a ser alterada: ";
            cin >> buscar;
            if(h.existe(buscar)){
                d->ler();
                h.alterar(d, buscar);
                cout << "Alterada com sucesso!" << endl;
            }else
                cout << "Nao encontrada!" << endl;break;
        case 4:
            cout<<"insira( nome/titulo, genero, jogo/filme, midia ou ano ): ";  cin >> n;
            cout << endl << "Cod. Nome " << setfill(' ') << setw(20) << right << " Tipo " << setfill(' ') << setw(20) << right << " midia " << setfill(' ') << setw(20) << right << "Ano  Aluguel" << endl;
            h.mostrarp(n);
            system("pause"); break;
        case 5:
            cout << "digite o codigo: ";    cin >> buscar;
            h.MostrarAluguel(buscar); 
            system("pause"); break;
        case 6:
            cout << "Digite a plataforma: "; cin >> n;
            cout << endl << "Cod. Nome " << setfill(' ') << setw(20) << right << " Tipo " << setfill(' ') << setw(20) << right << " midia " << setfill(' ') << setw(20) << right << "Ano  Aluguel" << endl;
            h.jogosplataforma(n);                                          
            system("pause"); break;
        case 7:
            fim = true; break;
        default:
            cout << "Opcao invalida!" << endl; break;
        }
    }
}