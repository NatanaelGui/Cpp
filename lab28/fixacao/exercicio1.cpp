#include<iostream>
using namespace std;

int chamadas(){

    static int qtdChamadas = 0;
    return ++qtdChamadas;
}

int main()
{

    char ch;
    do{

        cout << chamadas() << "a chamada da funcao." << endl;
    } while(cin >> ch && ch != '0');
    
    return 0;
}
