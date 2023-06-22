#include<iostream>
using namespace std;

//estrutura de estilo
#define default "\033[m"
// 4 = estilo do texto 37 = cor da letra 40 = cor do fundo
#define black "\033[4;37;40m"

int main()
{
	cout << black << "Preto no Branco " << default << endl;

	return 0;
}