#include <iostream>
#include <cmath>

using namespace std;
float anguloVetor(float x, float y);

int main() {
    float x = 0, y = 0, resultado = 0;
    cout << "Digite as coordenadas do vetor: " << endl;
    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;
    resultado = anguloVetor(x, y);

    cout << endl << "O ângulo do vetor é " << resultado << " graus." << endl;
    return 0;
}

float anguloVetor(float x, float y){
    
   return  (atan2(y, x) * 180) / M_PI;
}
