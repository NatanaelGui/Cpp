#include <iostream>
using namespace std;

int main() {
	int horasPartida = 0, minutosPartida = 0, horasChegada = 0, minutosChegada = 0, diferencaEmMinutos = 0;
	char separador = ' ';

	cout << "Digite o hor�rio de partida (HH:MM): ";
	cin >> horasPartida >> separador >> minutosPartida;
	minutosPartida = ((horasPartida * 60) + minutosPartida);

	cout << "Digite o hor�rio de chegada (HH:MM): ";
	cin >> horasChegada >> separador >> minutosChegada;
	minutosChegada = ((horasChegada * 60) + minutosChegada);

	diferencaEmMinutos = minutosChegada - minutosPartida;
	horasChegada = diferencaEmMinutos / 60;
	minutosChegada = diferencaEmMinutos % 60;

	if (diferencaEmMinutos < 0)
	{
		cout << "N�o � possivel chegar mais cedo do que voc� saiu";
	}
	else
	{
		cout << "O tempo de chegada foi " << horasChegada << " horas e " << minutosChegada << " min";
	}		

	return 0;
}