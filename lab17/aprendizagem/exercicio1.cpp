#include<iostream>
using namespace std;

void lerNumeros(int vetorA[], int vetorB[], int qtdVetorA, int qtdVetorB);
void exibeNumeros(int vetorA[], int vetorB[], int qtdVetorA, int qtdVetorB);
void somaNumeros(int vetorA[], int vetorB[], int qtdVetorA, int qtdVetorB);
int main(){
    
    int vetorA[5];
    int vetorB[5];
    const int qtdVetorA = sizeof(vetorA) / sizeof(int);
    const int qtdVetorB = sizeof(vetorB) / sizeof(int);

    lerNumeros(vetorA, vetorB, qtdVetorA, qtdVetorB);
    exibeNumeros(vetorA, vetorB, qtdVetorA, qtdVetorB);

    somaNumeros(vetorA, vetorB, qtdVetorA, qtdVetorB);

    return 0;
}

void lerNumeros(int vetorA[], int vetorB[], int qtdVetorA, int qtdVetorB){
    cout << "Digite 10 valores: ";        
    
    for (int i = 0; i < qtdVetorA; i++){
        
        cin >> vetorA[i];        
    }

    for (int i = 0; i < qtdVetorB; i++){
        
        cin >> vetorB[i];        
    }
}

void exibeNumeros(int vetorA[], int vetorB[], int qtdVetorA, int qtdVetorB){
    cout << "Vetor A: ";
    for (int i = 0; i < qtdVetorA; i++){
        
        cout << vetorA[i] << " ";
    }

    cout << "\nVetor B: ";
    for (int i = 0; i < qtdVetorB; i++){
                    
        cout << vetorB[i] << " ";
    }
}

void somaNumeros(int vetorA[], int vetorB[], int qtdVetorA, int qtdVetorB){

    const int somaVetores = (qtdVetorA + qtdVetorB) / 2;
    int resultado[somaVetores];
    for (int i = 0; i < somaVetores; i++){
        
        resultado[i] = vetorA[i] + vetorB[i];
    }

        cout << "\nVetor S: ";
        for (int i = 0; i < somaVetores; i++){
            
            cout << resultado[i] << " ";
        }
        
}