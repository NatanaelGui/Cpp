#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    cout << "Aposta dos Amigos\n";
    cout << "-----------------\n";
    cout << "Digite a quantidade apostada pelo jogador 1: ";
    double qtd1;
    cin >> qtd1;

    cout << "Digite a quantidade apostada pelo jogador 2: ";
    double qtd2;
    cin >> qtd2;

    cout << "Entre com o valor do premio: ";
    double premio;
    cin >> premio;

    double total = qtd1 + qtd2;


    cout << fixed;
    cout.precision(0);
    cout << "O jogador 1 tem direito a R$" << (qtd1 / total) * premio << endl;
    
    cout << "O jogador 2 tem direito a R$" << (qtd2 / total) * premio << endl;
    return 0;
}