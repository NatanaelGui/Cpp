#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int min, max;
	cout << "Digite um valor minimo e um valor maximo: " << endl;
	cin >> min >> max;

	int resultado;
	for (int i = 0; i <=30; i++) {
		resultado = min + rand() % (max - min + 1);
		cout << "Resultado: " << i + 1 << " " << resultado << endl;
	}
	return 0;
}