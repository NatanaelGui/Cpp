#include <iostream>
#include <cmath>

using namespace std;
float ModuloVetor(float x, float y);

int main() {
    float x = 0, y = 0, resultado = 0;
    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;
    resultado = ModuloVetor(x, y);

    cout << "O tamanho do vetor é " << resultado << endl;
    return 0;
}

float ModuloVetor(float x, float y){
    
   return  sqrt(pow(x, 2) + pow(y, 2));
}
