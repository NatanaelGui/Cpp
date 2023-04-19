#include<iostream>

using namespace std;
int main (void)
{
	int segundos, minutos;
	cout << "Digite uma quantidade de minutos:";
	cin >> minutos;
	segundos = 60 * minutos;
	cout << "Existem " << segundos << " segundos em " << minutos << " minutos.\n";		
	return 0;
}

