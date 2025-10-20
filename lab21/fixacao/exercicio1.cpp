#include <iostream>
using namespace std;

struct Contribuentes{
    char nome[30];
    double valor;  
};

int main()
{
    
    cout << "Digite o numero de contribuentes: ";
    int qtdContribuentes, qtdGrandesPatronos = 0, qtdPatronos = 0;
    cin >> qtdContribuentes;
    cin.ignore();

    Contribuentes *vetContribuentes = new Contribuentes[qtdContribuentes];
    
    for(int i = 0; i < qtdContribuentes; i++){
        cout << "#" << i+1 << endl;
        cout << "Nome: ";
        cin.getline(vetContribuentes[i].nome, 30);

        cout << "Valor: ";
        cin >> vetContribuentes[i].valor;
        cin.ignore();
        
        if(vetContribuentes[i].valor >= 10000){
            ++qtdGrandesPatronos;
        }else{
            ++qtdPatronos;
        }
    }

    
    if(qtdGrandesPatronos == 0 && qtdPatronos != 0){
                
        cout << endl << "========== Nenhum Grande Patrono ==========" << endl << endl;
        
        cout << "========== Patronos ==========" << endl;        
        for(int i = 0; i < qtdContribuentes; i++){
                
            cout << "Nome: " << vetContribuentes[i].nome << endl;
            cout << "Valor: " << vetContribuentes[i].valor << endl;
            cout << endl;
        }        
    }
    else if(qtdGrandesPatronos != 0 && qtdPatronos == 0){
    
        cout << "========== Grandes Patronos ==========" << endl;
        for(int i = 0; i < qtdContribuentes; i++){
        
            cout << "Nome: " << vetContribuentes[i].nome << endl;
            cout << "Valor: " << vetContribuentes[i].valor << endl;
            cout << endl;            
        }
        cout << "========== Nenhum Patrono ==========" << endl;
    }
    else if(qtdGrandesPatronos != 0 && qtdPatronos !=0){

        cout << "========== Grandes Patronos ==========" << endl;
        for(int i = 0; i < qtdContribuentes; i++){
        
            if(vetContribuentes[i].valor >= 10000){
                cout << "Nome: " << vetContribuentes[i].nome << endl;
                cout << "Valor: " << vetContribuentes[i].valor << endl;
                cout << endl;            
            }
        }

        cout << "========== Patronos ==========" << endl;
        for(int i = 0; i < qtdContribuentes; i++){
            if(vetContribuentes[i].valor < 10000){
                cout << "Nome: " << vetContribuentes[i].nome << endl;
                cout << "Valor: " << vetContribuentes[i].valor << endl;
                cout << endl;
            }
        }
    }
    else if(qtdGrandesPatronos == 0 && qtdPatronos == 0){
        cout << "========== Zero Patronos ==========" << endl;
    }

    delete vetContribuentes;
    return 0;
}
    
