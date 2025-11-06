#include <iostream>
using namespace std;
int main()
{
    char escolha;//bug no buffer quando usa tipos numericos e digita caracteres
    cin >> escolha;
    while (escolha != '5') {
        switch (escolha) {
            case '1' : cout << "Boa escolha\n"; break;
            case '2' : cout << "Estou na duvida\n"; break;
            case '3' : cout << "Nao sei o que dizer\n"; break;
            case '4' : cout << "Quatro e um numero\n"; break;
            default: cout << "Esta nao e uma opcao\n";
        }
        cin >> escolha;
    }

    return 0;
}