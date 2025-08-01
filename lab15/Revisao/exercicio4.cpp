#include<iostream>
using namespace std;

struct Peixe {
    char tipo[20];
    float peso;
    unsigned int comprimento;
};

void exibirPeso(Peixe peixe[]);
int main()
{
    cout << "Tamanho: do vetor: ";
    int tamanho;
    cin >> tamanho;
    Peixe *ptrPeixe = new Peixe[tamanho];

    cout << "\nTipo: ";
    cin >> ptrPeixe[0].tipo;
    
    cout << "Peso: ";
    cin >> ptrPeixe[0].peso;
    
    cout << "Comprimento: ";
    cin >> ptrPeixe[0].comprimento;
    
    cout << "===================================\n";
    cout << "Tipo: " << ptrPeixe[0].tipo << endl
         << "Peso: " << ptrPeixe[0].peso << endl
         << "Comprimento: " << ptrPeixe[0].comprimento << endl;
    cout << "===================================\n\n";

    exibirPeso(ptrPeixe);
    delete[] ptrPeixe;
}

void exibirPeso(Peixe peixe[]){
    cout << "O peso do peixe e " << peixe[0].peso << " gramas.";
}
