#include <iostream>
using namespace std;

int main()
{

    cout << "Entre com o número de linhas: ";
    int linhas;
    cin >> linhas;
    cout << endl;

    for (int i = linhas; i > 0; i--){
        for (int j = 1; j < i; j++){
            cout << ".";
        }
        
        for (int k = i - 1; k < linhas; k++){
            cout << "*";
        }
        cout << endl;
        
    }
    
}

