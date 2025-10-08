#include <iostream>
using namespace std;

int main()
{

    int soma = 0, linhas = 5, colunas = 5;
    int matrix[linhas][colunas] = {{38, 51, 50, 56, 98},
                                    {17, 65, 25, 62, 54},
                                    {23, 23, 64, 45, 92},
                                    {41, 39, 19, 68, 87},
                                    {65, 10, 12, 22, 13}};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            soma += matrix[i][j];
        }        
    }
    
    int qtdElementos = linhas * colunas;
    cout << "A media dos elementos da matriz e: " << (soma / qtdElementos) << endl;
    return 0;
}
