#include <iostream>

using namespace std;

void transposta(int *vetor){
    cout << *vetor;
}
int main()
{
    int linhas = 3, colunas = 2;
    int vetor[linhas * colunas];
        
    for(int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            cout << "Digite o valor da linha " << i * linhas << " coluna "  << j << ": ";
            cin >> vetor[i * linhas + j];
        }        
    }
    cout << endl;
    for(int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            cout << vetor[i * linhas + j] << " ";
        }
        cout << endl;
    }

     int vetTransposta[colunas * linhas];
     
    for(int i = 0; i < colunas; ++i){
        for (int j = 0; j < linhas; ++j){            
            
            vetTransposta[i * linhas + j] = vetor[j * linhas + i];
        }        
    }
    
    cout << endl;
    cout << endl;
    for(int i = 0; i < colunas; ++i){
        for (int j = 0; j < linhas; ++j){            
            
            cout << vetTransposta[i * linhas + j] << " ";
        }        
        cout << endl;
    }

    return 0;
}
