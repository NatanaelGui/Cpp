#include <iostream>

float mediaHarmonica(float, float);
using namespace std;
int main(){
    float numero, outroNumero, resultadoMedia;
    cout << "Entre com um número: ";
    cin >> numero;
    cout << "Entre com outro número: ";
    cin >> outroNumero;

    resultadoMedia = mediaHarmonica(numero, outroNumero);
    cout << "A média harmônica dos números é " << resultadoMedia << endl;
    return 0;
}

float mediaHarmonica(float numero, float outroNumero){
    return 2.0 * numero * outroNumero / (numero + outroNumero);
}