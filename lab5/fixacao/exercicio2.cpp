#include <iostream>

float convetEmFahrenheit(float);
using namespace std;
int main(){
    float grausCelsius = 0, resultadoEmFahrenheit = 0;
    
    cout << "Digite uma temperatura em graus Celsius: ";
    cin >> grausCelsius;

    resultadoEmFahrenheit = convetEmFahrenheit(grausCelsius);
    cout << grausCelsius << " graus Celsius equivalem a " << resultadoEmFahrenheit << " graus Fahrenheit." << endl;
    return 0;
}

float convetEmFahrenheit(float grausCelsius){
    return (1.8 * grausCelsius) + 32.0;
}