#include <iostream>
using namespace std;

int main()
{
    int A[] = {46, 78, 40, 96, 74, 58, 32, 56, 91, 6};
    int *aPtr = A, *bPtr = A;
    int qtdElementos = sizeof(A) / sizeof(int);
    
    for (int i = 0; i < qtdElementos; i++){
        if(i % 2 == 0){
            
            cout << "[" << *aPtr++;
            *bPtr++;
        }else {
            cout << ","  << *bPtr++ << "] ";
            aPtr++;
        }
    }
    cout << endl;
    

    return 0;
}
