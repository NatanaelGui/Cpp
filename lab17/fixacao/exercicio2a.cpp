#include<iostream>
using namespace std;

int main(){
    
    cout << "Entre com o número de linhas: ";
    int linhas;
    cin >> linhas;
    for (int i = 1; i <= linhas; i++){
        
        for (int k = 1; k <= (linhas - i); k++){
            cout << ".";
        }
        
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}
