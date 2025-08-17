#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "Escreva uma frase de ate 60 caracteres: " << endl;
    char frase[60], fraseInvertida[60], fraseSemSpaco[60];
    cin.get(frase, 60);

    int a = 0;
    int b = 0;
    while (frase[a] != '\0')
    {
        if (frase[a] != ' ')
        {
            fraseSemSpaco[b] = frase[a];
            ++b;
        }
        ++a;
    }
    fraseSemSpaco[b] = '\0';    
    --b;

    int qtdLetras = b + 1;
    
    for(int i = 0; i < qtdLetras; ++i){
        fraseInvertida[i] = fraseSemSpaco[b];
        --b;
    }
    fraseInvertida[qtdLetras] = '\0';

    if(strcmp(fraseSemSpaco, fraseInvertida)){
        cout << "Nao e um palintromo" << endl;
        return 0;
    }
    cout << "E um palintromo" << endl;

    return 0;
}
