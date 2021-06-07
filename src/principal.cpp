#include <iostream>
#include <string>
#include "IAlugavel.h"
#include "Locadora.h"
#include "item.h"
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
    int opc;
    do{
        cout << "1. inserir" << endl
             << "2. remover pelo codigo" << endl
             << "3. alterar dados dado o codigo" << endl
             << "4. listar os itens onde eh dada uma parte da informacao" << endl
             << "5. listar os jogos de uma plataforma" << endl
             << "6. mostrar o valor do aluguel dado o codigo" << endl
             << "7. Sair" << endl
             << "Escolha uma opcao: ";
        cin >> opc;
    } while (opc < 1 || opc > 7);

    return opc;
}

int main(){
    IAlugavel* d;
    Locadora h;
    bool fim = false;
    int buscar;
    while (!fim){
        switch (menu()){
        case 1:
            d = criarAluguel();
            d->ler();
            h.inserir(d);
            cout << "Inserida com sucesso!" << endl; break;
        case 2:
            cout << "Digite o codigo da IAlugavel a ser removida: ";
            cin >> buscar;
            if(h.existe(buscar)){
                h.remover(buscar);
                cout << "Removida com sucesso!" << endl;              
            }else
                cout << "Nao encontrada!" << endl; break;
        case 3:
            cout << "Digite o codigo da IAlugavel a ser alterada: ";
            cin >> buscar;
            if(h.existe(buscar)){
                d->ler();
                h.alterar(d, buscar);
                cout << "Alterada com sucesso!" << endl;
            }else
                cout << "Nao encontrada!" << endl; break;
        case 4:
            h.listar();
            system("pause"); break;
        case 5:
            h.listartp2();                                          
            system("pause"); break;
        case 6:
            h.listartp3nota(); 
            system("pause"); break;
        case 7:
            fim = true; break;
        default:
            cout << "Opcao invalida!" << endl; break;
        }
    }
}