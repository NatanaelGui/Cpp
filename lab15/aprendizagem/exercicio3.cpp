#include <iostream>
using namespace std;

int main()
{
    
    cout << "Quanto valores deseja guardar: ";
    int qtdValor;
    cin >> qtdValor;
    int *vetor = new int[qtdValor];
    
    cout << "Quais os valores: ";
    for (int i = 0; i < qtdValor; i++){
        cin >> vetor[i];
    }

    cout << "Os valores: ";
    for (int i = 0; i < qtdValor - 2; i++){
        cout << vetor[i] << ", ";         
    }
    cout << vetor[qtdValor - 2] << " e " << vetor[qtdValor - 1] << " foram armazenados." << endl;
    
    delete vetor;
}