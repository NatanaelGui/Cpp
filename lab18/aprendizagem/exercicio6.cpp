#include <iostream>
#include <cstring>
using namespace std;

struct Pessoa {
    
    char nome[60]; 
    int idade; 
    bool sexo;
};

int main()
{
    Pessoa pessoa;
    int qtdPessoas = 0, idadeTotal = 0;

    cout << "Digite a palavra \"fim\" no campo nome para finalizar o programa\n";
    while(true){        
        cout << "\n=============== " << "Pessoa: " << qtdPessoas + 1 << " ================\n";
        cout << "Digite o nome: ";        
        cin >> pessoa.nome;
        if(!strcmp(pessoa.nome, "fim")) break;

        cout << "Digite a idade: ";
        cin >> pessoa.idade;
        idadeTotal += pessoa.idade;

        cout << "Digite o sexo (0 Para Menino e 1 Para Menina): ";
        cin >> pessoa.sexo;
        cout << "\n=========================================\n ";

        ++qtdPessoas;
    }

    cout << "\n========== Resultado ==========\n ";
    cout << "Media de idade do grupo: " << idadeTotal / qtdPessoas;
    cout << "\n===============================\n ";

    return 0;
}
