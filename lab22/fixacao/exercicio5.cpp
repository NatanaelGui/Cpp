#include<iostream>
using namespace std;

int main()
{
    
    cout << "-------------- Menu do Sistema --------------" << endl;
    cout << "a) Inserir" << endl;
    cout << "b) Remover" << endl;
    cout << "c) Buscar" << endl;
    cout << "d) Sair" << endl << endl;

    char ch;    
    do{
        
        cout << "Escolha: ";
        cin >> ch;
        switch (ch){
            case 'a':
                cout << "Inserindo elementos..." << endl;
                break;
            case 'b':
                cout << "Removendo elementos..." << endl;
                break;
            case 'c':
                cout << "Buscando elementos..." << endl;
                break;
            case 'd':
                cout << "Tchau!" << endl;
                break;
            default:
                cout << "Escolha invalida" << endl;
                break;
        }
    }while (ch != 'd');
    
    return 0;
}
