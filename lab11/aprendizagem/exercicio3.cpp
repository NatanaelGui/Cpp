#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{
        
    cout << "Nome: ";
    char nome[30];
    cin.getline(nome, 30);
    cout << "Data: ";
    char data[12];
    cin >> data;        
    char vet[80] = "";
    
    strcat(vet, nome);
    strcat(vet, " esteve aqui em ");
    strcat(vet, data);

    cout << vet << "\n." ;
}