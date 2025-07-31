#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char senha[30] = "Prog", senhaCmp[30] = {""};
    cout << "Digite a senha: ";
    cin.getline(senhaCmp, 30);

    if (strcmp(senha, senhaCmp) == 0) {
        cout << "Senha correta. ";
    }
    else {
        cout << "Senha incorreta. ";
    }
    return 0;
}