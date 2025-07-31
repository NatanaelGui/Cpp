#include <iostream>
using namespace std;

int main()
{
    const unsigned short numChar = 30; 
    char nome1[numChar], nome2[numChar];
    cout << "Primeiro nome? ";
    cin.getline(nome1, 30);
    cout << "Segundo nome? ";
    cin.getline(nome2, 30);
    cout << "Bom dia, " << nome1 << " " << nome2 << "." << endl;
    cout << "Seja bem vindo " << nome1[0] << nome2[0] << "!";
    return 0;
}
