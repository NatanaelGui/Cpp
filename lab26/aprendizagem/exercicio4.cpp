#include<iostream>
#include<fstream>
using namespace std;

struct Produto {

    double normal;
    double atacado;
    int qtdParaAtacado;
};

double totalPagar(Produto preco, int pedidos){

    double total = 0;
    if(pedidos >= preco.qtdParaAtacado)
        return total = preco.atacado * pedidos;
            
    return preco.normal * pedidos;
}

double totalPedido(Produto produtos[], int pedidos[]){
    
    double total = 0;
    
    for (int i = 0; i < pedidos[0]; i++){//primeiro numero do pedidos[] eh a quantidade de pedidos diferentes
        
        total += totalPagar(produtos[i], pedidos[i+1]);
    }
    
    return total;
}

void lerArquivo(Produto produtos[], int pedidos[]){
    
    ifstream fin;
    fin.open("Pedido.txt", ios_base::in);
    
    int i = 0;
    while(fin >> pedidos[i])
        ++i;
    
    fin.close();
    
    fin.open("Produtos.txt", ios_base::in);    
    i = 0;
    char temp;
    while (fin >> temp){
                
        switch (temp)
        {
            case 'N':                
                fin >> temp;
                fin >> produtos[i].normal;                
                break;
            case 'A':                
                fin >> temp;
                fin >> produtos[i].atacado;                
                break;
            
            case 'Q':                
                fin >> temp;
                fin >> produtos[i].qtdParaAtacado;                
                ++i;
                break;        
        }        
    }
        
}

int main()
{
    
    int pedidos[200];
    Produto produtos[200];
    double total = 0;

    lerArquivo(produtos, pedidos);
    total = totalPedido(produtos, pedidos);
    cout << "O valor total do pedido ficou: $" << total << endl;    
    return 0;
}
