#include<iostream>
using namespace std;

int main()
{
    cout << "Digite o tamanho do vetor: ";
    int tamanho = 0;
    cin >> tamanho;
    int *vetor = new int [tamanho];
    cout << "Criando um vetor para " << tamanho << " inteiros..." << endl;    

    delete[] vetor;

}
