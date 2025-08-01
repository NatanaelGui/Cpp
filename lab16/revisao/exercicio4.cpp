#include<iostream>
using namespace std;

struct Jogador {
    char nome[20];
    float salario;
    unsigned gols;
};
void exibeJogador(unsigned short qtdJogador,Jogador jogador[]);
int main()
{    
    unsigned short qtdJogador;
    cout << "Escolha a Quantidade de Jogador: ";
    cin >> qtdJogador;    
    Jogador* jogador = new Jogador[qtdJogador];
    
    exibeJogador(qtdJogador, jogador);    
    delete[] jogador;
}

void exibeJogador(unsigned short qtdJogador, Jogador jogador[]){
    for (int i = 0; i < qtdJogador; i++){
        cout << "=================================" << endl;
        cout << "Nome: " << jogador[i].nome << endl;
        cout << "Salario: " << jogador[i].salario << endl;
        cout << "Gols: " << jogador[i].gols << endl;
        cout << "=================================";
    }
    
}