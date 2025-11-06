#include<iostream>
using namespace std;

int main()
{    
    
    double preco;
    char codigo;
    
    do{
        cout << "Digite o preco do produto: ";
        cin >> preco;
        
        cout << "Digite o codigo do produto (0 para sair): ";
        cin >> codigo;

        switch(codigo){
        case '1':
        case '2':
            cout << "Procedencia: Sul" << endl;
            break;
        case '3':
            cout << "Procedencia: Norte" << endl;
            break;
        case '4':
            cout << "Procedencia: Centro-Oeste" << endl;
            break;
        case '5':
        case '6':
            cout << "Procedencia: Nordeste" << endl;
            break;
        case '7':
        case '8':
        case '9':
            cout << "Procedencia: Sudeste" << endl;
            break;
        default:
            if(codigo != '0')
                cout << "Codigo invalido!" << endl;
            break;
    }
    }while(codigo != '0');
    return 0;
}
