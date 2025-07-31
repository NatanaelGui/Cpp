#include <iostream>
using namespace std;

struct Conta{
    int id;
    string nome;
    float saldo = 0;
};

ostream& operator<<(ostream &in, Conta c){
    
    in << "Identificador: " << c.id;
    in << "\nNome: " << c.nome;
    in << "\nSaldo: $" << c.saldo;
    return in;
}

struct Palavras
{
    char portugues[20];
    char ingles[20];
    char espanhol[20];
};

Palavras dicionario[10] = {
    {"Lar", "Home", "hogar"},
    {"Homem", "Men", "hombre"}
};

void exibirPalavras()
{
    cout << dicionario[0].portugues << ", " << dicionario[0].ingles << ", " << dicionario[0].espanhol << endl;
    cout << dicionario[1].portugues << ", " << dicionario[1].ingles << ", " << dicionario[1].espanhol << endl;
    cout << dicionario[2].portugues << ", " << dicionario[2].ingles << ", " << dicionario[2].espanhol << endl;
    cout << dicionario[3].portugues << ", " << dicionario[3].ingles << ", " << dicionario[3].espanhol << endl;
    cout << dicionario[4].portugues << ", " << dicionario[4].ingles << ", " << dicionario[4].espanhol << endl;
    cout << dicionario[5].portugues << ", " << dicionario[5].ingles << ", " << dicionario[5].espanhol << endl;
    cout << dicionario[6].portugues << ", " << dicionario[6].ingles << ", " << dicionario[6].espanhol << endl;
    cout << dicionario[7].portugues << ", " << dicionario[7].ingles << ", " << dicionario[7].espanhol << endl;
    cout << dicionario[8].portugues << ", " << dicionario[8].ingles << ", " << dicionario[8].espanhol << endl;
    cout << dicionario[9].portugues << ", " << dicionario[9].ingles << ", " << dicionario[9].espanhol << endl;
}