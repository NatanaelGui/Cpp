#include <iostream>
using namespace std;

int main()
{
    int idade = 0, menorIdade = 1000, maiorIdade = 0, qtdMaisDezoito = 0;

    cout << "Digite as idades do grupo (0 para encerrar):\n";
    while (true){
        
        cin >> idade;

        if(idade == 0) break;
        if(idade < menorIdade ) menorIdade = idade;
        if(idade > maiorIdade) maiorIdade = idade; 
        if(idade > 18 ) ++qtdMaisDezoito;        
    }

    cout << "\nResultados:\n";
    cout << "Nesse grupo " << qtdMaisDezoito << " pessoas sao maiores de idade." << endl;
    cout << "A pessoa mais velha tem: " << maiorIdade << endl;
    cout << "A pessoa mais nova tem: " << menorIdade << endl;

    return 0;
}
