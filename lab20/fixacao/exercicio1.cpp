#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int main()
{
    cout << "Adivinhe um numero entre 0 e 10: ";
    // random_device rd; Gera sempre a mesma semente nessa versao no minGW
    unsigned semente = static_cast<unsigned>(time(0));
    mt19937 mt(semente);
    uniform_int_distribution<int> dist(0, 10);
    int num, NumAleatorio = dist(mt);
    cin >> num;    

    while (num != NumAleatorio){
        
        if(num < NumAleatorio){
            cout << "muito baixo \n";
        }
        else if(num > NumAleatorio){
            cout << "muito alto \n";
        }
        cin >> num;
    }
    
    cout << "Parabens voce acertou o numero!\n";
    
    return 0;
}
