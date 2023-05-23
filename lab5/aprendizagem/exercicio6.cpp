#include <iostream>

using namespace std;
float aoQuadrado(float);
float aoCubo(float);

int main() {
    float valor = 0, quadrado = 0, cubo = 0, cuboQuadrado = 0;
    cout << "Digite um valor: ";
    cin >> valor;

    quadrado = aoQuadrado(valor);
    cubo = aoCubo(valor);
    cuboQuadrado = aoCubo(aoQuadrado(valor));

    cout << "Quadrado = " << quadrado << endl;
    cout << "Cubo = " << cubo << endl;
    cout << "Cubo do quadrado = " << cuboQuadrado << endl;
    return 0;
}

float aoQuadrado(float valor){
    return valor * valor;
}

float aoCubo(float valor){
    return valor * valor * valor;
}