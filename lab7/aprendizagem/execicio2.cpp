#include <iostream>
using namespace std;

char codificar(char);
char decodificar(char);
int main() {
	char ch = ' ';
	int resposta = 0;

	cout << "Digite uma letra: ";
	cin >> ch;
	cout << "Caso deseje codificar essa letra digite (1) caso deseje decodificar digite (0): ";
	cin >> resposta;

	if (resposta == 1) 
	{
		ch = codificar(ch);
		cout << "Caractere codificado: " << ch << endl;
	}
	else if (resposta == 0)
	{
		ch = decodificar(ch);
		cout << "Caractere decodificado: " << ch << endl;
	}
	else
	{
		cout << "Resposta invalida" << endl;
	}
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