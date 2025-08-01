#include<iostream>
#include<iomanip>
using namespace std;

struct Carro {
    char modelo[20];
    int ano;
    double preco;
};

int main()
{
    Carro vetCarro[10] = {
        {"Vectra", 2009, 58.000},
        {"Polo", 2008, 45.000}
    };

    Carro *ptrCarro = &vetCarro[1];
    
    cout << fixed << setprecision(3);
    
    cout << "===================\n";
    cout << "Modelo: " << ptrCarro->modelo << endl;
    cout << "Ano: " << ptrCarro->ano << endl;
    cout << "Preco: " << ptrCarro->preco << ",00" << endl;
    cout << "===================\n";
}
