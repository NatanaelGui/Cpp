#include <iostream>
using namespace std;

int main() {
	int km = 0, combustivel = 0, consumo = 0;
	cout << "Distância percorrida (Km): ";
	cin >> km;
	cout << "Litros de combustível: ";
	cin >> combustivel;
	consumo = km / combustivel;
	cout << "O consumo do seu carro foi de " << consumo << " km/litro.\n";
	return 0;
}