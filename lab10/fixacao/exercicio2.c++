#include <iostream>

using namespace std;
void exibeVetor(int vet[], char ch);
main(){
    int vetA[5] = {10,20,30,40,50};
    int vetB[5] = {10,20};
    int vetC[5] = {}; vetC[2] = 30;

    exibeVetor(vetA, 'A');
    exibeVetor(vetB, 'B');
    exibeVetor(vetC, 'C');
    cout << endl;
}

void exibeVetor(int vet[], char ch){
    
    cout << endl << "Vetor " << ch << ": ";
    
    for(int i = 0; i <= 4; i++){
        cout << vet[i] << " ";        
    }    
}