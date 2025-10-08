#include <iostream>
using namespace std;

int main()
{
    
    int soma = 0, vetor[10] = {0, 1, 0, 0, 1, 0, 1, 1, 1, 1};

    for(int i = 0; i < sizeof(vetor) / sizeof(int); i++){
        soma += vetor[i];
    }

    cout <<  endl << "O valor de somar dos elementos do vetor e: " << soma << endl;

    return 0;
}
