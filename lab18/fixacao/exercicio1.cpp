#include <iostream>
using namespace std;

int main()
{
    cout << "Digite numeros inteiros (0 para finalizar): ";
    int num = 0;
    int soma = 0;
    
    do{
        
        cin >> num;
        soma += num;
        cout << "soma parcial: " << soma << endl;
    }
    while(num);
    
    return 0;
}
