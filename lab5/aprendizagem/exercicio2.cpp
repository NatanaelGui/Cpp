#include <iostream>

using namespace std;
float IMC(float m, float kg);

int main() {
    float altura = 0, massa = 0, resultado = 0;
    cout << "Altura: ";
    cin >> altura;

    cout << "Massa: ";
    cin >> massa;

    resultado = IMC(altura, massa);

    cout << "IMC: " << resultado << endl;
    return 0;
}

float IMC(float m, float kg){
    
    return kg / (m * m);
}
