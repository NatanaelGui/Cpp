#include <iostream>
using namespace std;

int main()
{
    
    cout << "Soma dos multiplos de 3 ou 5 menor que: ";
    int num, soma = 0;
    cin >> num;
    for(int i = 1; i < num; ++i){
        
        cout << i << ", ";

        if(i % 3 == 0 || i % 5 == 0){

            soma += i;
        }
    }

    cout << endl << "A soma de todos os numeros inteiros de 0 a " << num << " multiplos de 3 ou 5 eh: " << soma << endl;

    return 0;
}
