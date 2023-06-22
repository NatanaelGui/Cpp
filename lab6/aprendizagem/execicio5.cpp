#include <iostream>
#include <climits>
using namespace std;

void isInt(long long);
void isShort(long long);
int main()
{
	long long valor = 0;
	cout << "Digite um valor inteiro: ";
	cin >> valor;
	isShort(valor);
	isInt(valor);
	
	return 0;
}

void isInt(long long valor) 
{
	if (valor <= INT_MAX) 
	{
		cout << valor << " cabe em  32 bits" << endl;
	}
	else
	{
		cout << valor << " não cabe em 32 bits" << endl;
	}
}

void isShort(long long valor) {
	if (valor <= SHRT_MAX) 
	{
		cout << valor << " cabe em 16 bits" << endl;
	}
	else 
	{
		cout << valor << " não cabe em 16 bits" << endl;
	}
}