#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch[20];
    int qtdPalavras = 0;

    cout << "Digite palavras (pronto para parar): ";
    cin >> ch;

    while(strcmp(ch, "pronto")){

        ++qtdPalavras;
        cin >> ch;
    }

    cout << "Foram digitadas um total de " << qtdPalavras << " palavras." << endl;
    return 0;
}
