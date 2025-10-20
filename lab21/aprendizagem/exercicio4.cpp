#include <iostream>
using namespace std;

int main()
{
    
    cout << "Exibirei a soma dos pares da sequencia de Fibonacci de 1 a menor que: ";
    unsigned num1 = 1, num2 = 1, soma = 0, result, qtdTermo;
    cin >> qtdTermo;
        
    cout << num1 << "Sequencia percorrida: , ";
    while(num1 + num2 < qtdTermo){

        result = num1 + num2;    
        num1 = num2;
        num2 = result;

        cout << result << ", ";

        if (result % 2 == 0){
            soma += result;
        }
    }
    
    cout << endl << "A Soma dos primeiros termos pares de Fibonacci de 2 a 4000000 eh: " << soma << endl;
    
    return 0;
}
