#include<iostream>
using namespace std;

int qtdPalavras(const char frase[]){
    
    if(frase[0] == '\0')
        return 0;
    
    int palavras = 1;

    for(int i = 0; frase[i] != '\0'; ++i){
        
        if(frase[i] == ' ')
            ++palavras;      
    }

    return palavras;
}

int main()
{

    cout << "Entre com uma frase: ";
    char frase[255];
    cin.getline(frase, 255);

    int palavras = 0;
    palavras = qtdPalavras(frase);

    cout << "Existem " << palavras << " palavras nesta frase!" << endl; 
    return 0;
}
