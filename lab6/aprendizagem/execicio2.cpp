#include <iostream>
#include <iomanip>

using namespace std;
#define PAO 0.30
#define PASTEL 0.25

int main() {
	float quantidadePao = 0, quantidadePastel = 0, total = 0;

	cout << right; cout.width(10); cout << "P�es&Cia" << endl;
	cout << "quantos p�es? ";
	cin >> quantidadePao;
	quantidadePao = PAO * quantidadePao;

	cout << "quantos Past�is? ";
	cin >> quantidadePastel;
	quantidadePastel = PASTEL * quantidadePastel;

	total = quantidadePao + quantidadePastel;
	cout << "O total das compras � R$";
	printf("%.2f", total);
	cout << endl;	

	return 0;
}