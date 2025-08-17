#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char parada = '@';
    char a = 0;
    char vetor[60];    
    char resultado[60];

    cout << "Digite um texto: " << endl;
    cin >> vetor;
    
    for(int i = 0; vetor[i] != '@'; ++i){
        resultado[i] = vetor[i];
    }
    cout << resultado;
    return 0;
}