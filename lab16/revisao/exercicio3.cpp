#include<iostream>
using namespace std;

void apenasCinco(int vet[]);
void qualquerQuantidade(int vet[], int qtdElementos);
int main()
{    
    int vet[] = {15,29,48,10,35,21,39, 564,8,0};
    int qtdElementos = sizeof(vet) / sizeof(int);
    qualquerQuantidade(vet, qtdElementos);
            
    return 0;
}

void apenasCinco(int vet[]){
    
    cout << "Vetor Estatico: ";
    for (int i = 0; i < 4; i++){
        cout << vet[i] << ", ";
    }
}

void qualquerQuantidade(int vet[], int qtdElementos){        
    for(int i = 0; i < qtdElementos; i++){
        cout << vet[i] << ", ";
    }
}