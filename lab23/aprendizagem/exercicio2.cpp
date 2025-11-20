#include<iostream>
#include<fstream>
#include<cctype>
#include<cstring>
using namespace std;

int main()
{
    
    cout << "Arquivo: ";
    char arquivo[255];
    cin >> arquivo;
    
    ifstream fin;
    fin.open(arquivo);
    if(!fin.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    char palavra[100], palavra_ivertida[100];
    int qtdPalintromos = 0;
    
    while(fin >> palavra){        
        int qtdLetras = strlen(palavra);

        for(int i = 0; i < qtdLetras; ++i)            
            palavra[i] = tolower(palavra[i]);
        
        palavra[qtdLetras] = '\0';

        for(int i = 0; i < qtdLetras; ++i)            
            palavra_ivertida[i] = palavra[(qtdLetras - 1) - i];
    
        palavra_ivertida[qtdLetras] = '\0';
                
        if(!strcmp(palavra_ivertida, palavra)){
            cout << palavra << endl;
            ++qtdPalintromos;
        }        
    }
    
    cout << "Foram encontrados " << qtdPalintromos << " palindromos neste arquivo." << endl;
    fin.close();
    return 0;
}
