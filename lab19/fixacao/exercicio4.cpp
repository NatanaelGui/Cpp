#include <iostream>
using namespace std;

void repeteCaracteres(char ch){
    
    cout << endl;
    for (int i = 0; i < 20; i++){
        cout << ch;
    }    
    cout << endl;
}

int main()
{
    
    cout << "Digite um caractere: ";
    char caractere;
    cin >> caractere;

    repeteCaracteres(caractere);
    cout << "Programando em C++";
    repeteCaracteres(caractere);

    return 0;
}
