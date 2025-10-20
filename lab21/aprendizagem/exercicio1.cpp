#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Valor nao e um \'q\' nem \'k\': ";
    char ch;
    cin >> ch;
    
    tolower(ch) != 'q' && tolower(ch) != 'k' ?
    cout << "Verdadeiro\n" : cout << "Falso\n";

    cout << "Digite Idade, nao esta entre 15 e 26: ";
    int idade;
    cin >> idade;
    idade > 15 && idade < 26 ?
    cout << "Verdadeiro\n" : cout << "Falso\n";
    
    cout << "Digite x, eh impar e maior que 30: ";
    int x;
    cin >> x;
    x % 2 != 0 && x > 30 ?
    cout << "Verdadeiro\n" : cout << "Falso\n";
    
    cout << "Digite num, eh multiplo de 5 ou de 8: ";
    int num;
    cin >> num;
    num % 5 == 0 || num % 8 == 0 ?
    cout << "Verdadeiro\n" : cout << "Falso\n";

    cout << "Digite peso e altura, peso nao eh menor que 50 e altura eh maior que 160: ";
    int peso, altura;
    cin >> peso >> altura;
    peso > 50  && altura > 160 ?
    cout << "Verdadeiro\n" : cout << "Falso\n";
    return 0;
}
    
