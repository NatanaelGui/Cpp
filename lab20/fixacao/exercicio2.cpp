#include <iostream>
using namespace std;

int somaEntreNumeros(int a, int b, int c){

    if(b >= c){ return 0; }

    int soma = 0;
    for(int i = b; i <= c; ++i){

        if(i % a == 0){
            soma += i;
        }
    }
    
    return soma;
}

int main()
{
    
    cout << "Digite tres numeros inteiros a, b e c (\"a\" maior que 1): ";
    
    int a, b, c, resultado;
    cin >> a >> b >> c;
    
    resultado = somaEntreNumeros(a, b, c);

    if(b >= c){        
        cout << "b precisa ser menor que c\n";
        return 0;
    }

    cout << "A soma e igual a " << resultado << ". " << endl;     
    return 0;
}
