#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    
    ifstream fin;
    fin.open("pescado.txt");
    if(!fin.is_open()){
        cout << "Erro ao abrir o arquivo!" << endl;
        return EXIT_FAILURE;
    }
    
    char nome[50];
    int pesoG, comprimentoCm, pesoKg = 0;

    
    while(fin >> nome){
        fin >> pesoG;
        pesoKg += pesoG;
        fin >> comprimentoCm;
    }

    fin.close();

    cout << "A quantidade total de quilos de peixe pescado eh: " << pesoKg << endl;
    return 0;
}
