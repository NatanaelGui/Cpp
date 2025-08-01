#include<iostream>
using namespace std;

int main()
{
    int tamanho = 0; 
    cout << "Digite o numero de alunos (minimo 2): ";
    cin >> tamanho;
    float *notaAlunos = new float[tamanho];    
    cout << "Digite a nota de dois alunos: ";
    cin >> notaAlunos[0] >> notaAlunos[1];    
    cout << "As notas digitadas foram " << notaAlunos[0] << " e " << notaAlunos[1];

    delete[] notaAlunos;
}
