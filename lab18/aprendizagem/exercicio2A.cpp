#include <iostream>
using namespace std;

int main()
{
    int soma = 0;
    for(int i = 1; i <= 100; i = i + 2){

        soma += i;
    }

    cout << "Soma dos numero impares de 0 a 100: " << soma << endl;

    return 0;
}