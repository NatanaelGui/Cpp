#include<iostream>
using namespace std;

void bip();
void lerSenha(int);
int main() {
	int senha = 0;
	bip();
	cout << "Digite sua senha: __________\b\b\b\b\b\b\b\b\b\b";
	cin >> senha;
	lerSenha(senha);
	return 0;
}
void bip() {	
	cout << "Iniciando com um som...\a" << endl;
}
void lerSenha(int senha) {
	cout << "Obrigado!" << endl;
}