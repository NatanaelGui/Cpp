#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);
int main() {
	char ch = ' ';
	cout << "Digite um caractere para ser codificado: ";
	cin >> ch;
	ch = codificar(ch);
	cout << "Caractere codificado: " << ch << endl;
	ch = decodificar(ch);
	cout << "Caractere decodificado: " << ch << endl;
	return 0;
}

char codificar(char ch)
{
	return ch + 3;
}
char decodificar(char ch)
{
	return ch - 3;
}