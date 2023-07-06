#include<iostream>
using namespace std;

void convertASCII(int num);
int main() {
	//digite esses numeros 80 114 111 103 67 111 109 112
	int num1, num2, num3, num4, num5, num6, num7, num8;
	cout << " Digite um numéro: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8;
	convertASCII(num1);
	convertASCII(num2);
	convertASCII(num3);
	convertASCII(num4);
	convertASCII(num5);
	convertASCII(num6);
	convertASCII(num7);
	convertASCII(num8);
	return 0;
}
void convertASCII(int num) {
	char numero = num;
	cout << "Esse numéro é o caractere \"" << numero << "\" correspondente da tabela ASCCI" << endl;
}