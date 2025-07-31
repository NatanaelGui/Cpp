#include <iostream>
using namespace std;

double calcVetor(double vet[]);
int main(){
double vet[3] = {0};

    cout << "Entre com 3 valores para o vetor: ";
    cin >> vet[0] >> vet[1] >> vet[2];
    cout << "Resultado: " << calcVetor(vet) << endl;
    
    return 0;
}

double calcVetor(double vet[]){
    return vet[0] * vet[2] - vet[1];
}