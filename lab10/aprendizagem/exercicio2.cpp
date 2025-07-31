#include <iostream>
using namespace std;

int main(){
float peso[3] = {2.0f, 3.0f, 4.0f}, notas[3];

cout << "Digite a nota 1: ";
cin >> notas[0];

cout << "Digite a nota 2: ";
cin >> notas[1];

cout << "Digite a nota 3: ";
cin >> notas[2];
cout << "\n---------------------\n";
cout << "Media: " << (notas[0] * peso[0] + notas[1] * peso[1] + notas[2] * peso[2]) / 9;
    return 0;
}