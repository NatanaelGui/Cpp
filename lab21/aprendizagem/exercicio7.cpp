#include <iostream>
#include<cstring>
using namespace std;

struct Nadador{

    char nome[50];
    int idade;
    char categoria[50];
};

int main()
{
    
    while (true){
    
    Nadador n1;

    cout << "Digite o nome do nadador (Digite \'q\' para sair do programa): ";
    cin >> n1.nome;

    if(!strcmp(n1.nome, "q")){
        break;
    }

    cout << "Digite a idade do nadador: ";    
    cin >> n1.idade;

    if(n1.idade >= 5 && n1.idade <= 7){

        strcpy(n1.categoria, "Infantil");
    }
    else if(n1.idade >= 8 && n1.idade <= 10){

        strcpy(n1.categoria, "Juvenil");
    }
    else if(n1.idade >= 11 && n1.idade <= 15){

        strcpy(n1.categoria, "Adolecente");
    }
    else if(n1.idade >= 16 && n1.idade <= 30){

        strcpy(n1.categoria, "Adulto");
    }
    else if(n1.idade >= 31){

        strcpy(n1.categoria, "Senior");
    }
    else {
        cout << "Erro, idade precisa ser a partir de 5.";
        return 0;
    }

    cout << "============== Nadador cadastrado ==============" << endl;
    cout << "Nome: " << n1.nome << endl; 
    cout << "Idade: " << n1.idade << endl; 
    cout << "Categoria: " << n1.categoria << endl; 
    cout << "================================================" << endl;
    };
    
    

    return 0;
}
