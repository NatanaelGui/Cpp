#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void preencheVet(const int valor, int* inicio, int* fim){

    while(inicio != fim){
        *inicio = valor;
        ++inicio;
    }
}

void criaArquivo(char nomeArquivo[], int valor){
    
    ofstream fout;
    fout.open(nomeArquivo, ios_base::out | ios_base::binary | ios_base::trunc);
    if(!fout.is_open()){
        
        cout << "Erro na abertura do arquivo!" << endl;
        exit(EXIT_FAILURE);
    }

    fout.write((char *) &valor, sizeof(valor));
    fout.close();
}

int lerArquivo(char nomeArquivo[]){
    ifstream cin;
    cin.open(nomeArquivo, ios_base::in | ios_base::binary);
    
    if(!cin.is_open()){
        cout << "Erro na abertura do arquivo!" << endl;
        exit(EXIT_FAILURE);
    }
    
    int valor = 0;
    
    cin.read((char *) &valor, sizeof(valor));
    cin.close();

    return valor;
}

int main()
{
    int VetTam = 8;
    int potencias[VetTam] = { 1,2,4,8,16,32,64,128 };
    
    cout << "Digite o nome do arquivo: ";
    char nomeArquivo[100];
    cin >> nomeArquivo;
    
    srand(static_cast<unsigned int>(time(nullptr)));
    int valor = rand() % 100;    

    criaArquivo(nomeArquivo, valor);
    valor = lerArquivo(nomeArquivo);
    
    preencheVet(valor, potencias, potencias + VetTam);
    
    for (int i = 0; i < VetTam; i++)
        cout << "Vetor Depois: " << potencias[i] << endl;
        
    return 0;
}
