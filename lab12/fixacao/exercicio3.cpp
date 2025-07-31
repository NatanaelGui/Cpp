#include<iostream>
#include<iomanip>
using namespace std;

struct Data {
    unsigned short dia;
    unsigned short mes;
    unsigned short ano;
};

int anosEmDias(Data nascimento, Data atual);
int main()
{
    
    Data nascimento, atual;
    char separador;
    cout << "Data de nascimento: ";
    cin >> nascimento.dia >> separador >> nascimento.mes >> separador >> nascimento.ano;
    
    cout << "Data de hoje: ";
    cin >> atual.dia >> separador >> atual.mes >> separador >> atual.ano;

    cout << "Voce tem " << anosEmDias(nascimento, atual);
    cout << " dias de vida.\n";
    
    return 0;
}

int anosEmDias(Data nascimento, Data atual){
    
    const int DiasPorMes = 31;
	const int DiasPorAno = 31 * 12;
	
	// Na data 05/02/2010, temos 1 (um) mês completo e mais 5 dias em 2010
	// Essa é a justificativa para subtrair 1 do valor do mês
	int ini = (nascimento.ano * DiasPorAno) + ((nascimento.mes - 1) * DiasPorMes) + nascimento.dia;
	int fim = (atual.ano * DiasPorAno) + ((atual.mes - 1) * DiasPorMes) + atual.dia;

	return fim - ini;
}

