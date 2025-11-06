#include <iostream>
using namespace std;

struct Bop {
    char nome[50];
    char cargo[50];
    char apelido[50];
    int pref; // 0 = nome, 1 cargo, 2 = apelido
};

int main()
{
    Bop funcionarios[4] = {
        {"Jose", "Porteiro", "Ze", 0},
        {"Marcos", "Chaveiro", "Paquito", 1},
        {"Joao", "Seguranca", "Bolinha", 2},
        {"Carlos", "Pedreiro", "Kaka", 2}
    };
    
    cout << "a. Mostra por nome" << endl;
    cout << "b. Mostra por cargo" << endl;
    cout << "c. Mostra por apelido" << endl;
    cout << "d. Mostra por preferencia" << endl;
    cout << "e. Sair" << endl << endl;
    char ch;    
    do
    {

        cout << "Digite sua opcao: ";
        cin >> ch;
        switch (ch)
        {
            case 'a':
                
                for(int i = 0; i < 4; i++){
                    cout << funcionarios[i].nome << endl;
                }
                cout << endl;
                break;
            case 'b':
                
                for(int i = 0; i < 4; i++){
                    cout << funcionarios[i].cargo << endl;
                }
                cout << endl;
                break;
            case 'c':
                
                for(int i = 0; i < 4; i++){
                    cout << funcionarios[i].apelido << endl;
                }
                cout << endl;
                break;
            case 'd':
                
                for(int i = 0; i < 4; i++){
                    switch(funcionarios[i].pref)
                    {
                        case 0:
                            cout << funcionarios[i].nome << endl;
                            break;
                        case 1:
                            cout << funcionarios[i].cargo << endl;
                            break;
                        case 2: 
                            cout << funcionarios[i].apelido << endl;
                            break;
                    }
                }
                cout << endl;
                
                break;
            case 'e':
                cout << "Tchau!" << endl;
                break;                            
        }    
    }while (ch != 'e');
    
    return 0;
}