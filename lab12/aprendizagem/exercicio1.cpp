#include <iostream>
#include "exercicio3.h"
using namespace std;

main(){
    Conta conta;
    cout << "Entre com o identificador da conta: ";
    cin >> conta.id;
    cout << "Entre com o seu nome: ";
    cin >> conta.nome;
    cout << "Quanto voce quer depositar: ";
    cin >> conta.saldo;    

    cout << "===================\n";
    cout << conta;
}
