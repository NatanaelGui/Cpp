#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    cout << "Digite uma palavra: ";
    char palavra[50];
    cin >> palavra;

    int qtdLetras = strlen(palavra);
    char* invertida = new char[qtdLetras];
    
    char *ptr = palavra;
    ptr = ptr + qtdLetras - 1;
    
    for (int i = 0; i < qtdLetras; i++){
        invertida[i] = *ptr--;
    }
    invertida[qtdLetras] = '\0';
    cout << "Palavra invertida: " << invertida << endl;

    if (strcmp(palavra, invertida))
        cout << "A palavra não é um palíndromo\n";
    else
        cout << "A palavra é um palíndromo\n";
    return 0;
}

