#include<iostream>
using namespace std;

int main()
{    
    
    double num1, num2;
    char ch;
    
    do{
    cout << "=========== Calculadora ===========" << endl;
    cout << "Digite o primeiro numero: ";
    cin >> num1;
    
    cout << "Digite o segundo numero: ";
    cin >> num2;
    
    cout << "======================" << endl;
    cout << "1) Adicao " << endl;
    cout << "2) Subitracao " << endl;
    cout << "3) Multiplicacao " << endl;
    cout << "4) Divisao " << endl;
    cout << "======================" << endl;
    cout << "Digite \'s\' para sair" << endl;
    cout << "Escolha a operacao: ";
    cin >> ch;

    switch (ch)
    {
    case '1':
        cout << "======================" << endl;
        cout << "Resultado: " << num1 + num2 << endl;
        cout << endl;
        break;
    
    case '2':
        cout << "======================" << endl;
        cout << "Resultado: " << num1 - num2 << endl;
        cout << endl;
        break;
    case '3':
        cout << "======================" << endl;
        cout << "Resultado: " << num1 * num2 << endl;
        cout << endl;
        break;
    case '4':
        cout << "======================" << endl;
        cout << "Resultado: " << num1 / num2 << endl;
        cout << endl;
        break;
    
    default:
        if(ch != 's')
            cout << "Operacao invalida!" << endl;
        break;
    }
    }while(ch != 's');

    return 0;
}
