#include <iostream>
using namespace std;

int main()
{
    
    char matrix[16][16];
    int cont = 0;

    for (int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++){

            matrix[i][j] = cont++;
        }
    }   

    cout << "Entre com as coordenadas da regiao de interesse" << endl;
    
    cout << "Linha: ";
    int linhaComeco, linhaFim;
    cin >> linhaComeco >> linhaFim;

    cout << "Coluna: ";
    int colunaComeco, colunaFim;
    cin >> colunaComeco >> colunaFim;

    int qtdLinhas = (linhaFim - linhaComeco) + 1;
    int qtdColunas = (colunaFim - colunaComeco) + 1;

    char **matrixBusca = new char*[qtdLinhas];
    
    for(int i = 0; i < qtdLinhas; i++){                    
        
        matrixBusca[i] = new char[qtdColunas];
    }    

    for (int i = linhaComeco; i <= linhaFim; i++){
        for(int j = colunaComeco; j <= colunaFim; j++){

            matrixBusca[i - linhaComeco][j - colunaComeco] = matrix[i][j];
        }
    }

    cout << "\n====== Matrix: ======\n";
    for(int j = 0; j < qtdColunas; j++){
        for (int i = 0; i < qtdLinhas; i++){

            cout << matrixBusca[i][j] << ' ';
        }
        cout << endl;
    }
    
    for(int i = 0; i < qtdLinhas; i++){                    
        
        delete[] matrixBusca[i];
    }
    delete[] matrixBusca;
    
    return 0;
}
