#include<iostream>

using namespace std;
int main (void)
{	
	float horas = 0, minutos = 0;
	char separados = ' ';
	cout << "Que horas são? ";
	cin >> horas >> separados >> minutos;
	cout << "O seu relógio está atrasado. " << endl;
	horas = horas + 1;
	cout << "Agora são " << horas << separados << minutos << endl;
	return 0;
}