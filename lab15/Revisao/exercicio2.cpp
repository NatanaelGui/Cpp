#include<iostream>
#include <string.h>
using namespace std;

struct Peixe {
    char tipo[20];
    float peso;
    unsigned int comprimento;
};
int main()
{
    Peixe peixe = {"Atum", 2.00, 30};
    Peixe *ptrPeixe = new Peixe;

    strcpy(ptrPeixe->tipo, "Piaba");
    ptrPeixe->peso = 6.7f;
    ptrPeixe->comprimento = 8;
    
    cout << "===================================\n";
    cout << "Tipo: " << peixe.tipo << endl
         << "Peso: " << peixe.peso << endl
         << "Comprimento: " << peixe.comprimento << endl;
    cout << "===================================\n";
    cout << "Tipo: " << ptrPeixe->tipo << endl
         << "Peso: " << ptrPeixe->peso << endl
         << "Comprimento: " << ptrPeixe->comprimento << endl;
    cout << "===================================\n";

    delete ptrPeixe;
}
