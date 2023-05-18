#include <iostream>
#include <cmath>

int Absoluto(float numero);
using namespace std;
int main()
{    
    float numeroDigitado = 0;
    cout << "Digite um número inteiro: ";
    cin >> numeroDigitado;
    numeroDigitado = Absoluto(numeroDigitado);
    cout << "O valor absoluto é: " << numeroDigitado << endl;
    return 0;
}

int Absoluto(float numero){
    float resultado = pow(numero, 2);
    resultado = sqrt(resultado);
    return resultado; 
}