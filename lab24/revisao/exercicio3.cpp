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
    ifstream fin;
    fin.open("pescado.txt");
    if(!fin.is_open()){
        cout << "Erro na leitura do arquivo!" << endl;
        return EXIT_FAILURE;
    }

    ofstream fout;
    fout.open("pescaEx3.bin", ios_base::out | ios_base::binary);
    if(!fout.is_open()){
        cout << "Erro na escrita do arquivo!" << endl;
        return EXIT_FAILURE;
    }

    Peixe p;
    while(fin >> p.nome){
        fin >> p.peso;
        fin >> p.comp;
        
        fout.write((char *) &p, sizeof(Peixe));
    }
    fout.close();
    fin.close();
    return 0;
}