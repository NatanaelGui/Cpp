#include <iostream>
using namespace std;

int main()
{
    
    int peso; 
    cout << "Peso maior ou igual a 115 e menor que 125: ";
    cin >> peso;
    if(peso >= 115 && peso < 125){

        cout << "Verdadeiro" << endl;
    }else {
        cout << "Falso" << endl;
    }

    char ch;
    cout << "Letra igual a q e Q: ";
    cin >> ch;
    if(ch == 'q' || ch == 'Q'){
        cout << "Verdadeiro" << endl;
    }else {
        cout << "Falso" << endl;
    }

    int x;
    cout << "Numero par nao multiplo de 26: ";
    cin >> x;   

    if(((x % 2 ==  0) && (x % 26 != 0)) || ((x % 2 ==  0) && (x != 26))){
        cout << "Verdadeiro" << endl;
    }else {
        cout << "Falso" << endl;
    }

    int donativo;
    cout << "Donativo entre 10 e 20 ou 90 e 100: ";
    cin >> donativo;    
    if ((donativo >= 10 && donativo <= 20) || (donativo >= 90 && donativo <= 100)){
        cout << "Verdadeiro" << endl;
    }else {
        cout << "Falso" << endl;
    }

    cout << "Letra maiuscula ou minuscula: ";    
    cin >> ch;
    
    if(ch >= 'A' && ch <= 'Z'){
        cout << "Maiuscula" << endl;
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout << "Minuscula" << endl;
    }else{
        cout << "Nao e uma letra" << endl;
    }
    return 0;
}
