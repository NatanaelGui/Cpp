#include <iostream>
using namespace std;

int main()
{
    cout << "Digite pares de valores (0 para encerrar): " << endl;    
    int num;
    const int TAMANHO_ARRAY = 20;
    int vet[TAMANHO_ARRAY], i = 0;

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
    
    cout << "Pares organizados: " << endl;
    for(int i = 0; i < TAMANHO_ARRAY; i = i + 2){
        cout << "(" << vet[i] << ", " << vet[i+1] << ")" << endl;        
    }

    return 0;
}
