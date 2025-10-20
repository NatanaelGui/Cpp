#include <iostream>
using namespace std;

int main()
{
    cout << "Caixa Eletronico" << endl;
    cout << "----------------" << endl;

    cout << "Saque: ";
    int saque, totalCedulas = 0, qtdCinquenta = 0, qtdVinte = 0, qtdDez = 0, qtdCinco = 0;
    cin >> saque;

    while(totalCedulas != saque){
        
        if((totalCedulas + 50) <= saque){
            totalCedulas += 50;
            ++qtdCinquenta;
        }
        else if((totalCedulas + 20) <= saque){
            totalCedulas += 20;
            ++qtdVinte;
        }
        else if((totalCedulas + 10) <= saque){
            totalCedulas += 10;
            ++qtdDez;
        }
        else if((totalCedulas + 5) <= saque){
            totalCedulas += 5;
            ++qtdCinco;
        }
        else {
            qtdCinquenta = 0;
            qtdVinte = 0; 
            qtdDez = 0; 
            qtdCinco = 0;
            totalCedulas = 0;
            cout << "Erro! Digite um valor multiplo de cinco" << endl;
            cout << "Saque: ";
            cin >> saque;
        }       
    }

    cout << endl << "Entregado:" << endl;
    cout << qtdCinquenta << " cedula(s) de R$50" << endl;
    cout << qtdVinte     << " cedula(s) de R$20" << endl;
    cout << qtdDez       << " cedula(s) de R$10" << endl;
    cout << qtdCinco     << " cedula(s) de R$5" << endl;

    return 0;
}
    
