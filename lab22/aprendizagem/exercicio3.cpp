#include<iostream>
using namespace std;

struct Prato {
    char nome[50];
    double preco;
};

int main()
{    
    Prato pratos[5] = {
        {"X-EGG", 6},
        {"X-Salada", 8},
        {"X-Bacon", 10},
        {"X-Burger", 12},
        {"X-Tudo", 15}
    };
    cout << "========= CARDAPIO =========" << endl;
    for(int i = 0; i < 5; ++i){
        cout << i+1 << ") " << pratos[i].nome << "            \t R$" << pratos[i].preco << endl;
    }

    unsigned total = 0;
    char numPrato;
    
    do{
        cout << "Digite o numeros dos pratos que deseja pedir e \'s\' para finalizar o pedido: ";
        cin >> numPrato;
        
        switch(numPrato){
        case '1':
            total += pratos[0].preco;
            cout << "Prato 1 adicionado ao pedido!" << endl;
            break;
        case '2':
            total += pratos[1].preco;
            cout << "Prato 2 adicionado ao pedido!" << endl;
            break;
        case '3':
            total += pratos[2].preco;
            cout << "Prato 3 adicionado ao pedido!" << endl;
            break;
        case '4':
            total += pratos[3].preco;
            cout << "Prato 4 adicionado ao pedido!" << endl;
            break;
        case '5':
            total += pratos[4].preco;
            cout << "Prato 5 adicionado ao pedido!" << endl;
            break;
        default:
            if(numPrato != 's')
                cout << "Prato invalido!" << endl;
            break;
    }
    }while (numPrato != 's');
    

    cout << endl << "Total da conta deu: R$" << total << endl;
    return 0;
}
