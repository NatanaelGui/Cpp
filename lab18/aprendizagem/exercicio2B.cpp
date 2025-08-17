#include <iostream>
using namespace std;

int main()
{
    int soma = 0;
    int i = 1;
    while(i <= 100){        
        
        soma += i;        
        i = i + 2;
    }
    cout << "Soma dos numero impares de 0 a 100: " << soma << endl;

    return 0;
}