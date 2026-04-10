#include<iostream>
using namespace std;

const char* Mes[] = {"Marco", "Abril", "Junho", "Julho"};

struct array{
    
    static const int TAM = 4;
    double dados[TAM];
};

void preencher(array* gastos);
void mostrar(const array* gastos);

int main()
{    
    array gastos;
    
    preencher(&gastos);
    mostrar(&gastos);
    
    return 0;
}

void preencher(array* gastos){

    for (int i = 0; i < gastos->TAM; i++){
        
        cout << "Entre com o gasto de " << Mes[i] << ": ";
        cin >> gastos->dados[i];
    }    
}

void mostrar(const array* gastos){

    double total = 0.0;
    cout << "\nGastos\n";

    for(int i = 0; i < gastos->TAM; i++){

        cout << Mes[i] << ": R$" << gastos->dados[i] << endl;
        total += gastos->dados[i];
    }

    cout << "Total de gastos: R$" << total << endl;
}