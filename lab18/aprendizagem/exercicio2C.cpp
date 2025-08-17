#include <iostream>
using namespace std;

int main()
{
    int soma = 0;
    int i = 1;

    do{
        soma += i;
        i = i + 2;
    }while(i <= 100);
    cout << "Soma dos numero impares de 0 a 100: " << soma << endl;

    return 0;
}