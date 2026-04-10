#include <iostream>
using namespace std;

struct CharSet
{
    char *str; // ponteiro para vetor dinâmico
    int tam;   // tamanho do vetor
};

int main()
{

    int base = 5, cont = 0;
    CharSet vector;    
    vector.str = new char[base + 1]; //Sempre um a mais para o '\0'
    vector.tam = base;

    cout << "Digite uma frase para o vetor: ";
    char ch;
    while(cin.get(ch) && ch != '\n'){
        if(cont < vector.tam){            
            
            vector.str[cont] = ch;
            ++cont;
        }
        else {
            
            char *temp = new char[vector.tam * 2 + 1];
            
            for(int i = 0; i < cont; ++i)
                temp[i] = vector.str[i];
            
            delete[] vector.str;
            
            vector.str = temp;
            vector.tam = vector.tam * 2;
            
            vector.str[cont] = ch;
            ++cont;
        }
    }
    vector.str[cont] = '\0';

    cout << "Vetor: " << vector.str << endl;
    cout << "Capacidade final: " << vector.tam << endl;
    delete[] vector.str;
    return 0;
}