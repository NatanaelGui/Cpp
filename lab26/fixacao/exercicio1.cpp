#include<iostream>
using namespace std;

const char* Mes[] = {"Marco", "Abril", "Junho", "Julho"};

void preencher(double vet[], const int TAM);
void mostrar(const double vet[], const int TAM);

int main()
{
    
    const int TAM = 4;
    double gastos[TAM];         
    
    preencher(gastos, TAM);
    mostrar(gastos, TAM);
    
    return 0;
}

void preencher(double vet[], const int TAM){

    for (int i = 0; i < TAM; i++){
        
        cout << "Entre com o gasto de " << Mes[i] << ": ";
        cin >> vet[i];
    }    
}

void mostrar(const double vet[], const int TAM){

    double total = 0.0;
    cout << "\nGastos\n";

    for(int i = 0; i < TAM; i++){

        cout << Mes[i] << ": R$" << vet[i] << endl;
        total += vet[i];
    }

    cout << "Total de gastos: R$" << total << endl;
}