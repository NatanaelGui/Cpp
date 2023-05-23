#include <iostream>
#include <cmath>
#include "exercicio5.h"

using namespace std;

int main() {
    float x = 0, y = 0, resultadoAngulo = 0, resultadoModulo = 0;
    cout << "Digite as coordenadas do vetor: " << endl;
    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    resultadoAngulo = anguloVetor(x, y);
    resultadoModulo = moduloVetor(x, y);

    cout << endl << "Coordenadas polares do vetor: " << endl;
    cout << "(" << resultadoModulo << ", " << resultadoAngulo << ")" << endl;
    return 0;
}
