#include <iostream>
using namespace std;

int main()
{
    int valor = 10, *temp, soma = 0;

    temp = &valor; // temp = endereco de valor;
    *temp = 20; // valor = 20;
    temp = &soma; // temp = endereco de soma;
    *temp = valor; //soma = 20;
    cout << "valor: " << valor << "\nsoma: " << soma << endl; // valor: 20 soma: 20;
}
