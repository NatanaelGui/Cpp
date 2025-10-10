#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double km, preco;    
    cout << "Qual a distancia da viagem (em Km): ";
    cin >> km;
    
    if(km <= 200){
        preco = km * 0.50;
    }
    else if (km <= 400){
        preco = km * 0.40;
    }
    else if (km > 400){
        preco = km * 0.30;
    }

    cout << fixed << setprecision(2) << "O valor da sua pasagem e: " << preco << endl;
    return 0;
}
