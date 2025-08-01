#include <iostream>
using namespace std;

int main()
{

    char vet[] = "String armazenada no Vetor de caracteres";
    
    cout << "Com Teste: ";
    for(int i=0; vet[i] != '\0'; ++i){
        cout << vet[i];
    }
    cout << endl;

    cout << "Sem Teste: ";    
    for(unsigned i=0; i < sizeof(vet) / sizeof(char); ++i){
        cout << vet[i];
    }
}