#include <iostream>
using namespace std;

struct Peixe {
    string nome;
    float peso;
    int comprimento;    
};
void exibePeixe(Peixe p);
void exibePeixePtr(Peixe &p);
int main()
{
    Peixe peixe = {
        "Piaba", 6.2, 5
    };
    Peixe *ptrPeixe = &peixe;

     exibePeixe(peixe);
     exibePeixePtr(*ptrPeixe);
     
}

void exibePeixe(Peixe p){
    cout << "Sem ponteiro: ";
    cout << p.nome;
    cout << " com "<< p.peso << "g e ";
    cout << p.comprimento << "cm" << endl;
}

void exibePeixePtr(Peixe &p){
    cout << "Com ponteiro: ";
    cout << p.nome;    
    cout << " com "<< p.peso << "g e ";
    cout << p.comprimento << "cm" << endl;
}