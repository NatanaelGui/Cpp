#include<iostream>
using namespace std;

struct Peixe {
    char tipo[20];
    float peso;
    unsigned int comprimento;
};
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

    cout << "O peso do peixe e " << ptrPeixe[0].peso << " gramas.";
    delete[] ptrPeixe;
}
