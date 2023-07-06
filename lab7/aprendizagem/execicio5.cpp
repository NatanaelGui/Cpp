#include <iostream>
using namespace std;

void exibirBits(unsigned char);
bool testarBit(unsigned char, int);
int main() {
	unsigned char ch = ' ';
	unsigned short numero = 0;
	cout << "Digite um valor entre 0 e 255: ";
	cin >> numero;
	ch = numero;
	exibirBits(ch);
	return 0;
}

void exibirBits(unsigned char ch)
{	
	cout << "O número 143 em binário é ";
	cout << testarBit(ch, 7);
	cout << testarBit(ch, 6);
	cout << testarBit(ch, 5);
	cout << testarBit(ch, 4);
	cout << testarBit(ch, 3);
	cout << testarBit(ch, 2);
	cout << testarBit(ch, 1);
	cout << testarBit(ch, 0);
	cout << endl;
}
bool testarBit(unsigned char ch, int posicao)
{
	if (ch & (1 << posicao))
	{
		return true;
	}
	else
	{
		return false;
	}
}