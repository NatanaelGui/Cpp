#include <iostream>
using namespace std;

struct Contribuentes{
    char nome[30];
    double valor;  
};

int main()
{
    
    cout << "Digite o numero de contribuentes: ";
    int qtdContribuentes;
    cin >> qtdContribuentes;

    Contribuentes *vetContribuentes = new Contribuentes[qtdContribuentes];
    for(int i = 0; i < qtdContribuentes; i++){
        
        cout << "Nome: ";
        cin >> vetContribuentes[i].nome;

        cout << "Valor: ";
        cin >> vetContribuentes[i].valor;
    }

    
    for(int i = 0; i < qtdContribuentes; i++){
        
        cout << "Nome: " << vetContribuentes[i].nome << endl;

        cout << "Valor: " << vetContribuentes[i].valor << endl;
    }

    
}
    
