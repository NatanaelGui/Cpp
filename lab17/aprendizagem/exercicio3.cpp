#include<iostream>
using namespace std;

int somaIntervalo(int inicio, int fim){
    
    int soma = 0;
    for(int i=inicio; i <= fim; i++){
        
        soma += i;
    }

    return soma;
}

int main(){
    
    cout << "Digite o número do inicio e do fim do intervalor: ";
    int inicio, fim;
    cin >> inicio >> fim;

    cout << "\nResultado: " <<somaIntervalo(inicio, fim) << endl;
    return 0;
}

