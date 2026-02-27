#include<iostream>
using namespace std;

void zeroAndOne(int* inicio, int* fim){

    int qtdZero = 0;
    int qtdUm = 0;
    while (inicio < fim){
        
        *inicio ? ++qtdUm : ++qtdZero;
        ++inicio;
    }
    
    cout << "Existem " << qtdZero << " zeros e " << qtdUm << " uns na faixa indicada.";
}

int main()
{
    int vet[] =  { 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 0 };    
    zeroAndOne(vet + 5, vet + 9);
    return 0;
}
