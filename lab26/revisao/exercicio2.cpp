#include<iostream>
using namespace std;

int subst(char* str, const char c1, const char c2);
int main()
{
    
    cout << "Digite uma frase (enter quando finalizar): ";
    
    char str[255];
    cin.getline(str, 255);
    
    char c1, c2;
    cout << "Digite um caractere da frase para ser substituido: ";
    cin >> c1;

    cout << "Digite o caractere que vai substituir o \'" << c1 << "\': ";
    cin >> c2;
    
    int subNum;
    subNum = subst(str, c1, c2);

    cout << "\n=================================\n";
    cout << "Fraze modificada: " << str;
    cout << endl << "A quabtidade que \'" << c1 << "\' foi substituido por \'" << c2 
    << "\' foi um total de " << subNum << " vezes!";
    cout << "\n=================================\n";
    return 0;
}

int subst(char* str, const char c1, const char c2){

    int subNum = 0;

    for (int i = 0; i < *str; i++){
        
        if(str[i] == c1){
            str[i] = c2;
            ++subNum;
        }        
    }

    return subNum;
}