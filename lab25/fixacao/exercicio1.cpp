#include <iostream>
using namespace std;
const int TAMANHO_ARRAY = 20;

int OrderArray(int* vet){
        
    int num = 1, i = 0;

    while(num != 0 && i != (TAMANHO_ARRAY)){        
        cin >> num;
        
        if(i % 2 != 0){
            if(vet[i-1] > num){
                int temp = vet[i-1];
                vet[i-1] = num;
                vet[i] = temp;
            }
            else 
                vet[i] = num;            
        }
        else{
            vet[i] = num;
        }
        ++i;
    }

    return i;
}

int main()
{
    cout << "Digite pares de valores (0 para encerrar): " << endl;        
    int vet[TAMANHO_ARRAY], *ptrVet;        
    ptrVet = vet;

    int qtdElementos = OrderArray(vet);
    
    cout << "Pares organizados: " << endl;
    
    for(int i = 0; i < qtdElementos / 2; ++i){

        cout << "(" << *ptrVet++ << ", ";        
        cout << *ptrVet++ << ")" << endl;
    }

    return 0;
}