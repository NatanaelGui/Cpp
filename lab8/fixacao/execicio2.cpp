#include<iostream>
using namespace std;

int main() {
	double numFloat = 0;
	cout << "Digite um ponto flutuante: ";
	cin >> numFloat;
		
	cout << left; cout.width(20); cout << "Nota��o padr�o: " << numFloat << endl;

	cout << left; cout.width(20); cout.setf(ios_base::scientific, ios_base::floatfield);
	cout << "Nota��o cient�fica: " << numFloat << endl;

	cout << left; cout.width(20); cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Nota��o decimal: " << numFloat << endl;
	return 0;
}