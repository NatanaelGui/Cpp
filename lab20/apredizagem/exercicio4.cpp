#include<iostream>
using namespace std;

int main()
{

    int num1, num2, soma = 0;
    cout << endl << "Digite um numero inteiro: " << endl;
    cin >> num1;

    cout << endl << "Digite outro numero inteiro: " << endl;
    cin >> num2;

    if(num1 > num2){
            
            int aux;
            aux = num1;
            num1 = num2;
            num2 = aux;
    }

    for(int i = num1+1; i < num2; ++i){
        
        soma += i;
    }

    cout << "\nA soma de todos os valores entre " << num1 << " e " << num2 << ": " << soma << ".\n";
    return 0;
}
