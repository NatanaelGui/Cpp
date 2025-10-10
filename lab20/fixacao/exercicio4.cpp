#include <iostream>
using namespace std;

int main()
{
    
    cout << "Digite as notas e frequencia da disciplina\n";
    
    double vetNotas[4], soma = 0;
    for(int i = 0; i < 3; i++){
        cout << "Nota " << i+1 << ": ";
        cin >> vetNotas[i];
        soma += vetNotas[i];
    }
    
    int faltas;
    cout << "Faltas: ";
    cin >> faltas;

    if(faltas > 17){
        cout << "\nreprovado\n";
        return 0;
    }

    if((soma / 4) >= 5.0){
        cout << "\naprovado\n";
        return 0;
    }    
    
    cout << "4 prova \n";
    cout << "Digite sua 4 nota: ";
    cin >> vetNotas[3];

    soma = 0;
    for(int i = 0; i < 4; i++){        
        soma += vetNotas[i];
    }

    if((soma / 4) < 5){
        cout << "\nreprovado\n";
        return 0;        
    }

    cout << "Aprovado\n";
    return 0;
}
