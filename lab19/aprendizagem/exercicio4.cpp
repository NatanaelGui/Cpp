#include <iostream>
using namespace std;

void exibeVetor(int vetor[]){

    cout << vetor[0] << endl;
}

int main()
{

    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    exibeVetor(mat[0]);
    return 0;
}
