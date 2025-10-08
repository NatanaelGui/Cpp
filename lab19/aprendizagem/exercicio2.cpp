#include <iostream>
using namespace std;


int main()
{

    int soma = 0, totalVendas[3][12];
    const char *meses[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", 
                                "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

    
    
    for(int i = 0; i < 3; i++){        
        cout << "Digite o numero de livros vendidos no " << i+1 << " ano: " << endl;
        for(int j = 0; j < 12; j++){

            for(int z = 0; meses[j][z]; z++){
                cout << meses[j][z];
            }
            cout << ": ";
            cin >> totalVendas[i][j];            
        }
    }
    
    cout << " ====== Total de vendas ====== " << endl;    
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 12; j++){
            soma += totalVendas[i][j];
        }
        cout << i+1 << " ano: " << soma << endl;
        soma = 0;
    }
    
    for(int i = 0; i < 3; i++){        
        for(int j = 0; j < 12; j++){
            soma += totalVendas[i][j];
        }
    }
    
    cout << "\nNos tres anos foram vendidos " << soma << " livros." << endl;
    return 0;
}
