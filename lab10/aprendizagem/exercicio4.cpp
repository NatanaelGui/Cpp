#include <iostream>
using namespace std;

//Para quando atingir um bloco de memoria critico
int main() {
    char vet[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5000; i++){
        cout << i << ": " << vet[i] << ", ";
    }

    return 0;
}
