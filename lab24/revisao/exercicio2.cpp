#include<iostream>
#include<fstream>
using namespace std;

struct Peixe {
    
    char nome[20];
    unsigned peso;
    float comp;
};

int main()
{
    
    Peixe peixe;
    ifstream fin;
    fin.open("peixes.dat", ios_base::in | ios_base::binary);
    while (fin.read((char *) &peixe, sizeof(Peixe)))
    {
        cout << "\nNome: "<< peixe.nome << endl;
        cout << "Peso: "<< peixe.peso << endl;
        cout << "Comprimento: "<< peixe.comp << endl;
    }

    fin.close();

    cout << "Digite o nome do peixe: ";    
    cin >> peixe.nome;

    cout << "Digite o peso do peixe: ";    
    cin >> peixe.peso;

    cout << "Digite o comprimento do peixe: ";    
    cin >> peixe.comp;

    ofstream fout;
    fout.open("peixes.dat", ios_base::out | ios_base::app | ios_base::binary);
    if(!fout.is_open()){
        cout << "Erro na escrita do arquivo!" << endl;
        return EXIT_FAILURE;
    }
    fout.write((char*) &peixe, sizeof(Peixe));
    fout.close();    

    return 0;
}