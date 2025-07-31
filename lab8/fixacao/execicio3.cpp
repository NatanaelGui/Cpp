#include<iostream>
#define segundosPorAnos 3.156e7
using namespace std;

float anosParaSegundos(int);
int main()
{
	int idade = 0;
	cout << "Digite sua idade em anos: ";
	cin >> idade;
	cout << idade << " anos equivalem " << anosParaSegundos(idade) << " segundos." << endl;

	cout.setf(ios_base::floatfield, ios_base::fixed);
	cout.precision(1);
	cout << idade << " anos equivalem " << anosParaSegundos(idade) << " segundos." << endl;
	return 0;
}
float anosParaSegundos(int anos)
{
	return anos * segundosPorAnos;
}