#include <iostream>
using namespace std;

int main(){
int vet[5] = {10, 80, 30, 45, 15}, posicao = 0;

    cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " 
         << vet[3] << " " << vet[4] << endl;
    cout << "---------------------\n";
    cout << "Alterar posição: ";
    cin >> posicao;
    cout << "\nNovo valor: ";
    cin >> vet[posicao];
    cout << "---------------------\n";
    cout << "Vetor: " << vet[0] << " " << vet[1] << " " << vet[2] << " " 
         << vet[3] << " " << vet[4] << endl;
    
    return 0;
}