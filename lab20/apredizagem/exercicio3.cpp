#include<iostream>
using namespace std;

int main()
{
    char ch, qtdSubstituicao = 0;

    cout << "Digite um texto (# para finalizar): \n";    
        
    while((ch = cin.get()) != '#'){
        
        if(ch == '\n'){
            
            cin.clear();
            cout << endl;
            ch = cin.get();
        }
        
        if(ch == '.') {

            cout << '!';            
            ++qtdSubstituicao;
        }
        
        else if(ch == '!'){

            cout << "!!";
            ++qtdSubstituicao;
        }
        
        else {
            cout << ch;
        }
        
    }    

    cout << endl << "Substituicoes: " << short(qtdSubstituicao) << endl;

    return 0;
}
