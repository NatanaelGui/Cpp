#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main()
{
    
    cout << "Nome do arquivo: ";
    char nome[50];
    cin.getline(nome, 50);    

    ifstream fin;
    fin.open(nome);
    if(!fin.is_open()){
        cout << "Falha na abertura do arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Palavra: ";
    char palavra[100], palavraFin[100];
    bool achou = false;
    cin >> palavra;

    do {
        fin >> palavraFin;
        if(!strcmp(palavra, palavraFin)){
            cout << "A palavra " << palavra << " esta presente no texto." << endl;
            achou = true;
            break;
        }
    }while(!fin.eof());

    if(!achou){
        
        cout << palavra << " NAO esta presente no texto." << endl;
    }

    fin.close();    
    return 0;
}
