#include<iostream>
using namespace std;

double* preencher(double* inicio, double* fim){

    cout << "Entre com ate " << fim - inicio << " valores para preencher o vetor: ";
    double valor;
    while (inicio != fim && cin >> valor){
                      
        *inicio = valor;
        inicio++;        
    }
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');
    }
        
    return inicio;
}

void mostra(double const *vet, double *fim){
    
    while(vet != fim){
        
        cout << *vet++ << ", ";
    }    

    cout << endl;
}

void inverte(double* vet, double* fimVet){
    
    while(vet < fimVet){
        
        double temp = *vet;
        *(vet++) = *(--fimVet);
        *fimVet = temp;        
    }
}

int main()
{
    int const TAMANHO = 10;
    double vet[TAMANHO];    
    double *fimVet;

    fimVet = preencher(vet, vet + TAMANHO);
    mostra(vet, fimVet);

    inverte(vet, fimVet);
    mostra(vet, fimVet);

    inverte(vet + 1, fimVet - 1);
    mostra(vet, fimVet);
        
    return 0;
}
