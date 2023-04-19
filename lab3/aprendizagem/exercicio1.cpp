#include<iostream>

using namespace std;
int main (void)
{	
	float precoMedioCigarro = 0, valorGasto = 0, quantidadeCarteira = 0,
	anosFumando = 0, cigarrosPorDia = 0;

	cout << "A quantos anos você fuma? ";
	cin >> anosFumando;
	anosFumando = anosFumando * 365;

	cout << "Quantos cigarros você fuma por dia? ";
	cin >> cigarrosPorDia;
	cigarrosPorDia = cigarrosPorDia * anosFumando;
	quantidadeCarteira = cigarrosPorDia / 20;

	cout << "Qual o preço médio de uma carteira de cigarros? ";
	cin >> precoMedioCigarro;
	valorGasto = precoMedioCigarro * quantidadeCarteira;
	
	cout << "Você gastou até agora R$" << valorGasto << " com cigarros. \n\n";
	return 0;
}