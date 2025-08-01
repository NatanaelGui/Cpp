#include <iostream>
using namespace std;

int main()
{
    int B[] = {32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };    
    int qtdElementos = sizeof(B) / sizeof(int);
    
    for (int i = 0; i < qtdElementos; i++){
        cout << "[" << B[i] << ","  << B[--qtdElementos]<< "] ";
    }
    cout << endl;
    

    return 0;
}
