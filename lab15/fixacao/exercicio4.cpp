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
    int quantidade = 0;
    cout << "Entre com a quantidade de carros: ";
    cin >> quantidade;
    Carro *carro = new Carro[quantidade];

    cout << "Entre com os dados de 2 carros: " << endl;
    cin >> carro[0].modelo >> carro[0].ano >> carro[0].preco;
    cin >> carro[1].modelo >> carro[1].ano >> carro[1].preco;        
    
    cout << "O valor total e R$" << fixed << setprecision(3) << carro[0].preco + carro[1].preco;

    delete[] carro;
}