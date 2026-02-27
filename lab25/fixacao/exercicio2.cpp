#include<iostream>
using namespace std;

int preencher(double vet[], int const tamanho){

    cout << "Entre com ate " << tamanho << " valores para preencher o vetor: ";
    int i = 0;
    while (i < tamanho && cin >> vet[i]){
                
        ++i;
    }
    
    if(cin.fail()){
        cin.clear();
        cin.ignore(1000, '\n');        
    }
    
    return i;
}

void mostra(double const vet[], int const tamanho){

    for (int i = 0; i < tamanho; ++i){
        
        cout << vet[i] << ", ";
    }    

    cout << endl;
}

void inverte(double vet[], int const tamanho){    

    int inicio = 0;
    int fim = tamanho - 1;

    while( inicio < fim){
        double temp = vet[inicio];
        vet[inicio] = vet[fim];
        vet[fim] = temp;

        ++inicio;
        --fim;
    }
        
}

int main()
{
    int const TAMANHO = 10;
    double vet[TAMANHO];
    int qtdElementos = 0;

    qtdElementos = preencher(vet, TAMANHO);
    mostra(vet, qtdElementos);

    inverte(vet, qtdElementos);    
    mostra(vet, qtdElementos); 

    inverte(vet + 1, qtdElementos - 2);
    mostra(vet, qtdElementos);     
    
    return 0;
}
