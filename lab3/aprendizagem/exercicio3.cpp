#include<iostream>

using namespace std;
int main (void)
{	
	int numero = 0, i = 0, multiplicado = 0, resultado = 0;
	cout << "Entre com um número de (0 a 9): ";
	cin >> numero;
	cout << "Tabuada do " << numero << endl;
	cout << "----------------" << endl;
	for (i > 0; i <= 9; i++)
	{
		resultado = numero * multiplicado;
		cout << numero << " x " << multiplicado << " = " << resultado << endl;
		multiplicado = multiplicado + 1;
	}
	cout << endl;
	return 0;
}