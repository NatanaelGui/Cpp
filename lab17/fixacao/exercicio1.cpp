#include <iostream>
#include <cstring>
using namespace std;

int main()
{

    char vetor[] = "*****";    
    char *ptr = vetor;
    ptr = ptr + 4;

    for (int i = 0; i < strlen(vetor) - 1; ++i){

        cout << ptr << endl;
        ptr--;
    }
        
    for (int j = 0; j < vetor[j]; ++j){
        
        cout << ptr << endl;
        ptr++;
    }
}
