#include <iostream>
using namespace std;

unsigned short bitsBaixos(int);
int main() {
	int numero = 0;
	cout << "Digite um número de 4 bytes para exibir seus 16 bits baixos: ";
	cin >> numero;
	numero = bitsBaixos(numero);
	cout << "Os 16 bits mais baixos desse valor correspondem ao número " << numero;
	return 0;
}

unsigned short bitsBaixos(int numero)
{	
	return (numero >> 16) & 65535;	
}