#include <iostream>
using namespace std;

struct Carro {
    string fabricate;
    int ano;
};

int main(){
    int qtd = 0;
    cout << "Quantos carros para catalogar? ";
    cin >> qtd;
    Carro* vetCarros = new Carro[qtd];

    for (int i = 0; i < qtd; i++){
        cout << "Carro #" << i+1 << endl;
        cout << "Marca: ";
        cin >> vetCarros[i].fabricate;
        cout << "Ano de Construção: ";
        cin >> vetCarros[i].ano;
    }
    
    cout << "\nAqui está sua coleção:" << endl;
    for(int i=0; i<qtd; i++){
        cout << vetCarros[i].ano << " ";
        cout << vetCarros[i].fabricate << endl;
    }

    delete[] vetCarros;

    return 0;
}