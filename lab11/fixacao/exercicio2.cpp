#include <iostream>
using namespace std;

int main()
{
    char nome[30], conceito;
    
    cout << "Qual eh o nome? ";
    cin.getline(nome, 30);
    cout << "Que conceito você merece? ";
    cin >> conceito;    
    cout << "\nBom dia, " << nome << ". " << "Seu conceito eh " << conceito-- << endl;    
    return 0;
}
