#include <iostream>
#include <iomanip>

using namespace std;
#define PAO 0.30
#define PASTEL 0.25

int main() {
	float quantidadePao = 0, quantidadePastel = 0, total = 0;

	cout << right; cout.width(10); cout << "Pães&Cia" << endl;
	cout << "quantos pães? ";
	cin >> quantidadePao;
	quantidadePao = PAO * quantidadePao;

	cout << "quantos Pastéis? ";
	cin >> quantidadePastel;
	quantidadePastel = PASTEL * quantidadePastel;

	total = quantidadePao + quantidadePastel;
	cout << "O total das compras é R$";
	printf("%.2f", total);
	cout << endl;	

	return 0;
}