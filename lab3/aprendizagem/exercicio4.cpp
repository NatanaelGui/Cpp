#include<iostream>

using namespace std;
int main (void)
{	
	float custo = 0, custoDistribuidor = 0, custoImposto = 0;
	cout << "custo de fábrica: ";
	cin >> custo;
	custoDistribuidor = custo  * 0.28;
	custoImposto = custo * 0.45;
	custo += custoDistribuidor + custoImposto;
	cout << "O custo ao consumidor é de R$" << 	custo << endl;
	return 0;
}