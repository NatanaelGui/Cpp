#include <iostream>
#define M_PI 3.14

using namespace std;

float VolumeCilindro(float base, float altura);
float VolumeCilindro(float base, float altura){
    float volumeCilindro = ((base * base) * M_PI) * altura;
    return volumeCilindro;
}
int main()
{
    float raioBase, altura, volumeCilindro;

    cout << "Calcula o Volume de um Cilindro" << endl;
    cout << "--------------------------------" << endl;
    cout << "Entre com o raio da base: ";
    cin >> raioBase;
    cout << "Entre com a altura: ";
    cin >> altura;
    volumeCilindro = VolumeCilindro(raioBase, altura);

    cout << "O volume do cilindro é " << volumeCilindro << endl;

    return 0;
}