#include<iostream>

using namespace std;
int main (void)
{	
	float ladoA = 0, ladoB = 0, altura = 0, resultado = 0;	
	cout << "Lado a: ";
	cin >> ladoA;

	cout << "Lado b: ";
	cin >> ladoB;

	resultado = ladoA * ladoB;
	cout << "Área da base = " << resultado << endl;

	cout << "Altura: ";
	cin >> altura;

	resultado = resultado * altura;
	cout << "Volume do prisma = " << resultado << endl;
	return 0;
}