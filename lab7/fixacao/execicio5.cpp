#include <iostream>

using namespace std;

bool testBit(char ch, int bit);
void exibirBits(char ch);
char desligarBits(char ch, int bit);
char ligarBits(char ch, int bit);
int main() 
{
	unsigned char ch = 1;
	int numeroBit = 0;	
	exibirBits(ch);

	cout << "Qual o bit de 0 a 7 você deseja desligar? ";
	cin >> numeroBit;
	ch = desligarBits(ch, numeroBit);
	exibirBits(ch);
	
	cout << "Qual o bit de 0 a 7 você deseja ligar? ";
	cin >> numeroBit;
	ch = ligarBits(ch, numeroBit);
	exibirBits(ch);
}

bool testBit(char ch, int bit)
{
	if (ch & (1 << bit)) 
	{
		return true;
	}
	else
	{
		return false;
	}	
}
void exibirBits(char ch) 
{
	cout << "Estado atual dos bits: ";
	cout << testBit(ch, 7);
	cout << testBit(ch, 6);
	cout << testBit(ch, 5);
	cout << testBit(ch, 4);
	cout << testBit(ch, 3);
	cout << testBit(ch, 2);
	cout << testBit(ch, 1);
	cout << testBit(ch, 0);
	cout << endl;
}

char desligarBits(char ch, int bit)
{
	return ch & ~(1 << bit);
}

char ligarBits(char ch, int bit)
{
	return ch | (1 << bit);
}