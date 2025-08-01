#include <iostream>
using namespace std;
int somaTotal(int[]);

int main(){
    int totalLivros[12];
    cout << "Digite o número de livros vendidos: " << endl;

    const char* meses[] = {
        {"Janeiro: "}, {"Fevereiro: "},{"Março: "}, {"Abril: "}, {"Maio: "}, {"Junho: "}, {"Julho: "},
        {"Agosto: "}, {"setembro: "}, {"Outubro: "}, {"Novembro: "}, {"Dezembro: "}
    };
    
    for (int i = 0; i < 12; i++){        
        cout << meses[i];
        cin >> totalLivros[i];
    }
    
    cout << "\nEm um ano foram vendidos " << somaTotal(totalLivros) << " livros\n";
    return 0;
}

int somaTotal(int totalLivros[]){
    
    int vendidos = 0;
    for (int i = 0; i < 12; i++){
        vendidos += totalLivros[i];
    }
    return vendidos;
}