#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    int total = 0, qtdProdutoCaro = 0, maiorPreco = 0, preco;
    char produto[50], produtoMaisCaro[50], flagSair;

    cout << "========== LOJA DE INFORMATICA ==========";
    
    do{
        
        cout << endl << endl << "-----------------------------------------" << endl;
        cout << "Produto: ";
        cin >> produto;
        
        cout << "Preco: ";
        cin >> preco;
        cout << "-----------------------------------------" << endl;

        total += preco;

        if(preco > 1000){
            ++qtdProdutoCaro;
        }
        
        if(preco >= maiorPreco){
            maiorPreco = preco;
            int i = 0;
            for(; produto[i]; i++){
                produtoMaisCaro[i] = produto[i];
            }
            produtoMaisCaro[i] = '\0';
        }

        
        cout << "Deseja continuar [S/N]? ";
        cin >> flagSair;
        flagSair = tolower(flagSair);
        
        while(flagSair != 'n' && flagSair != 's'){
                
            cout << "Caractere invalido! Tente novamente.\n";
            cout << "Deseja continuar [S/N]? ";
            cin >> flagSair;
            flagSair = tolower(flagSair);   
        }
    }while(flagSair == 's');

    cout << endl << endl << "Total da compra: R$" << total << endl;
    cout << qtdProdutoCaro << " produtos custam mais de R$1000." << endl;
    cout << produtoMaisCaro << " e o produto mais caro." << endl;
    return 0;
}
    
