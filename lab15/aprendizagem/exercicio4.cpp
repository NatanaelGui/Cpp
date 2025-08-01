#include <iostream>
using namespace std;
const unsigned short QTD_MAX_CARACTER = 40;

struct Local{
    char nome[QTD_MAX_CARACTER];
    char pais[QTD_MAX_CARACTER];
    char continente[QTD_MAX_CARACTER];

};

int main()
{
    
    cout << "Quantos lugares voce quer visitar nas proximas ferias: ";
    int qtdLocais;
    cin >> qtdLocais;
    cin.ignore();

    Local *locais = new Local[qtdLocais];
    
    cout << "\n=======================\n";
    for(int i=0; i<qtdLocais; ++i){
        cout << "Informe o continente do local " << i+1 << ": ";
        cin.getline(locais[i].continente, QTD_MAX_CARACTER);

        cout << "Informe o pais do local " << i+1 << ": ";
        cin.getline(locais[i].pais, QTD_MAX_CARACTER) ;

        cout << "Informe o nome do local " << i+1 << ": ";
        cin.getline(locais[i].nome, QTD_MAX_CARACTER) ;
        cout << "\n======================\n";
    }

    cout << "\n=======================\n";
    for(int i=0; i<qtdLocais; ++i){
        cout << "Continente do local " << i+1 << ": " << locais[i].continente << endl;
        cout << "Continente do pais " << i+1 << ": " << locais[i].pais << endl;
        cout << "Continente do nome " << i+1 << ": " << locais[i].nome << endl;
        
        cout << "\n======================\n";
    }

    delete locais;
}