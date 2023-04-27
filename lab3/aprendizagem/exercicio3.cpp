#include<iostream>

using namespace std;
int main (void)
{	
	float tempoM = 0, tempoH = 0, quilos = 0, tempoCorrida = 0, tempoCiclismo = 0, tempoNatacao;
	float calorias = 0;
	char separador = ' ';
	cout << "Digite seu peso em quilos: ";
	cin >> quilos;

	cout << "Digite o tempo de corrida: ";
	cin >> tempoH >> separador >> tempoM >> separador;
	tempoH = tempoH * 60;
	tempoCorrida = tempoH + tempoM;

	cout << "Digite o tempo de ciclismo: ";
	cin >> tempoH >> separador >> tempoM >> separador;
	tempoH = tempoH * 60;
	tempoCiclismo = tempoH + tempoM;

	cout << "Digite o tempo de natação: ";
	cin >> tempoH >> separador >> tempoM >> separador;
	tempoH = tempoH * 60;
	tempoNatacao = tempoH + tempoM;

	calorias += 7.0 * quilos * (tempoCorrida / 60);
	calorias += 7.0 * quilos * (tempoCiclismo / 60);
	calorias += 8.0 * quilos * (tempoNatacao / 60);

	cout << "Você gastou um total de " << calorias << " calorias." << endl;

	return 0;
}