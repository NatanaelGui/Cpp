#include <iostream>
using namespace std;

int somaVetores(int vetor[]);
int main(){
    int vetor[5] = {0};
    cout << "Digite 5 valores: ";
    cin >> vetor[0] >> vetor[1] >> vetor[2] >> vetor[3] >> vetor[4];
    cout << "A soma do vetor e " << somaVetores(vetor) << endl;
    return 0;
}

int somaVetores(int vetor[]){
    return vetor[0] + vetor[1] + vetor[2] + 
           vetor[3] + vetor[4];    
}